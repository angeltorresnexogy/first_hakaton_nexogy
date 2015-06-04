//
//  KandyCallParticipantProtocol.h
//  Fring
//
//  Created by Yehonatan Yochpaz on 7/28/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KandyCallServiceEnums.h"

@class KandyRecord;

/**
 *  Represent a participant in the call
 */
@protocol KandyCallParticipantProtocol <NSObject>

/**
 *  The participant obj @see KandyRecord
 */
@property(readonly) KandyRecord* record;
/**
 *  Is this participant displaying video
 */
@property(readonly) BOOL isDisplayingVideo;
/**
 *  Is the participant's audio muted
 */
@property(readonly) BOOL isAudioMute;
/**
 *  Is the participant on hold
 */
@property(readonly) BOOL isOnHold;

@end
