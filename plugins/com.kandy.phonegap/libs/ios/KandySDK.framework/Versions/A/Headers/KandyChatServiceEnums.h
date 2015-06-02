//
//  KandyChatServiceEnums.h
//  Fring
//
//  Created by Yaron Jackoby on 8/19/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef Fring_KandyChatServiceEnums_h
#define Fring_KandyChatServiceEnums_h

#define TEXT_MIME_TYPE @"text/plain"
#define LOCATION_MIME_TYPE @"location/utm"
#define IMAGE_MIME_TYPE_PREFIX @"image"
#define VIDEO_MIME_TYPE_PREFIX @"video"
#define AUDIO_MIME_TYPE_PREFIX @"audio"
#define CONTACT_MIME_TYPE @"text/vcard"

static NSString * const KandyChatServiceErrorDomain = @"ChatServiceErrorDomain";

/**
 *  Kandy Chat errors
 */
typedef NS_ENUM(NSInteger, EKandyChatServiceError)
{
    /**
     Request has completed successfully
     */
    EKandyChatServiceError_none = 0,
    /**
     *  Cannot send message because it contains data that exceeds max size
     */
    EKandyChatServiceError_maxSizeExceeded,
    /**
     *  Kandy recipient is invalid
     */
    EKandyChatServiceError_invalidRecipient,
    /**
     *  Thumbnail could not be downloaded
     */
    EKandyChatServiceError_noThumbnailFound,
    /**
     *  No data for download / upload could be found
     */
    EKandyChatServiceError_noDataFound,
    /**
     *  Failed sending Chat to the server
     */
    EKandyChatServiceError_chatSendFailed,
    /**
     *  Failed to transfer data cause it is currently transfering
     */
    EKandyChatServiceError_mediaIsCurrentlyTransfering,
    /**
     *  Message data could not been uploaded
     */
    EKandyChatServiceError_mediaWasNotUploaded,
    /**
     *  Message location is not defined
     */
    EKandyChatServiceError_locationNotDefined,
    /**
     *  The message can not be empty
     */
    EKandyChatServiceError_canNotSendEmptyMessage,
//    /**
//     *  Message data upload/download is cancelled
//     */
//    EKandyChatServiceError_operationCanceled,
    /**
     *  Could not cancel the operation
     */
    EKandyChatServiceError_operationCouldNotBeCanceled
};

/**
 *  Chat type
 */
typedef NS_ENUM (NSUInteger, EKandyMessageType)
{
    /**
     *  unknown type
     */
    EKandyMessageType_unKnown = 0,
    /**
     *  Chat message
     */
    EKandyMessageType_chat,
    /**
     *  SMS message
     */
    EKandyMessageType_SMS,
//    /**
//     *  native SMS application message
//     */
//    EKandyMessageType_nativeSMS,
//    /**
//     *  invite SMS message
//     */
//    EKandyMessageType_inviteSMS
};

/**
 *  Will describe the transfer state in case of download / upload progress
 */
typedef NS_ENUM (NSUInteger, EKandyMediaTransferState)
{
    /**
     *  transfer not yet started
     */
    EKandyMediaTransferState_none = 0,
    /**
     *  trasfer is in progress
     */
    EKandyMediaTransferState_transferring,
    /**
     *  transfer is completed
     */
    EKandyMediaTransferState_completed,
    /**
     *  transfer did not complete - cause of error
     */
    EKandyMediaTransferState_error,
};



/**
 *  Enum to determine on what type of connection allow auto download of media
 */
typedef NS_ENUM (NSUInteger, EKandyMediaAutoDownloadConnectionType)
{
    /**
     *  never auto download
     */
    EKandyMediaAutoDownloadConnectionType_never = 0,
    /**
     *  auto download only on WiFi
     */
    EKandyMediaAutoDownloadConnectionType_WiFi = 1 << 0,
    /**
     *  auto download on cellular data
     */
    EKandyMediaAutoDownloadConnectionType_cellularData = 1 << 1,
    /**
     *  auto download on both Wi-Fi and cellular data
     */
    EKandyMediaAutoDownloadConnectionType_always = EKandyMediaAutoDownloadConnectionType_WiFi | EKandyMediaAutoDownloadConnectionType_cellularData,
};

/**
 *  Chat Data Type
 */
typedef NS_ENUM(NSInteger, EKandyFileType)
{
    /**
    *  unknown chat data type
    */
    EKandyFileType_unknown,
    /**
     *  text chat type
     */
    EKandyFileType_text,
    /**
     *  image chat type
     */
    EKandyFileType_image,
    /**
     *  video chat type
     */
    EKandyFileType_video,
    /**
     *  audio chat type
     */
    EKandyFileType_audio,
    /**
     *  location chat type
     */
    EKandyFileType_location,
    /**
     *  contact chat type
     */
    EKandyFileType_contact
};

/**
 *  The media orientation - by degrees
 */
typedef NS_ENUM(NSInteger, EKandyMediaOrientation)
{
    /**
     *  0 degrees rotation
     */
    EKandyMediaOrientation_up = 0,
    /**
     *  90 degrees rotation
     */
    EKandyMediaOrientation_right = 90,
    /**
     *  180 degrees rotation
     */
    EKandyMediaOrientation_down = 180,
    /**
     *  270 degrees rotation
     */
    EKandyMediaOrientation_left = 270
};

/**
 *  Chat Message acknowledgement error type
 */
typedef NS_ENUM(NSInteger, EKandyChatMessageAckErrorType)
{
    /**
     *  no error
     */
    EKandyChatMessageAckErrorType_none = 0,
    /**
     *  recipient does not exist
     */
    EKandyChatMessageAckErrorType_noSuchUser,
    /**
     *  internal error
     */
    EKandyChatMessageAckErrorType_internalError,
    /**
     *  policy violation
     */
    EKandyChatMessageAckErrorType_userPolicyViolation,
    /**
     *  destination is blocked
     */
    EKandyChatMessageAckErrorType_blockedDestination,
    /**
     *  source region is not allowed
     */
    EKandyChatMessageAckErrorType_sourceRegionNotAllowed,
    /**
     *  sent by SMS
     */
    EKandyChatMessageAckErrorType_okSentBySMS,
    /**
     *  current location is blocked
     */
    EKandyChatMessageAckErrorType_userLocationBlocked, //Not relevant for now
    EKandyChatMessageAckErrorType_userLocationInsufficient, //Not relevant for now
    /**
     *  billing issue
     */
    EKandyChatMessageAckErrorType_serviceDeniedDueToBilling,
    /**
     *  not registered to billing
     */
    EKandyChatMessageAckErrorType_userNotRegisteredInBilling,
    /**
     *  not enough credits for this action
     */
    EKandyChatMessageAckErrorType_notEnoughCreditsForThisAction,
    /**
     *  the user is blocked
     */
    EKandyChatMessageAckErrorType_userIsBlocked,
    /**
     *  the chat message ack error type count - development use
     */
    EKandyChatMessageAckErrorType_count
};


static NSString * const KandyCloudServiceErrorDomain = @"CloudServiceErrorDomain";

typedef NS_ENUM(NSInteger, EKandyCloudServiceError)
{
//    /**
//     *  Failed to transfer data cause it is currently transfering
//     */
//    EKandyCloudServiceError_mediaIsCurrentlyTransfering,
    /**
     *  the cloud service error count - development use
     */
    EKandyCloudServiceError_count
};

/**
 *  Enum representing the thumbnail size
 */
typedef NS_ENUM(NSInteger, EKandyThumbnailSize)
{
    /**
     *  small sized thumbnail : 50X50
     */
    EKandyThumbnailSize_small,
    /**
     *  medium sized thumbnail : 250X250
     */
    EKandyThumbnailSize_medium,
    /**
     *  large sized thumbnail : 500X500
     */
    EKandyThumbnailSize_large
};
#endif
