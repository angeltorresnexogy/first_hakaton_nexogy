/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 3.0.3.2
 *
 */

#import <Foundation/Foundation.h>
#import "PresenceDelegate.h"
#import "PresenceApplicationDelegate.h"
#import "PresenceStates.h"
#import "PresenceActivityType.h"



/**
 * @brief PresenceService and directory.
 * @since 2.0.0
 */
@protocol PresenceServiceDelegate <NSObject>

/**
 * Set the event handler PresenceApplicationDelegate for the PresenceService.
 * @param app delegete of application to return callbacks for presence
 * @since 2.0.0
 */
- (void) setPresenceApplication :(id <PresenceApplicationDelegate>) app;

/**
 * Updates the user's presence state
 * @param app delegete of application to return callbacks
 * @param state new state for updating
 * @param activity new actity to update
 * @param note new note to update
 * @since 2.0.0
 */
- (void) updatePresence: (id<PresenceApplicationDelegate>) app
            andPresenceState:(PresenceStates) state
    andPresenceActivityType:(PresenceActivityType) activity
        andPresenceDetail:(NSString*)note;

/**
 * Start watching contacts which are given in the list.
 * @param presenceList user list
 * @since 2.0.0
 */
- (void) startWatch: (NSMutableArray *)presenceList;

/**
 * Stop watching contacts, which are given in the list.
 * @param presenceList user list
 * @since 2.0.0
 */
- (void) stopWatch: (NSMutableArray *)presenceList;

/**
 * Get status of contacts once, which are given in the list.
 * @param presenceList user list
 * @since 2.0.0
 */
- (void) retrieve: (NSMutableArray *)presenceList;
@end
