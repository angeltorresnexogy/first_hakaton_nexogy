//
//  KandyPendingIncomingCallEvent.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 2/12/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyCallServiceEnums.h"
#import "KandyRecord.h"

@interface KandyPendingIncomingCallEvent : NSObject <KandyEventProtocol>

/**
 *  The call ID
 */
@property(readonly, nonatomic) NSString *callId;
/**
 *  The caller record
 */
@property(readonly, nonatomic) KandyRecord *caller;
/**
 *  The call type
 */
@property(readonly, nonatomic) EKandyCallType callType;
/**
 *  Is video call
 */
@property(readonly, nonatomic) BOOL isVideo;
/**
 *  Via (only in PSTN to IP calls, DID number)
 */
@property(readonly, nonatomic) NSString *via;

/**
 *  Initialize Kandy pending incoming call
 *
 *  @param callId           The call ID
 *  @param caller           The caller record
 *  @param callType         The call type
 *  @param isVideo          Is the incoming call is with video
 *  @param callUUID         The UUID of the incoming call
 *  @param callTimestamp    The timestamp of the incoming call
 *  @param via              The number the call comes through (in PSTN to IP)
 *
 *  @return Initialized KandyPendingIncomingCall
 */
-(id) initWithCallId:(NSString*)aCallId caller:(KandyRecord*)aCaller callType:(EKandyCallType)aCallType isVideo:(BOOL)aIsVideo timestamp:(NSDate*)aTimestamp via:(NSString*)aVia;

/**
 *  Make the SDK notify the application about pending incoming call
 *
 *  @param answerType The answer type when the incoming call will connect
 */
-(void) handlePendingIncomingCall:(EKandyIncomingCallAnswerType)answerType;

@end
