//
//  KandyAccessNotificationDelegate.h
//  Fring
//
//  Created by Yaron Jackoby on 7/10/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyConnectServiceEnums.h"

@protocol KandyAccessNotificationDelegate <NSObject>

/**
 *  Notification when the connection to the server state is changing
 *
 *  @param connectionStatus The new connection status
 */
-(void) connectionStatusChanged:(EKandyConnectionState)connectionStatus;
/**
 *  The user is not valid anymore, Kandy must get a new user
 */
-(void) gotInvalidUser:(NSError*)error;

/**
 *  The session has expired
 */
-(void) sessionExpired:(NSError*)error;

/**
 *  The Kandy SDK version in not supported
 */
-(void) SDKNotSupported:(NSError*)error;

@end
