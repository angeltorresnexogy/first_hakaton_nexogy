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

@protocol RegistrationApplicationDelegate;
@protocol RegistrationDelegate;

/**
 * @brief Registration Service
 * @since 2.0.0
 *
 */
@protocol RegistrationServiceDelegate <NSObject>

/**
 * Creates Registration
 * @param app delegete of application to return callbacks for registration
 * @return registration object
 * @since 2.0.0
 *
 */
- (id<RegistrationDelegate>) createRegistration :(id <RegistrationApplicationDelegate>) app;
@end
