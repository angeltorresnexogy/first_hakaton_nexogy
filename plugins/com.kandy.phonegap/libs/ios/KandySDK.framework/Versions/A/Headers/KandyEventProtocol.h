//
//  KandyEventProtocol.h
//  KandySDK
//
//  Created by Yehonatan Yochpaz on 12/28/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, EKandyEventType) {
    /**
     *  Kandy event which the SDK does not recognize
     */
    EKandyEventType_unknown = 0,
    /**
     *  Fetch the messages from the server
     */
    EKandyEventType_fetchPendingMessages,
    /**
     *  New incoming message arrived
     */
    EKandyEventType_message,
    /**
     *  Sent message was received by other client
     */
    EKandyEventType_messageDelivered,
    /**
     *  Missed call event
     */
    EKandyEventType_missedCall,
    /**
     *  Incoming call
     */
    EKandyEventType_incomingCall,
    /**
     *  Group destroyed
     */
    EKandyEventType_groupDestroyed,
    /**
     *  Group updated
     */
    EKandyEventType_groupUpdated,
    /**
     *  Group participant joined
     */
    EKandyEventType_groupParticipantJoined,
    /**
     *  Group participant kicked
     */
    EKandyEventType_groupParticipantKicked,
    /**
     *  Group participant left
     */
    EKandyEventType_groupParticipantLeft,
};

/**
 *  Represents class for message we can get / send to the Kandy system
 */
@protocol KandyEventProtocol <NSObject>
/**
 *  Unique identifier of the KandyEvent
 */
@property (readonly) NSString* uuid;
/**
 *  KandyEvent timestamp
 */
@property (readonly) NSDate* timestamp;
/**
 *  Type of KandyEvent (EKandyEventType)
 */
@property (readonly) EKandyEventType eventType;

/**
 *  Mark the event as recieved
 *
 *  @param responseCallback Callback for error if failed to mark
 */
-(void) markAsReceivedWithResponseCallback:(void(^)(NSError* error))responseCallback;

@end
