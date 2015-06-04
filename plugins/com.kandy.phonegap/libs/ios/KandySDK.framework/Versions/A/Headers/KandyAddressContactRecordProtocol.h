//
//  KandyAddressContactRecordProtocol.h
//  KandySDK
//
//  Created by Omer Shaked on 12/7/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyContactRecordProtocol.h"
/**
 * This protocol handles address contact records
 */
@protocol KandyAddressContactRecordProtocol <NSObject, KandyContactRecordProtocol>

/**
 *  Address Street
 */
@property (nonatomic, readonly) NSString *street;

/**
 *  Address City
 */
@property (nonatomic, readonly) NSString *city;

/**
 *  Address State
 */
@property (nonatomic, readonly) NSString *state;

/**
 *  Address Zip
 */
@property (nonatomic, readonly) NSString *zip;

/**
 *  Address Country
 */
@property (nonatomic, readonly) NSString *country;

/**
 *  Address Country Code
 */
@property (nonatomic, readonly) NSString *countryCode;

@end
