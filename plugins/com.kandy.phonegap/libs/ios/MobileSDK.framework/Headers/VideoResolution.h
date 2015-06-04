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

/**
 * @brief This class stores the properties of video resolution.
 * @since 2.0.0
 */
@interface VideoResolution : NSObject

/**
 * Constructor for WebRTCCall  class
 *
 * @param maxWidth Maximum Width of Resolution
 * @param maxHeight Maximum Height of resolution
 * @param minWidth Minimum Width of resolution
 * @param minHeight Minimum Height of resolution
 * @param fps Minimum Frame rate per second
 *
 * @since 2.0.0
 */
- (void) initWithMaxWidh:(NSString *) maxWidth
                maxHeight:(NSString *) maxHeight
                minWidth:(NSString *) minWidth
                minHeight:(NSString *) minHeight
                     fps:(NSString *) fps;

/**
 * Retrieves Maximum Width of Resolution
 *
 * @return maximum video width
 *
 * @since 2.0.0
 */
- (NSString *) getMaxWidth;

/**
 * Retrieves Maximum Height of Resolution
 *
 * @return maximum video height
 *
 * @since 2.0.0
 */
- (NSString *) getMaxHeight;

/**
 * Retrieves Minimum Width of Resolution
 *
 * @return minimum video width
 *
 * @since 2.0.0
 */
- (NSString *) getMinWidth;

/**
 * Retrieves Minimum Height of Resolution
 *
 * @return minimum video height
 *
 * @since 2.0.0
 */
- (NSString *) getMinHeight;

/**
 * Retrieves Minimum Frame rate per second
 *
 * @return minimum video fps
 *
 * @since 2.0.0
 */
- (NSString *) getFps;

@end
