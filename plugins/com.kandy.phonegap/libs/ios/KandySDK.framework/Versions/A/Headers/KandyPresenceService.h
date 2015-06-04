//
//  KandyPresenceService.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 10/22/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyPresenceServiceEnums.h"

/**
 * This interface handles:
 *    - Retrieval of presence data for contacts
 */
 
@interface KandyPresenceService : NSObject

/**
 *  Gets the Presence data for the KandyRecords passed as records parameter, and returns it in the response callback as <KandyPresenceProtocol> objects. Also returns requested KandyRecords for which no presence data was found.
 *
 *  @param records            an array of KandyRecords
 *  @param responseCallback   the completion block with preseceObjects containing <KandyPresenceProtocol> objects with the Presence data, or an error if an error has occured. Also returns requested KandyRecords for which no presence data was found.
 */
- (void) getPresenceForRecords:(NSArray *)records
               responseCallback:(void(^)(NSError* error, NSArray * presenceObjects, NSArray * missingPresenceKandyRecords))responseCallback;

@end
