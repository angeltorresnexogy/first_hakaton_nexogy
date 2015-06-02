//
//  KandyServices.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 10/1/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyLocationService.h"
#import "KandyPresenceService.h"
#import "KandyChatService.h"
#import "KandyCallService.h"
#import "KandyPushNotificationService.h"
#import "KandyContactsService.h"
#import "KandyGroupService.h"

/**
 * This interface handles all the SDK services: Location, Presence, Chat, Call, Address Book, and Push Notifications
 */
@interface KandyServices : NSObject

/**
 *  Location service - serves all location related proccess
 */
@property (nonatomic, readonly) KandyLocationService* location;

/**
 *  Presence service - serves all presence proccess
 */
@property (nonatomic, readonly) KandyPresenceService* presence;

/**
 *  Chat service - serves all messaging proccess
 */
@property (nonatomic, readonly) KandyChatService* chat;

/**
 *  Call service - serves all calling proccess
 */
@property (nonatomic, readonly) KandyCallService* call;

/**
 *  PushNotification service - serves all remote notifications related proccess
 */
@property (nonatomic, readonly) KandyPushNotificationService* push;

/**
 *  Contacts service - serves all contacts related proccess
 */
@property (nonatomic, readonly) KandyContactsService* contacts;

/**
 *  GroupService - serves all group related proccess
 */
@property (nonatomic, readonly) KandyGroupService* group;

@end
