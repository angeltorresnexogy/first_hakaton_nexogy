//
//  KandyPresenceProtocol.h
//  Fring
//
//  Created by Guy Lachish on 27/07/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyRecord.h"
#import "KandyPresenceServiceEnums.h"

/**
 KandyPresenceProtocol represents objects that are sent to a presence request.
 
 For example: 
 If you use an addressBook of contacts in your product, you may wish to show their present state,
 you could send these contact objects to a presence service, as long as you ensure your contact objects
 implement this protocol.
 */
@protocol KandyPresenceProtocol <NSObject>

/**
    The last date when user was online
 */
@property (readonly) NSDate *lastSeen;

/**
 *  KandyRecord related to this Presenceobject
 */
@property (readonly) KandyRecord* kandyRecord;

/**
 The date of the Presence retrieval request - date is set at response arrival
 */
@property (readonly) NSDate *requestDate;

/**
 *  Check if last seen date is later than last seen date of the given KandyPresenceProtocol
 *
 *  @param other KandyPresence object to compare
 *
 *  @return YES if later
 */
-(BOOL) laterThan:(id<KandyPresenceProtocol>) other;
/**
 *  Compare self with the given KandyPresence
 *  Compares the lastSeen date
 *
 *  @param anotherPresence KandyPresence to compare
 *
 *  @return NSOrderedDescending if self is later, NSOrderedAscending if self is earlier, NSOrderedSame if same date
 */
- (NSComparisonResult)compare:(id<KandyPresenceProtocol>) anotherPresence;


@end
