//
//  KandyIncomingCallProtocol.h
//  Fring
//
//  Created by Yehonatan Yochpaz on 7/10/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyCallProtocol.h"

@protocol KandyIncomingCallProtocol <KandyCallProtocol>

///**
// *  Set the delegate to get responses
// *
// *  @param responseDelegate the delegate to get the response
// */
//-(void) setIncomingResponseDelegate:(id<KandyIncomingCallResponseDelegate>)responseDelegate;

/**
 *  Accept the call
 *  Note - You must set localVideoView and remoteVideoView to display video in VoIP call
 *
 *  @param isVideoEnabled   is outgoing video enabled for the call
 *  @param responseDelegate the delegate to get the response
 */
-(void) accept:(BOOL)isVideoEnabled withResponseBlock:(void (^)(NSError *error))responseCallback;

/**
 *  ignore the incoming call
 *
 *  @param responseDelegate the delegate to get the response
 */
-(void) ignoreWithResponseCallback:(void (^)(NSError *error))responseCallback;

/**
 *  reject the incoming call
 *
 *  @param responseDelegate the delegate to get the response
 */
-(void) rejectWithResponseBlock:(void (^)(NSError *error))responseCallback;

@end
