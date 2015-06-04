//
//  KandySession.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/6/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyDomain.h"
#import "KandyUserInfo.h"

/**
 * This interface handles the:
 *     -  KandyDomain information
 *     -  list of all provisioned/logged in users
 *     -  init the user session
 *     -  Serialize/Deseralize the Session to/from data
 */
 
@interface KandySession : NSObject

/**
 *  the KandyDomain information
 *  @see KandyDomain.h
 */
@property(nonatomic, strong) KandyDomain* kandyDomain;
/**
 *  All provisioned users of type KandyUserInfo, that the user provisioned with the SDK
 *  @see KandyUserInfo.h
 */
@property(nonatomic, strong) NSMutableDictionary* provisionedUsers;
/**
 *  Currently loggedIn user info
 *  @see KandyUserInfo.h
 */
@property(nonatomic, strong) KandyUserInfo* loggedInUser;

/**
 *  Init the user session
 *
 *  @param key    The Kandy domain key
 *  @param secret The Kandy domain secret
 *
 *  @return Initialized KandySession obj
 */
-(id) initWithDomainKey:(NSString*)key andDomainSecret:(NSString*)secret;

/**
 *  Init the user session
 *
 *  @param key    The Kandy domain key
 *
 *  @return Initialized KandySession obj
 */
-(id) initWithDomainKey:(NSString*)key;

/**
 *  Serialize the Session to data
 *
 *  @return The data we got from deserilizing the data
 */
-(NSData*) serialize;
/**
 *  Deserialze the Session from data
 *
 *  @param SessionData The data to deserialize from
 */
-(void) deserialize:(NSData*)sessionData;

@end
