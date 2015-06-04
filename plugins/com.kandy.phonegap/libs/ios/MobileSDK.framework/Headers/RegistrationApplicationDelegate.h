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
#import "NotificationStates.h"
#import "RegistrationStates.h"

@class MobileError;
@protocol RegistrationDelegate;

/**
 * @brief Represents events of Registration
 * This protocol must be conformed by classes which uses RegistrationService
 * @since 2.0.0
 */
@protocol RegistrationApplicationDelegate <NSObject>

/**
 * This method is invoked when registerToServer attempt is succeeded.
 * @param registration delegate object to perform methods of the RegistrationDelegate
 * @see [RegistrationDelegate registerToServerWithServiceTypes:]
 * @since 2.0.0
 */
- (void) registerSucceeded: (id <RegistrationDelegate>) registration;

/**
 * This method is invoked when registerToServer attempt is failed.
 * @param error definition of failure
 * @see [RegistrationDelegate registerToServerWithServiceTypes:]
 * @since 2.0.0
 */
- (void) registerFailed: (MobileError *) error;

/**
 * This is the call back method for the unRegisterFromServer request.
 * This method is invoked when unRegisterFromServer attempt is succeeded.
 * @param registration RegistrationDelegate
 * @see [RegistrationDelegate unRegisterFromServer]
 * @since 2.0.0
 */
- (void) unregisterSucceeded:(id <RegistrationDelegate>) registration ;

/**
 * This method is invoked when unRegisterFromServer attempt is failed.
 * @param error definitio of failure
 * @see [RegistrationDelegate unRegisterFromServer]
 * @since 2.0.0
 */
- (void) unregisterFailed : (MobileError *) error;

/**
 * This is the call back method for any registration state change on the ReqistrationDelegate.
 * @param registrationState new state of the registration 
 * @since 2.0.0
 */
- (void) registrationStateChanged : (RegistrationStates) registrationState;

/**
 * This method will be called, when notification status changed
 *
 * @param notificationState {@link NotificationStates}
 * @since 2.0.0
 */
- (void) notificationStatusChanged:(NotificationStates) notificationState;

@end
