/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 3.0.3.2
 *
 */

#import <Foundation/Foundation.h>

/**
 * @brief enum class for AddressBook Search types. see also REST API document page79
 *
 * - SEARCHTYPE_FIRSTNAME
 * - SEARCHTYPE_LASTNAME
 * - SEARCHTYPE_NAME
 * - SEARCHTYPE_PHONENUMBER
 * - SEARCHTYPE_USERNAME
 *
 * @since 2.0.0
 **/
typedef enum  AddressBookSearchTypes {
    SEARCHTYPE_FIRSTNAME        = 1,
    SEARCHTYPE_LASTNAME         = 2,
    SEARCHTYPE_NAME             = 3,
    SEARCHTYPE_PHONENUMBER      = 4,
    SEARCHTYPE_USERNAME         = 5
}AddressBookSearchTypes;

/**
 * @brief This class defines event types of AddressBook
 * @since 2.0.0
 */
@interface AddressBookSearchType : NSObject

/**
 * This methods converts AddressBookSearchTypes to NSString
 * @param type AddressBookSearchTypes
 * @return NSString
 * @since 2.0.0
 */
+(NSString *)getAddressBookSearchType:(AddressBookSearchTypes)type;

@end
