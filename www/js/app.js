// Ionic Starter App

// angular.module is a global place for creating, registering and retrieving Angular modules
// 'starter' is the name of this angular module example (also set in a <body> attribute in index.html)
// the 2nd parameter is an array of 'requires'
// 'starter.controllers' is found in controllers.js
angular.module('starter', ['ionic', 'Controllers', 'Security', 'Kandy'])

.run(function($ionicPlatform, $rootScope, $state, SecurityAuthFactory, $ionicHistory) {
  $ionicPlatform.ready(function() {

    // Hide the accessory bar by default (remove this to show the accessory bar above the keyboard
    // for form inputs)
    if (window.cordova && window.cordova.plugins.Keyboard) {
      cordova.plugins.Keyboard.hideKeyboardAccessoryBar(true);
    }
    if (window.StatusBar) {
      // org.apache.cordova.statusbar required
      StatusBar.styleDefault();
    }

    SecurityAuthFactory.authObj().$onAuth(function(authData) {
         if(!authData){
            $state.go('app.login');
         }
    });

    $rootScope.$on('$stateChangeStart', function (event, toState, toParams, fromState) {

      $ionicHistory.nextViewOptions({
        disableAnimate: true,
        disableBack: true
      });

      if(!SecurityAuthFactory.authObj().$getAuth() && toState.name !== 'app.login') {
          event.preventDefault();
          console.log('no autenticado');
          $state.go('app.login');
      }
      else if(SecurityAuthFactory.authObj().$getAuth() && toState.name == 'app.login'){
        event.preventDefault();
        $state.go('app.home');
      }

    });

  });
})

.config(function($stateProvider, $urlRouterProvider) {
  $stateProvider

  .state('app', {
    url: "/app",
    abstract: true,
    templateUrl: "templates/menu.html",
    controller: 'BaseController'
  })

  .state('app.login', {
    url: "/login",
    views: {
      'menuContent': {
        templateUrl: "templates/User/login.html",
        controller: 'BaseController'
      }
    }
  })

  .state('app.home', {
    url: "/home",
    views: {
      'menuContent': {
        templateUrl: "templates/home.html",
        controller: 'HomeController'
      }
    }
  })

  .state('app.profile', {
    url: "/profile",
    views: {
      'menuContent': {
        templateUrl: "templates/Profile/index.html",
        controller: 'ProfileController'
      }
    }
  })

  .state('app.messages', {
    url: "/messages",
    views: {
      'menuContent': {
        templateUrl: "templates/Message/index.html",
        controller: 'MessageController'
      }
    }
  })

  .state('app.message_compose', {
    url: "/message/compose",
    views: {
      'menuContent': {
        templateUrl: "templates/Message/compose.html",
        controller: 'MessageController'
      }
    }
  })

  .state('app.playlists', {
    url: "/playlists",
    views: {
      'menuContent': {
        templateUrl: "templates/playlists.html",
        controller: 'PlaylistsCtrl'
      }
    }
  })

  .state('app.single', {
    url: "/playlists/:playlistId",
    views: {
      'menuContent': {
        templateUrl: "templates/playlist.html",
        controller: 'PlaylistCtrl'
      }
    }
  });
  // if none of the above states are matched, use this as the fallback
  $urlRouterProvider.otherwise('/app/login');

});
