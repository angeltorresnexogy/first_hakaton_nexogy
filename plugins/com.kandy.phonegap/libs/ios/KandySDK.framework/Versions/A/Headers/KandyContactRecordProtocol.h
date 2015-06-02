//
//  KandyContactRecordProtocol.h
//  KandySDK
//
//  Created by Omer Shaked on 12/3/14.
//  Copyright (c) 2014 genband. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyContactsServiceEnums.h"

@class KandyRecord;
/**
 *  A base protocol for representing field entries in Contact. For example addresses, phones, emails.
 */
@protocol KandyContactRecordProtocol <NSObject>

/**
 *  Represents an identifier that is recognized by the server. For example for making calls.
 */
@property (nonatomic, readonly) KandyRecord * serverIdentifier;

/**
 *  The field's value
 */
@property (nonatomic, readonly) id value;

/**
 *  The field's text description
 */
@property (nonatomic, readonly) NSString * valueDescriptor;

/**
 *  An enum representing the field's value type
 */
@property (nonatomic, readonly) EKandyContactRecordType valueType;

@end
