//
//  KandyMediaItemProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/17/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyChatServiceEnums.h"

/**
 * Handles the media item
 */
@protocol KandyMediaItemProtocol <NSObject>

/**
 *  Media type (EKandyFileType)
 */
@property (readonly) EKandyFileType mediaType;
/**
 *  Text associated with the MediaItem
 */
@property (readonly) NSString* text;
/**
 *  Absolute path to the thumbnail file
 *  Absolute path may change for some reason e.g., after application version update
 */
@property (readonly) NSString* thumbnailAbsolutePath;
/**
 *  Relative path to the thumbnail file - does not include the application directory path prefix
 *  Relative path is important since it does not change under any circumstance
 */
@property (readonly) NSString* thumbnailRelativePath;
/**
 *  Update the thumbnail path, e.g. after it was downloaded successfully
 *
 *  @param aThumbnailPath the updated thumbnail path
 */
-(void)updateThumbnailPath:(NSString*)aThumbnailPath;
/**
 *  Check if it is needed to download media
 *
 *  @return YES if there is media to download
 */
-(BOOL)shouldDownloadMedia;

@end


