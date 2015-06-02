//
//  KandyChatServiceNotificationDelegate.h
//  KandySDK
//
//  Created by Omer Shaked on 11/9/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyMessageProtocol.h"
@class KandyChatMessage;
@class KandyDeliveryAck;
@class KandyTransferProgress;

@protocol KandyChatServiceNotificationDelegate <NSObject>

/**
 *  Chat message received
 *
 *  @param kandyMessage     the Chat kandyMessage received
 *  @param recipientType    EKandyRecordType representing the recipient type
 */
-(void) onMessageReceived:(id<KandyMessageProtocol>)kandyMessage recipientType:(EKandyRecordType)recipientType;

/**
 *  Received acknowledge for Chat message delivered
 *  You should mark the KandyDeliveryAck as recieved, in order not to receive it again upon pulling events
 *
 *  @param ackData Acknowledges that the message you delivered was received by the other side 
 */
-(void) onMessageDelivered:(KandyDeliveryAck*)ackData;

/**
 *  Auto download progress received
 *
 *  @param transferProgress the transfer progress
 *  @param kandyMessage     the Kandy message associated with the progress notification
 */
-(void) onAutoDownloadProgress:(KandyTransferProgress*)transferProgress kandyMessage:(id<KandyMessageProtocol>)kandyMessage;

/**
 *  Auto download finished received
 *
 *  @param error        error in case of failure
 *  @param path         the final absolute path for the downloaded file
 *  @param kandyMessage the Kandy message associated with this notification
 */
-(void) onAutoDownloadFinished:(NSError*)error fileAbsolutePath:(NSString*)path kandyMessage:(id<KandyMessageProtocol>)kandyMessage;
@end
