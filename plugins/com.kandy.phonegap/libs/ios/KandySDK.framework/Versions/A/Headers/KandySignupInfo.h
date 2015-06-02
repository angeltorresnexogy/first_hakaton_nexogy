//
//  KandySignupInfo.h
//  Fring
//
//  Created by Guy Lachish on 03/09/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 KandySignupInfo holds the data about multi registeration with a userId
 */
@interface KandySignupInfo : NSObject
/**
 Returns YES if the current userId is registered with atleast one other device
 */
@property (assign) BOOL isUserExistsOnOtherDevice;
/**
 Returns YES if registration with the same userId is allowed on more than one device
 */
@property (assign) BOOL isMDLAllowed;

@end
