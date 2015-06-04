//
//  KandyPhoneContactRecordProtocol.h
//  KandySDK
//
//  Created by Omer Shaked on 12/3/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyContactRecordProtocol.h"

/**
 *  Protocol for phone entries in a contact.
 */
@protocol KandyPhoneContactRecordProtocol <NSObject, KandyContactRecordProtocol>

/**
 *  The cotact's phone
 */
@property (nonatomic, readonly) NSString * phone;

/**
 *  The contact's phone description
 */
@property (nonatomic, readonly) NSString * phoneDescriptor;

@end
