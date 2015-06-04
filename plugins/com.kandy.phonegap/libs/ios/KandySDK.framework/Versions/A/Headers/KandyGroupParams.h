//
//  KandyGroupParams.h
//  KandySDK
//
//  Created by Tamir Maoz on 3/11/15.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyImageItemProtocol.h"

#define kRemoveGroupImage @""
#define kRemoveGroupName @""

@interface KandyGroupParams : NSObject
/**
 *  The group name - can be set to kRemoveGroupName in order to remove the current name
 */
@property (nonatomic, strong) NSString* groupName;
/**
 *  The absolute path to the group image - can be set to kRemoveGroupImage in order to remove the current image
 */
@property (nonatomic, strong) NSString* groupAbsoluteImagePath;
/**
 *  KandyImageItemProtocol representing the group image - will be initiated automatically when updating the groupAbsoluteImagePath
 */
@property (readonly) id<KandyImageItemProtocol> groupImageItem;

@end
