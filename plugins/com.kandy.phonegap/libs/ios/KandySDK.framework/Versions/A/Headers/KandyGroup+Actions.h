//
//  KandyGroup+Actions.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/18/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyGroup.h"
#import "KandyGroupParticipant.h"

@interface KandyGroup (Actions)

/**
 *  Get all admin participants for current group
 *
 *  @return NSArray of KandyGroupParticipants
 */
-(NSArray*)getAdminParticipants;
/**
 *  Get all muted participants for current group
 *
 *  @return NSArray of KandyGroupParticipants
 */
-(NSArray*)getMutedParticipants;
/**
 *  Get all unmuted participants for current group
 *
 *  @return NSArray of KandyGroupParticipants
 */
-(NSArray*)getUnmutedParticipants;
/**
 *  Get self participant in the group
 *
 *  @return KandyGroupParticipant, nil if self not found in group
 */
-(KandyGroupParticipant*)getSelfParticipant;

@end
