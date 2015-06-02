//
//  KandyCallTerminationReasonProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/28/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyCallServiceEnums.h"
@protocol KandyCallTerminationReasonProtocol

/**
 *  The reason why the call was terminated
 */
@property(nonatomic, readonly) ECallTerminationReason callTerminationReason;

/**
 *  Yes if the call was not terminated by the user
 */
@property(nonatomic, readonly) BOOL isNetworkTermination;


@end