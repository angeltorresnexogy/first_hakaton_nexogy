//
//  KandyLocationServiceEnums.h
//  Fring
//
//  Created by Yaron Jackoby on 8/19/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef Fring_KandyLocationServiceEnums_h
#define Fring_KandyLocationServiceEnums_h

/**
 The Kandy location service error domain name
 */
static NSString * const KandyLocationServiceErrorDomain = @"LocationServiceErrorDomain";

typedef NS_ENUM(NSUInteger, EKandyLocationServiceError)
{
    /**
     Request has completed successfully
     */
    EKandyLocationServiceError_none = 0,
    EKandyLocationServiceError_countryLookupFailed, /** could not determine country */
    EKandyLocationServiceError_countryNotAllowed /** country is not allowed for registration */
};

#endif
