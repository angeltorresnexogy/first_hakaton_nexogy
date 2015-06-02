//
//  KandyDownloadPathProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 2/17/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyChatServiceEnums.h"
#import "KandyFileItemProtocol.h"
#import "KandyRecord.h"

@protocol KandyDownloadPathBuilderProtocol <NSObject>

/**
 *  This methods builds and returns the absolute path for downloaded files
 *
 *  @param kandyReocrd The Kandy record associated with the downloaded file
 *  @param fileItem    The downloaded file item
 *  @param isThumbnail BOOL indicating if the file item downloaded is a thumbnail
 *
 *  @return the absolute path for downloaded files - Default value for iOS is - Documents/Kandy/Media/KandyRecordType/UserName/MediaType(/Thumbnail?)
 */
-(NSString*)downloadAbsolutePath:(KandyRecord*)kandyRecord fileItem:(id<KandyFileItemProtocol>)fileItem isThumbnail:(BOOL)isThumbnail;
/**
 *  This methods builds and returns the fileName for the downloaded files
 *
 *  @param fileItem    The file item that the name is associated with
 *  @param isThumbnail YES if this is a thumbnail image. If YES, a prefix will be added to the file name
 *
 *  @return the fileName for the downloaded files - Default value for iOS is - (tmb_?)fileItem.fileName if exists, otherwise the (tmb_?)fileItem.contentUUID
 */
-(NSString*)downloadFileName:(id<KandyFileItemProtocol>)fileItem isThumbnail:(BOOL)isThumbnail;

@end