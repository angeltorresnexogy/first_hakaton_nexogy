//
//  KandyPushNotificationService.h
//  KandySDK
//
//  Created by Tamir Maoz on 11/19/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyNotificationServiceEnums.h"
#import "KandyEventProtocol.h"

/**
 * This interface enables/disables native push notifications, and handles the received remote push
 */
 
@interface KandyPushNotificationService : NSObject

/**
 *  Enable native push notification - This method should be called only after user is logged in
 *
 *  @param token            the public token received from Apple
 *  @param bundleId         your application bundleId
 *  @param responseCallback callback that will be called upon completion
 */
-(void) enableRemoteNotificationsWithToken:(NSData *)token bundleId:(NSString *)bundleId responseCallback:(void (^)(NSError *error))responseCallback;

/**
 *  Disable native push notification
 *
 *  @param bundleId         your application bundleId
 *  @param responseCallback callback that will be called upon completion
 */
-(void) disableRemoteNotificationsWithBundleId:(NSString *)bundleId responseCallback:(void (^)(NSError *error))responseCallback;

/**
 *  Get the event of the remote notification. This method should be used only to prepare the UI 
 *  for the notifications that should be raised using the handleRemoteNotification method.
 *
 *  @param notification The remote notification received by the application
 *
 *  @return The KandyEvent for the notification
 */
-(id<KandyEventProtocol>) getRemoteNotificationEvent:(NSDictionary*)notification;

/**
 *  Handle the received remote push. 
 *  Using this method will raise relevant notification from the SDK services.
 *
 *  @param notification     NSDictionary representing the remote notification received by the application
 *  @param responseCallback Callback with response if the push was handled
 */
-(void) handleRemoteNotification:(NSDictionary*)notificationDictionary responseCallback:(void(^)(NSError* error))responseCallback;

@end
