//
//  KandyGroupParticipantJoined.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/22/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyRecord.h"

@interface KandyGroupParticipantJoined : NSObject <KandyEventProtocol>

/**
 *  Initialization method for KandyGroupParticipantJoined
 *
 *  @param aUuid      the event UUID
 *  @param aTimestamp the event timestamp
 *  @param aGroupId   the group ID
 *  @param aInviter   the inviter
 *  @param aInvitees  NSArray of invitees (KandyRecords)
 *
 *  @return initialized KandyGroupParticipantJoined
 */
-(instancetype)initWithUUID:(NSString*)aUuid timestamp:(NSDate*)aTimestamp groupId:(KandyRecord*)aGroupId inviter:(KandyRecord*)aInviter invitees:(NSArray*)aInvitees;
/**
 *  The group ID
 */
@property (nonatomic, readonly) KandyRecord* groupId;
/**
 *  The Inviter
 */
@property (nonatomic, readonly) KandyRecord* inviter;
/**
 *  Array of invitees of kind KandyRecord
 */
@property (nonatomic, readonly) NSArray* invitees;

@end
