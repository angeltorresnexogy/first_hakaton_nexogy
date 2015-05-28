angular.module('Controllers', ['Security', 'Kandy'])

.controller('BaseController', function($scope, $state, $ionicModal, $ionicPopup, SecurityAuthFactory, KandyManager) {

  //User login data
  $scope.loginData = {};

  //User register data
  $scope.registerData = {
    user: {
      country_code: 'US'
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

      SecurityAuthFactory.getUserAuth().then(function(data){
        console.log(data);
      });

      $state.go('app.home');

    }).catch(function(error) {
      $ionicPopup.alert({
        title: 'Authentication failed',
        template: 'Unknown username or wrong password'
      });
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
          $scope.registerData.user.kandy.password = res.password;

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
        $ionicPopup.alert({
          title: 'Registration failed',
          template: 'Invalid arguments'
        });
    });
    
  }

  $scope.logout = function(){
    SecurityAuthFactory.authObj().$unauth();
  }

})

.controller('ProfileController', function($scope, $stateParams) {
    
})

.controller('MessageController', function($scope, $stateParams) {

})
    
.controller('HomeController', function($scope, $stateParams, $ionicHistory, KandyManager) {
    $ionicHistory.clearHistory();

    $scope.call_id = '';

    var onLoginSuccess = function(){
                        console.log('logged');
                        KandyAPI.Phone.updatePresence(0);                        
                      };

    var onLoginFailed = function(){
                        console.log('log failed');
                      };

    var onCallInitiate = function(call){
                        console.log('call initiate');
                        console.log(call.getId());
                        $scope.call_id = call.getId();
                        $audioRingOut[0].play();
                      };

    var onCallInitiateFail  = function(){
                        console.log('call initiate failed');
                      };

    var onCall  = function(call){
                        console.log('call started');
                        console.log(call.getId()); 
                        $scope.call_id = call.getId();
                        $audioRingOut[0].pause();
                      };

    var onCallTerminate  = function(){
                        console.log('call terminated');
                        $audioRingOut[0].pause();                        
                      };

    KandyManager.setup($('#outgoing-video')[0], onLoginSuccess, onLoginFailed, onCallInitiate, onCallInitiateFail, onCall, onCallTerminate);

    KandyManager.logout();
    
    KandyManager.login('angel', 'A1234567');   

    $scope.init_call = function(){
      KandyManager.makeCall('user1@development.nexogy.com', true);
    };

    $scope.end_call = function(){
      KandyManager.endCall($scope.call_id);
      // console.log($scope.call_id);
    };     
})

.controller('PlaylistsCtrl', function($scope, SecurityAuthFactory, $firebaseArray) {
  $scope.messages = $firebaseArray(SecurityAuthFactory.managerFB().$ref().child('messages'));

  $scope.messages.$loaded()
    .then(function(data) {
      $scope.messages = data; // true
  })
  .catch(function(error) {
    console.log("Error:", error);
  });

  messagesRef.$watch(function() {
      console.log("data changed!");
  });

})


