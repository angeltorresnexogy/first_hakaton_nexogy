//
//  KandyRecord.h
//  Fring
//
//  Created by Yehonatan Yochpaz on 8/11/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>

//#define LOCAL_DOMAIN @"local"

typedef NS_ENUM(NSInteger, EKandyRecordAssociationType) {
    /**
     *  This Kandy record is assocaited only to the device (can only be made with native operations)
     */
    EKandyRecordAssociationType_local = 0,
    /**
     *  This Kandy record is associated to the cloud (you can use the cloud operations for it)
     */
    EKandyRecordAssociationType_community = 1,
};

typedef NS_ENUM(NSInteger, EKandyRecordType) {
    /**
     *  This Kandy record refer to details of a contact
     */
    EKandyRecordType_contact = 0,
    /**
     *  This Kandy record referes to details of a group
     */
    EKandyRecordType_group = 1,
};

@interface KandyRecord : NSObject <NSCopying>

/**
 *  The full URI that represents this record in the server
 */
@property(readonly) NSString * uri;
/**
 *  The username to include in this address.
 */
@property(readonly) NSString * userName;
/**
 *  The network domain to include in this address.
 */
@property(readonly) NSString * domain;
/**
 *  The representation of the kandyRecord
 */
@property(readonly) EKandyRecordType type;
/**
 *  The association of the Kandy record
 */
@property(readonly) EKandyRecordAssociationType associationType;

/**
 *  Constructor method for KandyRecord (Default properties - contact, community)
 *
 *  @param userName The representation of the record in the server
 *  @param domain   The domain in the server that the user relevant to
 *
 *  @return KandyRecord instance
 */
- (id) initWithUsername:(NSString*)userName withDomain:(NSString*)domain;

/**
 *  Constructor method for KandyRecord (Default properties - contact, community)
 *
 *  @param URI The full representation of the record in the server
 *
 *  @return KandyRecord instance
 */
- (id) initWithURI:(NSString*)uri;
/**
 *  Constructor method for KandyRecord (Default properties - community)
 *
 *  @param uri  full representation of the record in the server
 *  @param type Type of the kandyRecord
 *
 *  @return KandyRecord instance
 */
- (id) initWithURI:(NSString *)uri type:(EKandyRecordType)type;
/**
 *  Constructor method for KandyRecord
 *
 *  @param URI The full representation of the record in the server
 *
 *  @return KandyRecord instance
 */
- (id) initWithURI:(NSString*)uri type:(EKandyRecordType)type associationType:(EKandyRecordAssociationType)associationType;
/**
 *  Constructor method for KandyRecord (Default properties - community)
 *
 *  @param userName The representation of the record in the server
 *  @param domain   The domain in the server that the user is relevant to
 *  @param type     Type of the kandyRecord
 *
 *  @return KandyRecord instance
 */
-(id) initWithUsername:(NSString*)userName domain:(NSString*)domain type:(EKandyRecordType)type;

/**
 *  Constructor method for KandyRecord
 *
 *  @param userName The representation of the record in the server
 *  @param domain   The domain in the server that the user relevant to
 *
 *  @return KandyRecord instance
 */
- (id) initWithUsername:(NSString*)userName domain:(NSString*)domain type:(EKandyRecordType)type associationType:(EKandyRecordAssociationType)associationType;

@end
