//
//  KandyChatAckData.h
//  Fring
//
//  Created by Tamir Maoz on 9/5/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyChatServiceEnums.h"
#import "KandyEventProtocol.h"


/**
 *  An object representing a delivered message, Ack'ed by the recipient
 */
@interface KandyDeliveryAck : NSObject<KandyEventProtocol>

/**
 *  EKandyChatMessageAckErrorType_none or an Ack error
 */
@property (readonly) EKandyChatMessageAckErrorType errorType;

/**
 *  Init a KandyDeliveryAck Object
 *
 *  @param aUuid        The message UUID to Ack
 *  @param aTimestamp   Time of Acking
 *  @param aError       EKandyChatMessageAckErrorType_none or an Ack error
 *
 *  @return A new KandyDeliveryAck instance
 */
-(instancetype)initWithUUID:(NSString*)aUuid andTimeStamp:(NSDate*)aTimestamp andErrorType:(EKandyChatMessageAckErrorType)aError;

@end
