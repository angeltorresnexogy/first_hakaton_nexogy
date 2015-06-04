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
#import "LogType.h"

/**
 * @brief Utility class for LoggingInterface. The application using the SDK must implement this interface and assign an instance of this implementation to Logger property in the Configuration through the application's startup flow.
 **/
@interface LoggingInterface : NSObject

/**
 * Main logging method defining the actual logging process
 * @param logLevel LogLevel which is used for checking logLevel
 * @param logContext NSString which includes package and class name
 * @param methodName SEL
 * @param logMessage NSString which includes log message
 * 
 * @since 2.0.0
 **/
-(void)log:(LogLevel)logLevel withLogContext:(NSString *)logContext withMethodName:(SEL) methodName withMessage:(NSString*)logMessage;

/**
 * Main logging method defining the actual logging process
 * @param logContext NSString which includes package and class name
 * @param methodName SEL
 *
 * @since 2.0.0
 **/
-(void) logMethodStarted:(NSString *) logContext withMethodName:(SEL) methodName;

/**
 * Main logging method defining the actual logging process
 * @param logContext NSString which includes package and class name
 * @param methodName SEL
 *
 * @since 2.0.0
 **/
-(void) logMethodFinished:(NSString *) logContext withMethodName:(SEL)methodName ;
@end
