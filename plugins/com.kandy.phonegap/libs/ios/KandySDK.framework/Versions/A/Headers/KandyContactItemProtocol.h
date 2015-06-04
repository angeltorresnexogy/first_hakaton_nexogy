//
//  KandyContactItemProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/17/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import "KandyFileItemProtocol.h"

/**
 * Handles the contact media item
 */
@protocol KandyContactItemProtocol <KandyFileItemProtocol>

/**
 *  The display name of the contact
 */
@property (readonly) NSString* displayName;

@end


