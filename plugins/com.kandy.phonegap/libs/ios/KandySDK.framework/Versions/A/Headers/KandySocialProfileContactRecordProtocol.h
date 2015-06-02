//
//  KandySocialProfileContactReocordProtocol.h
//  KandySDK
//
//  Created by Omer Shaked on 12/7/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyContactRecordProtocol.h"
#import "KandyContactsServiceEnums.h"

/**
 *  Protocol for social profiles entries in a contact.
 */
@protocol KandySocialProfileContactRecordProtocol <NSObject, KandyContactRecordProtocol>

/**
 *  An enum indicating the type of social network (Facebook, LinkedIn, etc.)
 */
@property (nonatomic, readonly) EKandyContactRecordSocialProfileType socialNetwork;

/**
 *  The social network's user name
 */
@property (nonatomic, readonly) NSString *username;

/**
 *  The social network's user identifier
 */
@property (nonatomic, readonly) NSString *userIdentifier;

/**
 *  The social network's user URL
 */
@property (nonatomic, readonly) NSURL *url;

@end
