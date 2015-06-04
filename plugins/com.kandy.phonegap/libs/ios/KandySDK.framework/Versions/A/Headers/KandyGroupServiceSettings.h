//
//  KandyGroupServiceSettings.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/10/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyDownloadPathBuilderProtocol.h"

@interface KandyGroupServiceSettings : NSObject

/**
 *  Maximum size for media upload in kB
 *  Default value is - 20,480
 */
@property (nonatomic, assign) double groupImageMaxUploadSizeInKB;
/**
 *  Protocol that manages the download path - can be replaced with external pathBuilder that
 *  conforms to KandyDownloadPathBuilderProtocol
 */
@property (nonatomic, strong) id<KandyDownloadPathBuilderProtocol> downloadPathBuilder;

@end
