//
//  KandyGlobalSettings.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/5/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KandyDomain;

/**
 * This interface handles the
 *     - URL to the Kandy host
 *     - request timeout
 *     - access to the Internet
 */
@interface KandyGlobalSettings : NSObject

/**
 *  The URL to the kandy host. Default is https://api.kandy.io
 */
@property(nonatomic, strong) NSString* kandyServiceHost;
/**
 *  Request timeout in seconds. Default is 20 seconds
 */
@property(nonatomic, assign) int kandyServiceTimeout;
/**
 *  Allow access to the Internet when using cellular data. Default is YES
 */
@property(nonatomic, assign) BOOL isAllowInternetOnCellularData;
/**
 *  Boolean indicating wether the session is automatically renewed upon expiration
 */
@property (nonatomic, assign) BOOL isAutoRenewSession;

/**
 *  Retreive information regarding the KandySDK, KandyAPI, SPiDR, PushServer
 *
 *  @return a JSON string containing the information
 */
-(NSString*)getReport;

/**
 *  Changes the Kandy SDK domain secret
 *
 *  @param domainSecret New domain secret
 */
-(void)changeDomainSecret:(NSString*)domainSecret;

@end
