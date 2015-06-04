/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 3.0.3.2
 *
 */

#import <Foundation/Foundation.h>
#import "OutgoingCallDelegate.h"

@protocol CallApplicationDelegate;

/**
 * @brief Call service methods
 * @since 2.0.0
 **/
@protocol CallServiceDelegate <NSObject>

/**
 * @brief Set the event handler CallApplicationDelegate for the CallService.
 * @param app CallApplicationDelegate
 * @since 2.0.0
 */

-(void) setCallApplication :(id <CallApplicationDelegate>) app;

/**
 * @brief Create an OutgoingCallDelegate to make an outgoing call
 * @param app delegete of application to return callbacks for call
 * @param originator address of caller
 * @param terminator address of callee
 * @return call to establish call
 * @since 2.0.0
 */
- (id<OutgoingCallDelegate>)createOutGoingCall:(id <CallApplicationDelegate>)app
                                 andOriginator:(UriAddress *)originator
                                 andTerminator:(UriAddress *)terminator;

/**
 * @brief Create an OutgoingCallDelegate to make an outgoing call
 * @param app delegete of application to return callbacks for call
 * @param terminator address of callee
 * @return call to establish call
 * @since 2.0.0
 */
- (id<OutgoingCallDelegate>)createOutGoingCall:(id <CallApplicationDelegate>)app
                                 andTerminator:(UriAddress *)terminator;

/**
 * @brief Rotates camera to specified orientation
 *
 * @param orientation AVCaptureVideoOrientation value that will be used for camera orientation
 * @since 2.0.0
 */
-(void) rotateCameraOrientationToPosition:(AVCaptureVideoOrientation) orientation;

@end
