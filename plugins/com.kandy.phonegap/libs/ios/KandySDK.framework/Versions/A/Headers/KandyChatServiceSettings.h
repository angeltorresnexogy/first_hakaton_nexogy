//
//  KandyChatServiceSettings.h
//  KandySDK
//
//  Created by Omer Shaked on 11/10/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyChatServiceEnums.h"
#import "KandyDownloadPathBuilderProtocol.h"

@interface KandyChatServiceSettings : NSObject

/**
 *  Maximum size for media upload in kB
 *  Default value is - 20,480
 */
@property (nonatomic, assign) double mediaMaxUploadSizeInKB;

/**
 *  Protocol that manages the download path - can be replaced with external pathBuilder that
 *  conforms to KandyDownloadPathBuilderProtocol
 */
@property (nonatomic, strong) id<KandyDownloadPathBuilderProtocol> downloadPathBuilder;
/**
 *  Size of the auto downloaded thumbnails for media items
 *  Default value is EKandyThumbnailSize_medium
 */
@property (nonatomic, assign) EKandyThumbnailSize autoDownload_thumbnailSize;

/**
 *  Should auto download thumbnail if exists, on incoming messages
 *  Default value is YES
 */
@property (nonatomic, assign) BOOL autoDownload_thumbnail;

/**
 *  Auto download media only when using this connection type
 *  Default value is EKandyMediaAutoDownloadConnectionType_cellularData (all connection types)
 */
@property (nonatomic, assign) EKandyMediaAutoDownloadConnectionType autoDownload_media_connectionType;

/**
 *  Max size auto download media on incoming messages in kB
 *  Default value is 20,480
 */
@property (nonatomic, assign) double autoDownload_media_maxSizeKB;

@end
