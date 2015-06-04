//
//  KandyChatMessage.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 12/28/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyMessageProtocol.h"
#import "KandyRecord.h"

/**
 * This interface handles the range of messages for the Chat
 */
@interface KandyChatMessage : NSObject<KandyMessageProtocol>

/**
 *  Initializing method for KandyChatMessage
 *
 *  @param aMediaItem the Kandy message data
 *  @param aRecipient the recipient
 *
 *  @return initialized KandyChatMessage
 */
-(id)initWithMediaItem:(id<KandyMediaItemProtocol>)aMediaItem recipient:(KandyRecord*)aRecipient;

/**
 *  Initializing method for KandyChatMessage
 *
 *  @param aText the text message data
 *  @param aRecipient the recipient
 *
 *  @return initialized KandyChatMessage
 */
-(id)initWithText:(NSString*)aText recipient:(KandyRecord*)aRecipient;

@end
