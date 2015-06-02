//
//  KandyLocationService.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 10/22/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyAreaCode.h"
#import "KandyLocationServiceEnums.h"

/**
 * This interface gets the country info.
 */
 
@interface KandyLocationService : NSObject

/**
 *  Get the country information by MCC/IP
 *
 *  @param responseCallback Callback contains the error and KandyAreaCode with the relevant information
 */
-(void) getCountryInfoWithResponseCallback:(void(^)(NSError* error, KandyAreaCode* areaCode))responseCallback;

@end
