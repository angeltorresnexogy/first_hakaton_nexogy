//
//  KandyImageItemProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/17/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import "KandyFileItemProtocol.h"
#import <CoreLocation/CoreLocation.h>
#import "KandyTransferProgress.h"
#import "KandyChatServiceEnums.h"

/**
 * Handles the image media item
 */
@protocol KandyImageItemProtocol <KandyFileItemProtocol>

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
@property (readonly) EKandyMediaOrientation orientation;
@end