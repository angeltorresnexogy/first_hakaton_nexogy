//
//  KandyVideoItemProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/17/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import "KandyFileItemProtocol.h"
#import <CoreLocation/CoreLocation.h>
#import "KandyTransferProgress.h"

/**
 * Handles the video media item
 */
@protocol KandyVideoItemProtocol <KandyFileItemProtocol>

/**
 *  The capture location
 */
@property (readonly) CLLocation* captureLocation;
/**
 *  The height
 */
@property (readonly) double height;
/**
 *  The width
 */
@property (readonly) double width;
/**
 *  The orientation
 */
@property (readonly) int orientation;
/**
 *  The video duration - in seconds
 */
@property (readonly) double duration;

@end


