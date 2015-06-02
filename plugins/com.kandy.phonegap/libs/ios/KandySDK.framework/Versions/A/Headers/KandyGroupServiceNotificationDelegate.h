//
//  KandyGroupServiceNotificationDelegate.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/22/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef KandySDK_KandyGroupServiceNotificationDelegate_h
#define KandySDK_KandyGroupServiceNotificationDelegate_h

#import <Foundation/Foundation.h>
@class KandyGroupDestroyed;
@class KandyGroupUpdated;
@class KandyGroupParticipantJoined;
@class KandyGroupParticipantKicked;
@class KandyGroupParticipantLeft;

@protocol KandyGroupServiceNotificationDelegate <NSObject>

/**
 *  Will be called when group is destroyed.
 *  You should mark this event as received in order not to get it again
 *
 *  @param groupDestroyedEvent the event
 */
-(void)onGroupDestroyed:(KandyGroupDestroyed*)groupDestroyedEvent;
/**
 *  Will be called when group is updated
 *  You should mark this event as received in order not to get it again
 *
 *  @param groupUpdatedEvent the event
 */
-(void)onGroupUpdated:(KandyGroupUpdated*)groupUpdatedEvent;
/**
 *  Will be called when group participant joins
 *  You should mark this event as received in order not to get it again
 *
 *  @param groupParticipantJoinedEvent the event
 */
-(void)onParticipantJoined:(KandyGroupParticipantJoined*)groupParticipantJoinedEvent;
/**
 *  Will be called when group participant is kicked
 *  You should mark this event as received in order not to get it again
 *
 *  @param groupParticipantKickedEvent the event
 */
-(void)onParticipantKicked:(KandyGroupParticipantKicked*)groupParticipantKickedEvent;
/**
 *  Will be called when group participant leaves
 *  You should mark this event as received in order not to get it again
 *
 *  @param groupParticipantKickedEvent the event
 */
-(void)onParticipantLeft:(KandyGroupParticipantLeft*)groupParticipantLeftEvent;

@end

#endif
