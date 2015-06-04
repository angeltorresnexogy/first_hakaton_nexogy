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
 *x
 */

#import <Foundation/Foundation.h>
#import "RegistrationStates.h"

/**
 * @brief Registration and directory.
 * @since 2.0.0
 */
@protocol RegistrationDelegate <NSObject>

/**
 * Registration to server.
 * Note: If password is changed, registerToServer function must be called. Otherwise, requests to server can be failed.
 * @param serviceTypes NSMutableArray
 * @see ServiceTypes
 * @since 2.0.0
 */
- (void) registerToServerWithServiceTypes:(NSMutableArray *)serviceTypes;

/**
 * Unregistration from server
 * @since 2.0.0
 */
- (void) unRegisterFromServer;

/**
 * Unregistration from server with subscription ID
 * @param subscriptionID string value of the subscription info
 * @since 2.0.0
 */
- (void) unRegisterFromServerWithSubscriptionID:(NSString *) subscriptionID;

/**
 * Returns the registration process status
 * @return RegistrationStates
 * @since 2.0.0
 */
- (RegistrationStates) getRegistrationState;

/**
 * Returns Types of Service.
 * @return NSMutableArray ServiceTypes
 *
 * @since 2.0.0
 */
- (NSMutableArray *) getServiceTypes;
@end
