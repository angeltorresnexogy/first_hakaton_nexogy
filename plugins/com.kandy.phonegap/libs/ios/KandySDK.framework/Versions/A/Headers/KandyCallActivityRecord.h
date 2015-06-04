//
//  KandyCallActivityRecord.h
//  Fring
//
//  Created by Yehonatan Yochpaz on 8/12/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyCallServiceEnums.h"
@class KandyRecord;

/**
 * This interface handles:
 *    - all of the Kandy call records
 *    - the incomming/outgoing kandyRecord
 *    - main action type
 *    - the start/stop times
 *    - the forwarded number
 *    - whether the call is: video, incomming, missed, forwarded, outgoing, or transferred
 */
 
@interface KandyCallActivityRecord : NSObject
/**
 *  All of the Kandy records that were participated in the call @see KandyRecord.h
 */
@property (strong, nonatomic) NSArray* totalKandyRecords;
/**
 *  In incoming call - the kandyRecord that called. In outgoing call - the kandyRecord that was called 
 */
@property (strong, nonatomic) KandyRecord* calleeRecord;
/**
 *  main action type
 */
@property (assign) EKandyCallType type;
/**
 *  The time when the activity started
 */
@property (strong, nonatomic) NSDate *startTime;
/**
 *  The time when the activity ended (relevant for calls)
 */
@property (strong, nonatomic) NSDate *endTime;
///**
// *  Phone number via which the call was forwarded
// */
//@property (strong, nonatomic) NSString *via;
/**
 *  If the call was started with video
 */
@property (assign, nonatomic) BOOL isStartedWithVideo;
/**
 *  Is it an incoming call
 */
@property (assign, nonatomic) BOOL isIncomingCall;
/**
 *  Is it a missed call
 */
@property (assign, nonatomic) BOOL isMissed;
///**
// *  Is it a call forwarded
// */
//@property (assign, nonatomic) BOOL isForwarded;
///**
// *  Is it a call transfered
// */
//@property (assign, nonatomic) BOOL isTransferred;

@end
