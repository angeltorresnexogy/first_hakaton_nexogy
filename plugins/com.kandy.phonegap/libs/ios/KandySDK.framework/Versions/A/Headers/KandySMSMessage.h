//
//  KandySMSMessage.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 12/28/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyMessageProtocol.h"

@interface KandySMSMessage : NSObject<KandyMessageProtocol>

/**
 *  The display name that will be used when showing the SMS on the recipient side
 */
@property (nonatomic,strong) NSString* displayName;

/**
 *  Initializing method for KandySMSMessage
 *
 *  @param aText                      the text message data
 *  @param aInternationalPhoneNumber  the phone number to send the SMS (e164 format)
 *  @param aDisplayName               the displayName that will be used to show the SMS on the recipient side - default value is the local user ID
 *
 *  @return initialized KandySMSMessage
 */
-(id)initWithText:(NSString*)aText recipient:(NSString*)aInternationalPhoneNumber displayName:(NSString*)aDisplayName;

@end
