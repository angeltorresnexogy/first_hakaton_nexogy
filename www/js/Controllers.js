angular.module('Controllers', ['Security', 'Kandy'])

.controller('BaseController', function($scope, $state, $ionicModal, $ionicPopup, $ionicHistory, SecurityAuthFactory) {

  $scope.loginData = {};

  $scope.registerData = {
    user: {
      country_code: 'US'
    }
  };

  $scope.showLoginForm = true;

  $scope.passwordLogin = function() {
    SecurityAuthFactory.authObj().$authWithPassword({
        email: $scope.loginData.email,
        password: $scope.loginData.password
    }).then(function(authData) {
        $state.go('app.home');
    }).catch(function(error) {
        $ionicPopup.alert({
          title: 'Authentication failed',
          template: 'Unknown username or wrong password'
        });
    });
  };


  $scope.userRegister = function(){
    SecurityAuthFactory.authObj().$createUser({
      email: $scope.registerData.email,
      password: $scope.registerData.password
    }).then(function(userData) {

      var userRef = SecurityAuthFactory.managerFB().$ref().child('/users');
      
      $scope.registerData.user.email = $scope.registerData.email;

      userRef.child(userData.uid).set($scope.registerData.user);

      return SecurityAuthFactory.authObj().$authWithPassword({
        email: $scope.registerData.email,
        password: $scope.registerData.password
      });
    }).then(function(authData) {
        $state.go('app.home');
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

.controller('HomeController', function($scope, $stateParams, $ionicHistory, KandyManager) {
    $ionicHistory.clearHistory();
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


