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
#import "CallDelegate.h"

/**
 * @brief Call object, which is used for outgoing calls.
 * @since 2.0.0
 */
@protocol OutgoingCallDelegate <CallDelegate>

/**
 * @brief Starts call establishment on created outgoing call
 * @param isVideoEnabled indicates video is enabled or not in the call 
 * @since 2.0.0
 */
- (void) establishCall :(BOOL) isVideoEnabled;

@end
