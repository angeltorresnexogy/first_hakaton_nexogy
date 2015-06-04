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
/**
 * @brief Utility class for ConnectionType.
 *
 * @since 2.0.0
 **/
@interface ConnectionType : NSObject
/**
 * Enum values for TypeOfConnection
 *
 * WEBSOCKET,
 * LONGPOLLING
 *
 *
 * @since 2.0.0
 **/
typedef enum TypeOfConnection
{
    WEBSOCKET,
    LONGPOLLING
} TypeOfConnection;
@end
