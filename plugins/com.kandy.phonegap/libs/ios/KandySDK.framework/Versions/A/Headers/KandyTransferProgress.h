//
//  KandyTransferProgress.h
//  Fring
//
//  Created by Tamir Maoz on 9/22/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyChatServiceEnums.h"

/**
 * This interface shows the file transfer progress
 */
@interface KandyTransferProgress : NSObject

/**
 *  Initialization method for KandytransferProgress
 *
 *  @param transferredSize     bytes transferred
 *  @param expectedSize        expected amount of size
 *  @param transferState       the current status of the transfer state
 *
 *  @return initialized KandytransferProgress with the received params
 */
-(id)initWithTransferredSize:(NSUInteger)transferredSize expectedSize:(NSUInteger)expectedSize transferState:(EKandyMediaTransferState)transferState;

/**
 *  Bytes transferred
 */
@property (readonly) NSUInteger transferredSize;
/**
 *  Expected amount of size (Bytes)
 */
@property (readonly) NSUInteger expectedSize;
/**
 *  Transfer progress percentage
 */
@property (readonly) NSUInteger transferProgressPercentage;
/**
 *  Enum describing the transfer state
 */
@property (readonly) EKandyMediaTransferState transferState;

/**
 *  Check whether the file transfer was completed
 *
 *  @return YES if file transfer was completed
 */
-(BOOL) isDoneTransferring;

@end
