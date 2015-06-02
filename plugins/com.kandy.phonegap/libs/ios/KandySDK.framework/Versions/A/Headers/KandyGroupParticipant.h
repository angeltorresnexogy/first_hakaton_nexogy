//
//  KandyGroupChatParticipent.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/11/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyRecord.h"

@interface KandyGroupParticipant : NSObject

/**
 *  Initialization method for KandyGroupChatParticipent
 *
 *  @param kandyRecord the KandyRecord associated with this KandyGroupChatParticipent
 *
 *  @return initialized KandyGroupChatParticipent
 */
-(instancetype)initWithKandyRecord:(KandyRecord*)kandyRecord;
/**
 *  The KandyRecord associated with this KandyGroupChatParticipent
 */
@property (nonatomic, strong) KandyRecord* kandyRecord;
/**
 *  YES if this KandyGroupChatParticipent is muted
 */
@property (nonatomic, assign) BOOL isMuted;
/**
 *  YES if this KandyGroupChatParticipent is admin
 */
@property (nonatomic, assign) BOOL isAdmin;

@end
