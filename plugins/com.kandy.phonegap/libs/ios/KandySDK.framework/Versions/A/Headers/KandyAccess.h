//
//  KandyAccess.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 10/30/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyConnectServiceEnums.h"
#import "KandyAccessNotificationDelegate.h"
#import "KandyUserInfo.h"

/**
 * This interface gets the system connection state, starts/stops listening to access notifications
 * and connects/disconnects to/from the server.
 */
 
 @interface KandyAccess : NSObject

/**
 *  Get the system connection state
 */
@property (readonly) EKandyConnectionState connectionState;

/**
 *  Start listening to access notifications
 *
 *  @param notificationDelegate conforms to protocol KandyAccessNotificationDelegate
 */
-(void) registerNotifications:(id<KandyAccessNotificationDelegate>)notificationDelegate;
/**
 *  Stop listening to access notifications
 *
 *  @param notificationDelegate conforms to protocol KandyAccessNotificationDelegate
 */
-(void) unregisterNotifications:(id<KandyAccessNotificationDelegate>)notificationDelegate;

/**
 *  Connect to the server
 *
 *  @param userInfo The user to connect the server and the push server
 *  @param responseCallback Callback, which returns if there was error connecting the server
 */
-(void) login:(KandyUserInfo*)userInfo responseCallback:(void(^)(NSError* error))responseCallback;

/**
 *  Disconnect the server
 *
 *  @param userInfo   The user to logout. If nil, logout the currently logged in user
 *  @param responseCallback Callback, which returns when disconnect is finished
 */
-(void) logoutWithResponseCallback:(void(^)(NSError* error))responseCallback;

/**
 *  Renew expired user session
 *
 *  @param responseCallback Returns an error if such occured
 */
-(void) renewExpiredSession:(void(^)(NSError* error))responseCallback;

@end
