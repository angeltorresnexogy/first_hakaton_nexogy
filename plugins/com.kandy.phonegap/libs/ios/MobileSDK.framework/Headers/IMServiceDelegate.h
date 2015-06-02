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
#import "IMDelegate.h"
#import "IMApplicationDelegate.h"
#import "OutGoingIMDelegate.h"

/**
 * @brief InstantMessage service methods
 * @since 2.0.0
 **/
@protocol IMServiceDelegate <NSObject>

/**
 * Sets the event handler for IMService to receive incoming IM.
 *
 * @param app delegete of application to return callbacks for IM
 * @since 2.0.0
 */

-(void) setIMApplication :(id <IMApplicationDelegate>) app;

/**
 * Creates a new OutGoingIM object
 *
 * @param text message
 * @param fromAddress address of user who will send the message
 * @param toAddress address of user who will receive the message
 * @param originatorDisplayName name of the user who will send the message
 * @param terminatorDisplayName name of the user who will receive the message
 *
 * @return IM to send
 *
 * @since 2.0.0
 */
- (id<OutGoingIMDelegate>) createOutGoingIM :(NSString*) text
                              andFromAddress:(UriAddress *) fromAddress
                                andToAddress:(UriAddress *) toAddress
                    andOriginatorDisplayName:(NSString*) originatorDisplayName
                    andTerminatorDisplayName:(NSString*) terminatorDisplayName;


/**
 * Creates a new OutGoingIM object
 *
 * @param text message
 * @param toAddress address of user who will receive the message
 * @param terminatorDisplayName name of the user who will receive the message
 *
 * @return IM to send
 *
 * @since 2.0.0
 */
- (id<OutGoingIMDelegate>) createOutGoingIM :(NSString*) text
                                andToAddress:(UriAddress *) toAddress
                    andTerminatorDisplayName:(NSString*) terminatorDisplayName;

@end
