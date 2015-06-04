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
 * @brief Basic Entity Class for contact.
 * @since 2.0.0
 */
@interface Contact : NSObject

/**
 * Source of contact such as SPiDR, Facebook, LinkedIn .. etc.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* sources;

/**
 * Email address of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* emailAddress;

/**
 * Unique identifier of the entry.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* entryId;

/**
 * Fax number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* fax;

/**
 * First name of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* firstName;

/**
 * Last name of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* lastName;

/**
 * Friend status of the user.
 * @since 2.0.0
 */
@property (nonatomic) BOOL friendStatus;

/**
 * Home phone number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* homePhone;

/**
 * Mobile phone number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* mobilePhone;

/**
 * Name of the user as it will appear for a personal contact.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* nickName;

/**
 * Pager number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* pager;

/**
 * URL from which to retrieve the picture of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* photoUrl;

/**
 * User's primary contact number (this should be prefered number for contacting the user).
 * @since 2.0.0
 */
@property (strong, nonatomic) UriAddress* primaryContact;

/**
 * Work phone number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString* workPhone;

/**
 * Constructor method with NSDictionary
 * @param dictionary Contact information dictionary
 * @since 2.0.0
 */
- (id) initWithDictionary:(NSDictionary *) dictionary;
@end
