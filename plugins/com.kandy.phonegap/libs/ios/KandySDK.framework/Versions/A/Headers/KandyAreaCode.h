//
//  AreaCode.h
//  Fring
//
//  Created by AdamAdmin on 5/5/11.
//  Copyright 2011 fring. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Class that represents country details
 */
@interface KandyAreaCode : NSObject

/**
 *  The country name
 */
@property (readonly) NSString *countryName;
/**
 *  Two letter codes that represents the country
 */
@property (readonly) NSString *isoCode;
/**
 *  The country phone prefix
 */
@property (readonly) NSString *phonePrefix;

/**
 *  Initialization method for KandyAreaCode
 *
 *  @param isoCode     The ISO code for the country
 *  @param name        The name of the country
 *  @param phonePrefix The country phone prefix
 *
 *  @return an initialized KandyAreaCode object with the given parameters
 */
-(id) initWithISOCode:(NSString*)isoCode andCountryName:(NSString *)name andPhonePrefix:(NSString *)phonePrefix;

@end
