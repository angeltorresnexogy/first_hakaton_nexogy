angular.module('Controllers', ['Security'])

.controller('BaseController', function($scope, $ionicModal, $ionicPopup, SecurityAuthFactory) {

  $scope.loginData = {};

  $scope.$on('security.event.unauthenticated', function(e) {
      $ionicModal.fromTemplateUrl('templates/User/login.html', {
        scope: $scope  
      }).then(function(modal) {
          $scope.modal = modal;
          $scope.modal.show();
      });
  }); 

  $scope.passwordLogin = function() {
    SecurityAuthFactory.authObj().$authWithPassword({
        email: $scope.loginData.email,
        password: $scope.loginData.password
    }).then(function(authData) {
        $scope.modal.remove();
    }).catch(function(error) {
        $ionicPopup.alert({
          title: 'Authentication failed',
          template: 'Unknown username or wrong password'
        });
    });
  };

  $scope.logout = function(){
    console.log('Saliendo');
    SecurityAuthFactory.authObj().$unauth();
  }

}).controller('PlaylistsCtrl', function($scope, SecurityAuthFactory, $firebaseArray) {
  var messagesRef = $firebaseArray(SecurityAuthFactory.managerFB().$ref().child('messages'));

  $scope.messages = {};

  messagesRef.$loaded()
    .then(function(data) {
      $scope.messages = data; // true
      console.log(data);
  })
  .catch(function(error) {
    console.log("Error:", error);
  });

  messagesRef.$watch(function() {
      console.log("data changed!");
  });

})

.controller('PlaylistCtrl', function($scope, $stateParams) {
});
