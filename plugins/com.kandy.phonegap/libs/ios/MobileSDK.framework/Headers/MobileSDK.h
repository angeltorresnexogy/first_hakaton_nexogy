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

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double MobileSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char MobileSDKVersionString[];

//Call
#import <MobileSDK/CallDelegate.h>
#import <MobileSDK/CallServiceDelegate.h>
#import <MobileSDK/IncomingCallDelegate.h>
#import <MobileSDK/OutgoingCallDelegate.h>
#import <MobileSDK/CallApplicationDelegate.h>

//ServiceProvider
#import <MobileSDK/ServiceProvider.h>

//Registration
#import <MobileSDK/ServiceTypes.h>
#import <MobileSDK/RegistrationApplicationDelegate.h>
#import <MobileSDK/RegistrationServiceDelegate.h>
#import <MobileSDK/RegistrationDelegate.h>

//Utilities
#import <MobileSDK/MobileError.h>
#import <MobileSDK/Configuration.h>
#import <MobileSDK/CameraModes.h>
#import <MobileSDK/LoggingInterface.h>
#import <MobileSDK/UriAddress.h>
#import <MobileSDK/CallStates.h>

//AddressBook
#import <MobileSDK/Contact.h>
#import <MobileSDK/AddressBookApplicationDelegate.h>
#import <MobileSDK/AddressBookServiceDelegate.h>

//IM
#import <MobileSDK/IMApplicationDelegate.h>
#import <MobileSDK/OutGoingIMDelegate.h>
#import <MobileSDK/InComingIMDelegate.h>
#import <MobileSDK/IMDelegate.h>
#import <MobileSDK/IMServiceDelegate.h>

//Presence
#import <MobileSDK/PresenceApplicationDelegate.h>
#import <MobileSDK/PresenceDelegate.h>
#import <MobileSDK/PresenceStates.h>
#import <MobileSDK/PresenceActivityType.h>
#import <MobileSDK/PresenceServiceDelegate.h>
