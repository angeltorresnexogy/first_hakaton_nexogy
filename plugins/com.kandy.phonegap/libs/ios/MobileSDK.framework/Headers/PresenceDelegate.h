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
#import "PresenceStates.h"
#import "PresenceActivityType.h"

@class UriAddress;

/** 
 * @brief Presence related resources
 * @since 2.0.0
 */
@protocol PresenceDelegate <NSObject>

/**
 * Retrieves state of presence
 * @return presence state
 * @since 2.0.0
 */
-(PresenceStates) getPresenceState;

/**
 * Retrieves activity type of presence
 * @return presence activity type
 * @since 2.0.0
 */
-(PresenceActivityType) getPresenceActivityType;

/**
 * Retrieves address of user
 * @return user address
 * @since 2.0.0
 */
-(UriAddress *) getName;
@end
