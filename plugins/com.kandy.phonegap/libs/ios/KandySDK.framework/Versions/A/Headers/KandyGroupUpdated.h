//
//  KandyGroupUpdated.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/22/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyImageItemProtocol.h"
#import "KandyRecord.h"

@interface KandyGroupUpdated : NSObject <KandyEventProtocol>

/**
 *  Initialization method for KandyGroupUpdated
 *
 *  @param aUuid        the event UUID
 *  @param aTimestamp   the event timestamp
 *  @param aGroupId     the group ID
 *  @param aGroupName   the group name
 *  @param aGroupImage  the group image
 *
 *  @return initialized KandyGroupUpdated
 */
-(instancetype)initWithUUID:(NSString*)aUuid timestamp:(NSDate*)aTimestamp groupId:(KandyRecord*)aGroupId groupName:(NSString*)aGroupName groupImage:(id<KandyImageItemProtocol>)aGroupImage;
/**
 *  The group ID
 */
@property (nonatomic, readonly) KandyRecord* groupId;
/**
 *  The group name - This value may be nil in case name was not updated
 */
@property (nonatomic, readonly) NSString* groupName;
/**
 *  The group image item - This value may be nil in case image was not updated
 */
@property (nonatomic, readonly) id<KandyImageItemProtocol> groupImage;

@end
