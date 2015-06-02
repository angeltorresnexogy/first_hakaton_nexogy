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
#import "CallLogServiceDelegate.h"

@protocol CallServiceDelegate;
@protocol AddressBookServiceDelegate;
@protocol PresenceServiceDelegate;
@protocol RegistrationServiceDelegate;
@protocol IMServiceDelegate;

/**
 * @brief This class is needed for calling the services.
 * @since 2.0.0
 */
@interface ServiceProvider : NSObject

@property (strong, nonatomic) id<RegistrationServiceDelegate> restRegistrationService;

@property (strong, nonatomic) id<CallLogServiceDelegate> restCallLogService;

@property (strong, nonatomic) id<CallServiceDelegate> restCallService;

@property (strong, nonatomic) id<AddressBookServiceDelegate> restAddressBookService;

@property (strong, nonatomic) id<PresenceServiceDelegate> restPresenceService;

@property (strong, nonatomic) id<IMServiceDelegate> restIMService;

/**
 * This method returns an instance of ServiceProvider using Singleton Pattern
 * @return ServiceProvider
 * @since 2.0.0
 */
+ (id) getInstance;


/**
 * This method returns (creates if necessary) an instance of AddressBookService using Singleton Pattern
 * @return AddressBookServiceDelegate
 * @since 2.0.0
 */
- (id<AddressBookServiceDelegate>) getAddressBookService;


/**
 * This method returns (creates if necessary) an instance of PresenceService using Singleton Pattern
 * @return PresenceServiceDelegate
 * @since 2.0.0
 */
- (id<PresenceServiceDelegate>) getPresenceService;


/**
 * This method returns (creates if necessary) an instance of RegistrationService using Singleton Pattern
 * @return RegistrationServiceDelegate
 * @since 2.0.0
 */
- (id<RegistrationServiceDelegate>) getRegistrationService;


/**
 * This method returns (creates if necessary) an instance of CallService using Singleton Pattern
 * @return CallServiceDelegate
 * @since 2.0.0
 */
- (id<CallServiceDelegate>) getCallService;


/**
 * This method returns (creates if necessary) an instance of CallLogService using Singleton Pattern
 * @return CallLogServiceDelegate
 * @since 2.0.0
 */
- (id<CallLogServiceDelegate>) getCallLogService;


/**
 * This method returns (creates if necessary) an instance of IMService using Singleton Pattern
 * @return IMServiceDelegate
 * @since 2.0.0
 */
- (id<IMServiceDelegate>) getIMService;


/**
 * This method returns the version information about the SDK 
 * @return NSString
 * @since 2.0.0
 */
- (NSString *) getVersion;
@end
