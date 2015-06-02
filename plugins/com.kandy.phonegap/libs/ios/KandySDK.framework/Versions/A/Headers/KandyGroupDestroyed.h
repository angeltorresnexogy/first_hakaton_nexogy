//
//  KandyGroupDestroyed.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/22/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyRecord.h"

@interface KandyGroupDestroyed : NSObject <KandyEventProtocol>

/**
 *  Initialization method for KandyGroupParticipantJoined
 *
 *  @param aUuid      the event UUID
 *  @param aTimestamp the event timestamp
 *  @param aGroupId   the group ID
 *  @param aEraser    the group destroyer
 *
 *  @return initialized KandyGroupParticipantJoined
 */
-(instancetype)initWithUUID:(NSString*)aUuid timestamp:(NSDate*)aTimestamp groupId:(KandyRecord*)aGroupId eraser:(KandyRecord*)aEraser;
/**
 *  The group ID
 */
@property (nonatomic, readonly) KandyRecord* groupId;
/**
 *  The eraser
 */
@property (nonatomic, readonly) KandyRecord* eraser;

@end
