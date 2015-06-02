//
//  KandyDomainData.h
//  Fring
//
//  Created by Guy Lachish on 17/08/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  The domain access token key (for dataByKey)
 */
static NSString * const kKandyDomainAccessTokenKey = @"kandyDomain_accessToken";
/**
 *  The domain image key (for dataByKey)
 */
static NSString * const kKandyDomainImageURIKey = @"kandyDomain_imageURI";

/**
 KandyDomainData object holds the data about the domain
 */
@interface KandyDomain : NSObject <NSCoding>
/**
 *  The domain API key
 */
@property (readonly) NSString * key;
/**
 *  The domain API secret
 */
@property (readonly) NSString * secret;
/**
 *  The domain API name
 */
@property (readonly) NSString * name;
/**
 *  Extra data about the domain
 */
@property (readonly) NSMutableDictionary * dataByKey;

/**
 *  Create a KandyDomain with Domain Key only. this object holds the data about the domain
 *
 *  @param apiKey    The domain API key
 *
 *  @return A new KandyDomainData object
 */
- (instancetype)initWithAPIKey:(NSString *)apiKey;

/**
 *  Create a KandyDomainData. This object holds the data about the domain
 *
 *  @param apiKey    The domain API key
 *  @param apiSecret The domain API secret
 *
 *  @return A new KandyDomainData object
 */
- (instancetype)initWithAPIKey:(NSString *)apiKey APISecret:(NSString *)apiSecret andAPIName:(NSString*)apiName;

/**
 Create a KandyDomainData. this object holds the data about the domain
 @param apiKey    The domain API key
 @param apiSecret The domain API secret
 @param data      The domain extra data
 
 @return A new KandyDomainData object
 */
- (instancetype)initWithAPIKey:(NSString *)apiKey APISecret:(NSString *)apiSecret APIName:(NSString*)apiName andData:(NSDictionary*)data;

@end
