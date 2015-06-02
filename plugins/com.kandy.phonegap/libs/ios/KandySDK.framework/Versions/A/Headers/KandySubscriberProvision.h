//
//  KandySubscriberProvision.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 10/30/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandySignUpServiceEnums.h"
#import "KandyDomain.h"
#import "KandyUserInfo.h"
#import "KandyAreaCode.h"

/**
 * This interface is responsible for the following subscriber provisioning:
 *     - Request validation code 
 *     - Validate the received code
 *     - Deactivate the user
  */
 
@interface KandySubscriberProvision : NSObject

/**
 *  Validate domain credentials
 *
 *  @param domainKey        The domain key
 *  @param secret           The domain secret
 *  @param responseCallback Callback that holds the domain name for success and error if occurs
 */
-(void) validateDomain:(NSString*)key andDomainSecret:(NSString*)secret responseCallback:(void(^)(NSError* error, NSString* domainName))responseCallback;

/**
 *  Request validation code for phone number in order to subscribe it
 *
 *  @param areaCode         KandyAreaCode with the relevant information
 *  @param phoneNumber      the number to register
 *  @param responseCallback holds the destination to validate and error if occurs
 */
-(void) requestCode:(KandyAreaCode*)areaCode phoneNumber:(NSString*)phoneNumber responseCallback:(void(^)(NSError* error, NSString *destinationToValidate))responseCallback;

/**
 *  Validate the code you got. When validation passed, the user will be provisioned in the system
 *
 *  @param OTP              One-time password code (validation code)
 *  @param areaCode         KandyAreaCode with the relevant information
 *  @param destination      The number to register
 *  @param responseCallback Callback that holds KandyUserInfo with the relevant information
 */
-(void) validate:(NSString *)OTP areaCode:(KandyAreaCode *)areaCode destination:(NSString*)destination responseCallback:(void(^)(NSError* error, KandyUserInfo* provisionedUserInfo))responseCallback;

/**
 *  Deactivate the user from the system.
 *
 *  @param userInfo  The user to deactivate. If nil, deactivates the loggedIn user. You can pass the provisioned users from the validate method response, or the loggedIn user.
 *  @param responseCallback Callback which returns when disconnect finished
 */
-(void) deactivate:(KandyUserInfo*)userInfo responseCallback:(void(^)(NSError* error))responseCallback;


@end
