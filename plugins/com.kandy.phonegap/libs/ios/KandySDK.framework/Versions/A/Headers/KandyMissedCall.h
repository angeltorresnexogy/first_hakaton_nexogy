//
//  KandyMissedCall.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 3/16/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyEventProtocol.h"
#import "KandyCallServiceEnums.h"
#import "KandyRecord.h"

@interface KandyMissedCall : NSObject<KandyEventProtocol>

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
 *  Initialize KandyMissedCall
 *
 *  @param aUUID             UUID of the missed call
 *  @param auserId           The caller userId
 *  @param aCallType         The call type
 *  @param aIsVideo          Is missed call was with video
 *  @param aCallTimestamp    The timestamp of the missed call
 *  @param aVia              The number the call comes through (in PSTN to IP)
 *
 *  @return Initialized KandyMissedCall
 */
-(id) initWithUUID:(NSString*)aUUID caller:(KandyRecord*)aCaller callType:(EKandyCallType)aCallType isVideo:(BOOL)aIsVideo timestamp:(NSDate*)aTimestamp via:(NSString*)aVia;

@end
