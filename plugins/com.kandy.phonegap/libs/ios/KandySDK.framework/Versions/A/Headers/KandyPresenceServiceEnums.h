//
//  KandyPresenceServiceEnums.h
//  Fring
//
//  Created by Guy Lachish on 27/07/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef KandyPresenceServiceEnums_h
#define KandyPresenceServiceEnums_h

static NSString * const KandyPresenceServiceErrorDomain = @"PresenceServiceErrorDomain";

typedef NS_ENUM(NSUInteger, EKandyPresenceServiceError) {
    /**
     Request has completed successfully
     */
    EKandyPresenceServiceError_none = 0,
    /**
     Not a valid input
     */
    EKandyPresenceServiceError_inputNotValid,
    /**
     Service is not available
     */
    EKandyPresenceServiceError_serviceNotAvailable,
    /**
     Total number of values
     */
    EKandyPresenceServiceError_count,
};

/**
 Presence activity type
 */
typedef NS_ENUM(NSUInteger, EKandyPresenceType) {
    /**
     User is away
     */
    EKandyPresenceType_away,
    /**
     User is idle
     */
    EKandyPresenceType_idle,
    /**
     Other
     */
    EKandyPresenceType_other,
    /**
     Unknown type
     */
    EKandyPresenceType_unknown,
    /**
     User is out to lunch
     */
    EKandyPresenceType_outToLunch,
    /**
     User is busy
     */
    EKandyPresenceType_busy,
    /**
     User is on vacation
     */
    EKandyPresenceType_onVacation,
    /**
     User will be right back
     */
    EKandyPresenceType_beRightBack,
    /**
     User is on the phone
     */
    EKandyPresenceType_onThePhone,
    /**
     User is currently active
     */
    EKandyPresenceType_active,
    /**
     User is not active
     */
    EKandyPresenceType_inactive,
    /**
     For developing use
     */
    EKandyPresenceType_count,
};
#endif
