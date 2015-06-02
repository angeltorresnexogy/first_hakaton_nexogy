//
//  KandyContactsServiceNotificationDelegate.h
//  KandySDK
//
//  Created by Omer Shaked on 12/8/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol KandyContactsServiceNotificationDelegate <NSObject>

/**
 *  Called when contacts on device address book are changed
 */
-(void)onDeviceContactsChanged;

@end
