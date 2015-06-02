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
#import "ErrorTypes.h"

#define MOBILE_ERROR_DOMAIN @"MobileErrorDomain"

/**
 * @brief Defines the cause of an error
 *
 * @since 2.0.0
 **/
@interface MobileError : NSError

/**
 * Definition of cause of the error
 *
 * @since 2.0.0
*/
@property(nonatomic, strong) NSString *description;

/**
 * Creates an error message with specified description message
 * 
 * @param domain specific error domain of the object
 * @param code specific error code of the error
 * @param descriptionString specify error with this message string
 *
 * @return new MobileError object
 *
 * @since 2.0.0
 */
- (id)initWithDomain:(NSString *)domain code:(ErrorTypes)code description:(NSString *) descriptionString ;

@end
