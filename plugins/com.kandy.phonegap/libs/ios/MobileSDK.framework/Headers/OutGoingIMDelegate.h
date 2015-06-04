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
#import "IMDelegate.h"

/**
 * @brief Outgoing Instant Message methods.
 * @since 2.0.0
 */
@protocol OutGoingIMDelegate <IMDelegate>

/**
 * Sends the created IM
 * @since 2.0.0
 */
- (void) send;
@end
