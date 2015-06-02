//
//  KandyLocationItemProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/17/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "KandyMediaItemProtocol.h"

/**
 * Handles the location media item
 */
@protocol KandyLocationItemProtocol <KandyMediaItemProtocol>

/**
 *  The location
 */
@property (readonly) CLLocation* location;

@end


