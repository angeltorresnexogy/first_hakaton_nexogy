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

@class UriAddress;

/**
 * @brief InstantMessage related resources
 * @since 2.0.0
 */
@protocol IMDelegate <NSObject>

/**
 * Client type is a NSString used to identify the receiving client type such as "A2","Facebook".
 * @since 2.0.0
 */
@property (strong,nonatomic) NSString * clientType;

/**
 * Text of Instant Message
 * @since 2.0.0
 */
@property (strong,nonatomic) NSString * text;

/**
 * FromAddress of Instant Message
 * @since 2.0.0
 */
@property (strong,nonatomic) UriAddress * fromAddress;

/**
 * ToAddress parameter of Instant Message
 * @since 2.0.0
 */
@property (strong,nonatomic) UriAddress * toAddress;

/**
 * Originator display name of Instant Message
 * @since 2.0.0
 */
@property (strong,nonatomic) NSString * originatorDisplayName;

/**
 * Terminator display name  of Instant Message
 * @since 2.0.0
 */
@property (strong,nonatomic) NSString * terminatorDisplayName;

/**
 * Charset value of Instant Message
 * @since 2.0.0
 */
@property (strong,nonatomic) NSString * charset;
@end
