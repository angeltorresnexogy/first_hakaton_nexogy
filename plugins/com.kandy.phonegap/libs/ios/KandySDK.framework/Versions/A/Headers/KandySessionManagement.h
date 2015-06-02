//
//  KandySessionManagement.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/6/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyUserInfo.h"
#import "KandySession.h"

/**
 * This interface handles the user\data, and can remove user\all users
 */

@interface KandySessionManagement : NSObject

/**
 *  Holds the current user ID, as used in signup proccess
 */
@property (assign, setter = setLoggedInUser:, getter = getLoggedInUser) KandyUserInfo *loggedInUser;

/**
 * Get all users in the application @see KandyUserInfo.h
 */
@property (readonly) NSArray *provisionedUsers;

/**
 *  The session that saves the user data
 */
@property (nonatomic, strong) KandySession* session;

/**
 *  Initialization method for KandySessionManagement
 *
 *  @param kandySession The session with the user data
 *
 *  @return an initialized KandySessionManagement object with the given parameters
 */
-(id)initWithSession:(KandySession*)kandySession;

/**
 *  Get specific user data by user ID
 *
 *  @param userId the user ID used on signup
 *
 *  @return the user data
 */
- (KandyUserInfo *) provisionedUserDataByUserId:(NSString *)userId;

/**
 *  add/change user data
 *
 *  @param userId     userId the user ID used on signup
 *  @param KandyUserInfo the user data
 */
- (void) addProvisionedUser:(NSString *)userId withData:(KandyUserInfo *)userInfo;

/**
 *  remove user from the application
 *
 *  @param userId userId the user ID used on signup
 */
- (void) removeProvisionedUser:(NSString *)userId;

/**
 *  remove all the users in the application
 */
- (void) removeAllProvisionedUsers;

/**
 *  Save the Session to path
 *
 *  @param path The path to save the Session
 *
 *  @return Error if the save failed
 */
-(NSError*) saveToPath:(NSString*)path;

/**
 *  Get the user session data that is saved specific path
 *
 *  @return Return the SessionData if exists, otherwise returns nil
 */
+(KandySession*) getSavedSessionDataFromPath:(NSString*)path;

@end
