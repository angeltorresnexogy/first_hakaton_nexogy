//
//  KandyGroupParticipantKicked.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/22/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyRecord.h"

@interface KandyGroupParticipantKicked : NSObject <KandyEventProtocol>

/**
 *  Initialization method for KandyGroupParticipantKicked
 *
 *  @param aUuid       the event UUID
 *  @param aTimestamp  the event timestamp
 *  @param aGroupId    the group ID
 *  @param aBooter     the booter
 *  @param aBooted     NSArray of booted (KandyRecords)
 *
 *  @return initialized KandyGroupParticipantKicked
 */
-(instancetype)initWithUUID:(NSString*)aUuid timestamp:(NSDate*)aTimestamp groupId:(KandyRecord*)aGroupId booter:(KandyRecord*)aBooter bootedParticipants:(NSArray*)aBooted;
/**
 *  The group ID
 */
@property (nonatomic, readonly) KandyRecord* groupId;
/**
 *  The booter
 */
@property (nonatomic, readonly) KandyRecord* booter;
/**
 *  Array of booted records of kind KandyRecord
 */
@property (nonatomic, readonly) NSArray* bootedParticipants;

@end
