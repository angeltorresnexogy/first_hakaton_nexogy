//
//  VideoCompressionSettings.h
//  KandySDK
//
//  Created by Tamir Maoz on 1/6/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kDefaultAudioCompressionBitrate 128000
#define kDefaultVideoCompressionBitrate 512000
#define kDefaultMaxEdgeSize 640
#define kDefaultMaxFramesBetweenKeyFrames 30

@interface KandyVideoCompressionSettings : NSObject

/**
 *  Audio compression bitrate - default value is 128000
 */
@property (nonatomic, assign) NSInteger audioBitrate;
/**
 *  Video compression bitrate - default value is 512000
 */
@property (nonatomic, assign) NSInteger videoBitrate;
/**
 *  Max edge size - default value is 640
 */
@property (nonatomic, assign) NSInteger maxEdgeSize;
/**
 *  Max frames between key frames - default value is 30
 */
@property (nonatomic, assign) NSInteger maxFramesBetweenKeyFrames;

@end
