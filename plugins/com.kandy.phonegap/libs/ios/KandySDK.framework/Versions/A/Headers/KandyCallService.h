//
//  KandyCallService.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 10/22/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyCallServiceNotificationDelegate.h"
#import "KandyOutgoingCallProtocol.h"
#import "KandyRecord.h"
#import "KandyCallServiceEnums.h"

/**
 * This interface handles listening to notifications
 */
@interface KandyCallService : NSObject

/**
 *  YES if currently in active call
 */
@property (readonly) BOOL isInCall;

/**
 *  YES if currently in active GSM call
 */
@property (readonly) BOOL isInGSMCall;

/**
 *  Get an array of calls currently in progress
 */
@property (readonly) NSArray* callsInProgress;

/**
 *  Start listening to notification on call service
 *
 *  @param notificationDelegate conforms to protocol KandyCallServiceNotificationDelegate
 */
-(void) registerNotifications:(id<KandyCallServiceNotificationDelegate>)notificationDelegate;

/**
 *  Stop listening to notification on call service
 *
 *  @param notificationDelegate conforms to protocol KandyCallServiceNotificationDelegate
 */
-(void) unregisterNotifications:(id<KandyCallServiceNotificationDelegate>)notificationDelegate;

/**
 *  Creates and returns an outgoing call object conforms to protocol KandyOutgoingCallProtocol
 *  Please call establishWithResponseBlock to initiate the call
 *  Note - You must set localVideoView and remoteVideoView in order to display video in VoIP call
 *
 *  @param destinationRecord KandyRecord contaning the destination details
 *  @param isStartVideo      YES if start a video call
 *
 *  @return outgoing call object conforms to protocol KandyOutgoingCallProtocol
 */
-(id<KandyOutgoingCallProtocol>) createVoipCall:(KandyRecord*)destinationRecord isStartVideo:(BOOL)isStartVideo;

/**
 *  Creates and returns an outgoing PSTN call object conforms to protocol KandyOutgoingCallProtocol
 *  Please call establishWithResponseBlock to initiate the call
 *
 *  @param internationalPhoneNumber international phone number string (e164 format)
 *
 *  @return outgoing call object conforms to protocol KandyOutgoingCallProtocol
 */
-(id<KandyOutgoingCallProtocol>) createPSTNCall:(NSString*)internationalPhoneNumber;

@end
