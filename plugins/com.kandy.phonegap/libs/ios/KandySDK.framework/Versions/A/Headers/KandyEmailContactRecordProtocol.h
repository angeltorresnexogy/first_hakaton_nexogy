//
//  KandyEmailContactRecordProtocol.h
//  KandySDK
//
//  Created by Omer Shaked on 12/3/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyContactRecordProtocol.h"

/**
 *  Protocol for email entries in a contact.
 */
@protocol KandyEmailContactRecordProtocol <NSObject, KandyContactRecordProtocol>

/**
 *  The contact's email
 */
@property (nonatomic, readonly) NSString * email;

/**
 *  The contact's email description
 */
@property (nonatomic, readonly) NSString * emailDescriptor;

@end
