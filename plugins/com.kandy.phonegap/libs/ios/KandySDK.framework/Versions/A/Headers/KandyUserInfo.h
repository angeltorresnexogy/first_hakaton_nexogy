//
//  KandyUserInfo.h
//  Fring
//
//  Created by Yaron Jackoby on 7/9/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KandyRecord;

/**
 *  Billing user ID
 */
static NSString * const kKandyUserInfoBillingUserIdKey = @"kandyUserInfo_billingUserId";
/**
 *  Billing password
 */
static NSString * const kKandyUserInfoBillingPasswordKey = @"kandyUserInfo_billingPassword";
/**
 *  Access token that the system requires
 */
static NSString * const kKandyUserInfoAccessTokenKey = @"kandyUserInfo_accessToken";
/**
 *  Device ID that the system requieres
 */
static NSString * const kKandyUserInfoDeviceIdKey = @"kandyUserInfo_devicId";
/**
 *  Short user ID (userId without the domain)
 */
static NSString * const kKandyUserInfoShortUserIdKey = @"kandyUserInfo_shortUserId";
/**
 *  User's domain
 */
static NSString * const kKandyUserInfoDomainKey = @"kandyUserInfo_domain";

/**
 *  Contains the data arrived upon signing up a user
 */
@interface KandyUserInfo : NSObject <NSCoding>

/**
 *  Full user name for login to the system
 */
@property (nonatomic, readonly) NSString *userId;
/**
 *  Password for the user to login to the system
 */
@property (nonatomic, readonly) NSString *password;
/**
 *  The kandy record that represents the userInfo
 */
@property (nonatomic, readonly) KandyRecord *record;
/**
 *  Extra data that is relevant for the user
 */
@property (nonatomic, readonly) NSMutableDictionary *dataByKey;

/**
 *  Initialize a KandyUserInfo
 *
 *  @param userId   UserId
 *  @param password Password
 *
 *  @return Initialized KandyUserInfo
 */
- (instancetype)initWithUserId:(NSString *)userId password:(NSString*)password;

/**
 *  Initialize a KandyUserInfo
 *
 *  @param userId   UserId
 *  @param password Password
 *  @param data Data of the user
 *
 *  @return Initialized KandyUserInfo
 */
- (instancetype)initWithUserId:(NSString *)userId password:(NSString*)password data:(NSDictionary*)data;

@end
