angular
  .module('Security', ['firebase'])
  .constant('SECURITY_FIREBASE_PATH', 'https://scorching-inferno-9201.firebaseio.com/nexogy')
  .factory('SecurityAuthFactory', ['$rootScope', '$firebaseAuth', '$firebaseObject','SECURITY_FIREBASE_PATH', 
  	function securityAuthFactory($rootScope, $firebaseAuth, $firebaseObject, SECURITY_FIREBASE_PATH) {

	  var ref = new Firebase(SECURITY_FIREBASE_PATH);
	  var auth = $firebaseAuth(ref);
    var FB = $firebaseObject(ref);

	  return {
      authObj: function(){
        return auth;
      },
      managerFB: function(){
        return FB;
      }
	  }
}]);