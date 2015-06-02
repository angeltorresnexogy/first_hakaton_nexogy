//
//  KandyOutgoingCallProtocol.h
//  Fring
//
//  Created by Yehonatan Yochpaz on 7/10/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyCallProtocol.h"

@protocol KandyOutgoingCallProtocol <KandyCallProtocol>
/**
 *  Establish an outgoing call
 *
 *  @param responseCallback will return error incase of failure
 */
-(void) establishWithResponseBlock:(void (^)(NSError *error))responseCallback;

@end
