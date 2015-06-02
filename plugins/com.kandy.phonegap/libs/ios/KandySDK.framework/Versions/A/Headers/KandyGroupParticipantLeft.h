//
//  KandyGroupParticipantLeft.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/22/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyRecord.h"

@interface KandyGroupParticipantLeft : NSObject <KandyEventProtocol>

/**
 *  Initialization method for KandyGroupParticipantLeft
 *
 *  @param aUuid      the event UUID
 *  @param aTimestamp the event timestamp
 *  @param aGroupId   the group ID
 *  @param aLeaver    the leaver
 *
 *  @return initialized KandyGroupParticipantLeft
 */
-(instancetype)initWithUUID:(NSString*)aUuid timestamp:(NSDate*)aTimestamp groupId:(KandyRecord*)aGroupId leaver:(KandyRecord*)aLeaver;
/**
 *  The group ID
 */
@property (nonatomic, readonly) KandyRecord* groupId;
/**
 *  The leaver
 */
@property (nonatomic, readonly) KandyRecord* leaver;

@end
