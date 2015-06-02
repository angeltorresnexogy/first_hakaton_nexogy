//
//  KandyNotificationServiceEnums.h
//  KandySDK
//
//  Created by Tamir Maoz on 11/19/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef KandySDK_KandyNotificationServiceEnums_h
#define KandySDK_KandyNotificationServiceEnums_h

static NSString * const KandyNotificationServiceErrorDomain = @"NotificationServiceErrorDomain";

/**
 *  The errors that the developer can get while using the call service
 */
typedef NS_ENUM(NSInteger, EKandyNotificationServiceError) {
    /**
     *  None
     */
    EKandyNotificationServiceError_none = 0,
    /**
     *  The push format got is not supported by the SDK
     */
    EKandyNotificationServiceError_pushFormatNotSupported,
    /**
     *  For development
     */
    EKandyNotificationServiceError_count,
};

#endif
