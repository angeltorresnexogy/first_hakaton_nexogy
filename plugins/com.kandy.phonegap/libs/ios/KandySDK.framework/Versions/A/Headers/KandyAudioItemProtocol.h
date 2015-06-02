//
//  KandyAudioItemProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/17/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import "KandyFileItemProtocol.h"
#import <CoreLocation/CoreLocation.h>
#import "KandyTransferProgress.h"

/**
 * Handles the audio media item
 */
@protocol KandyAudioItemProtocol <KandyFileItemProtocol>

/**
 *  Duration of the audio - seconds
 */
@property (readonly) double duration;

@end


