//
//  KandyContactProtocol.h
//  KandySDK
//
//  Created by Omer Shaked on 12/3/14.
//  Copyright (c) 2014 genband. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  The Contact fields keys to the dataByType dictionary in <KandyContactProtocol>
 */
/**
 *  Contact first name
 *  The value will be NSString
 */
#define kKandyContactFirstNameKey @"firstName"
/**
 *  Contact middle name
 *  The value will be NSString
 */
#define kKandyContactMiddleNameKey @"middleName"
/**
 *  Contact last name
 *  The value will be NSString
 */
#define kKandyContactLastNameKey @"lastName"
/**
 *  Contact company
 *  The value will be NSString
 */
#define kKandyContactCompanyKey @"company"
/**
 *  Contact photo
 *  The value will be UIImage
 */
#define kKandyContactPhotoKey @"photo"
/**
 *  Contact thumbnail
 *  The value will be UIImage
 */
#define kKandyContactThumbnailKey @"thumbnail"
/**
 *  ID of record in iOS address book
 *  The value will be NSNumber
 */
#define kKandyContactRecordIDKey @"recordID"
/**
 *  Contact creation date
 *  The value will be NSDate
 */
#define kKandyContactCreationDateKey @"creationDate"
/**
 *  Contact modification date
 *  The value will be NSDate
 */
#define kKandyContactModificationDateKey @"modificationDate"
/**
 *  Contact note
 *  The value will be NSString
 */
#define kKandyContactNoteKey @"note"

@class KandyRecord;

/**
 * This protocol handles the contact protocol
 */
@protocol KandyContactProtocol <NSObject>


/**
 *  Represents an identifier that is recognized by the server. For example: for making calls.
 */
@property (nonatomic, readonly) KandyRecord * serverIdentifier;

/**
 *  Kandy contact display name
 */
@property (nonatomic, readonly) NSString* displayName;

/**
 *  Array of phones. Objects in array of <KandyPhoneContactRecordProtocol>.
 */
@property (nonatomic, readonly) NSArray* phones;

/**
 *  Array of emails. Objects in array of <KandyEmailContactRecordProtocol>.
 */
@property (nonatomic, readonly) NSArray* emails;

/**
 *  Array of addresses. Objects in array of <KandyAddressContactRecordProtocol>.
 */
@property (nonatomic, readonly) NSArray* addresses;

/**
 *  Array of social profiles. Objects in array of <KandySocialProfileContactRecordProtocol>.
 */
@property (nonatomic, readonly) NSArray* socialProfiles;

/**
 *  Dictionary that contains additional data.
 *  Refer to KandyAddressServiceEnums.h for a list of possible keys and their value type
 */
@property (nonatomic, readonly) NSDictionary* dataByType;

@end
