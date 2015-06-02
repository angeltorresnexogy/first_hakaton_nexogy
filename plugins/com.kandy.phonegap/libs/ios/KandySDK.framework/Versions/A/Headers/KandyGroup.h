//
//  KandyGroup.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/10/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyRecord.h"
#import "KandyImageItemProtocol.h"

@interface KandyGroup : NSObject

/**
 *  Initialization method for KandyGroup
 *
 *  @param groupID   KandyRecord representing the group ID
 *
 *  @return initialized KandyGroup
 */
-(instancetype)initWithGroupID:(KandyRecord*)groupID;

/**
 *  Initialization method for KandyGroup
 *
 *  @param groupID     KandyRecord representing the group ID
 *  @param groupName   the group name
 *
 *  @return initialized KandyGroup
 */
-(instancetype)initWithGroupID:(KandyRecord*)groupID groupName:(NSString*)groupName;

/**
 *  Kandy record representing the group identifier
 */
@property (nonatomic, strong) KandyRecord* groupId;
/**
 *  The group name
 */
@property (nonatomic, strong) NSString* name;
/**
 *  KandyImageItemProtocol representing the image
 */
@property (nonatomic, strong) id<KandyImageItemProtocol> image;
/**
 *  The group creation date - will be initialized upon calling createGroup
 */
@property (nonatomic, strong) NSDate* creationDate;
/**
 *  Max participants allowed for the group - will be initialized upon calling createGroup
 */
@property (nonatomic, assign) NSUInteger maxParticipants;
/**
 *  The group participants - array of KandyGroupParticipants
 */
@property (nonatomic, strong) NSMutableArray* participants;
/**
 *  Yes if the group notifications are muted - will be updated upon calling Mute/unMute group
 */
@property (nonatomic, assign) BOOL isMuted;

@end