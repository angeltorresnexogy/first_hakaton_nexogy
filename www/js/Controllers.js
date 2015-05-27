angular.module('Controllers', ['Security', 'Kandy'])

.controller('BaseController', function($scope, $state, $ionicModal, $ionicPopup, $ionicHistory, SecurityAuthFactory) {

  $scope.loginData = {};

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

  $scope.logout = function(){
    SecurityAuthFactory.authObj().$unauth();
    $state.go('app.login');
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


