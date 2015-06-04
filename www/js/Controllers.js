angular.module('Controllers', ['Security', 'Kandy'])

.controller('AuthController', function($scope, $state, SecurityAuthFactory, KandyManager) {
	//User login data
	$scope.loginData = {};

	//User register data
	$scope.registerData = {
		user: {
			  kandy: {
			    country_code: 'US',
			  }
		}
	};

  //Flag to switch between form_login and register_login
  $scope.showLoginForm = true;

  $scope.passwordLogin = function() {
    var email = $scope.loginData.email;
    var password = $scope.loginData.password;

    loginUser(email, password);
  }

  var loginUser = function(email, password){

    SecurityAuthFactory.authObj().$authWithPassword({
      email: email,
      password: password
    }).then(function(authData) {

        $state.go('app.home');

    }).catch(function(error) {

		alert('Unknown username or wrong password');
      // $ionicPopup.alert({
      //   title: 'Authentication failed',
      //   template: 'Unknown username or wrong password'
      // });      
    });

  }

  $scope.userRegister = function(){

    SecurityAuthFactory.authObj().$createUser({
      email: $scope.registerData.email,
      password: $scope.registerData.password
    }).then(function(userData) {

      //Create Kandy user
      var kandy_user_id = String(userData.uid).replace(':', '');

      KandyManager.kandyCreateUser(kandy_user_id, $scope.registerData.user.country_code, $scope.registerData.user.first_name, $scope.registerData.user.last_name).then(function(res){
          
          //Add user kandy passoword to user data
          $scope.registerData.user.kandy.password = res.user_password;

          //Create Firebase user
          $scope.registerData.user.email = $scope.registerData.email;

          $scope.registerData.user.kandy.user_id = kandy_user_id;

          var userRef = SecurityAuthFactory.managerFB().child('/users/' + userData.uid);
          userRef.set($scope.registerData.user);

          //Make a login afeter register successfull
          loginUser($scope.registerData.email, $scope.registerData.password);
      });
    }).catch(function(error) {
        console.log(error);

        alert('Registration Failed');
        // $ionicPopup.alert({
        //   title: 'Registration failed',
        //   template: 'Invalid arguments'
        // });
    });
    
  };
})

.controller('BaseController', function($rootScope, $scope, $state, SecurityAuthFactory, KandyManager) {

	$scope.hola = 'logged';
  // $scope.login = '';
  $rootScope.login = null;
  $rootScope.call_id = null;  
  // $scope.call_id = null;

  SecurityAuthFactory.getUserAuth().then(function(data){

      //KandyManager.setup(null, $('#incoming-video')[0], onLoginSuccess, onLoginFailed, onCallInitiate, onCallInitiateFail, onCall, onCallTerminate, onCallIncoming, onCallAnswered);

      // KandyManager.logout();
  
      //KandyManager.login(data.kandy.user_id, data.kandy.password);

      Kandy.initialize({
          widgets: {
              call: "kandy-call-widget", // id call element
          },
          listeners: {
              onIncomingCall: function(){
                console.log('Incoming call');
              },
              onCallStateChanged: function(state){
                console.log('Call State Changed: ' + state);
              }
          }
      });

      Kandy.access.login(onLoginSuccess, onLoginFailed, data.kandy.user_id + '@development.nexogy.com', data.kandy.password);

  });

  var onLoginSuccess = function(){
      console.log('logged');
      // $scope.login = 'logged';

      $rootScope.login = 'logged';
      $state.go('app.home.call');

      // $scope.$apply();      
      // $state.go('app.video');
      // KandyAPI.Phone.updatePresence(0); 
      // loadAddressBook();

      // setInterval(function(){
      //     KandyManager.getIM(getIMSuccessCallback, getIMFailedCallback);
      // }, 1000); 
  };

  var onLoginFailed = function(){
      console.log('log failed');
  };

  var onCall  = function(call){
      console.log('call started');
      console.log(call.getId()); 
      // $scope.call_id = call.getId();
      $rootScope.call_id = call.getId();      
      $audioRingOut[0].pause();
  };

  var onCallIncoming = function(id, callee, via){
      console.log('call incoming');
      // console.log(call.getId()); 
      // // $scope.call_id = call.getId();        
      $rootScope.call_id = {id: id, callee: callee, via: via};
      $state.go('app.home.receive_call');
  };  

  var onCallAnswered = function(){
      console.log('call answered');
      $audioRingIn[0].pause();      
      $audioRingOut[0].pause();         
  };

})
.controller('IncomingCallController', function($rootScope, $scope, $state, SecurityAuthFactory, KandyManager) {

    $audioRingIn[0].play();

    $scope.answer_call = function(){

      // {id: id, callee: callee, via: via}
      console.log($rootScope.call_id);//$scope.call_id);
      KandyManager.answerCall($rootScope.call_id);//$scope.call_id);
    };
})
.controller('CallController', function($rootScope, $scope, $state, SecurityAuthFactory, KandyManager) {

    $scope.init_call = function(){
      $audioRingOut[0].play();
      // KandyManager.makeCall('simplelogin40@development.nexogy.com', true);
      Kandy.call.createVoipCall(onCallInitiate, onCallInitiateFail, 'simplelogin42@development.nexogy.com', true);
    };

    $scope.end_call = function(){
      // KandyManager.endCall($rootScope.call_id);//$scope.call_id);
      Kandy.call.hangup(onCallTerminate, onCallTerminateFail);
    }; 

    var onCallTerminate  = function(){
        console.log('call terminated');
        $audioRingOut[0].pause();      
    };
    
    var onCallTerminateFail  = function(errorMessage){
        console.log('call terminated failed: ' + errorMessage);
    };

    var onCallInitiate = function(){
        console.log('call initiate');
        // console.log(call.getId());

        // $scope.call_id = call.getId();
        // $rootScope.call_id = call.getId();        
    };

    var onCallInitiateFail  = function(errorMessage){
        console.log('call initiate failed: ' + errorMessage);
    };
});