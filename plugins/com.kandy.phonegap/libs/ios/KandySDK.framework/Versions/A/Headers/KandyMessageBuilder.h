//
//  KandyMessageBuilder.h
//  KandySDK
//
//  Created by Tamir Maoz on 12/22/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "KandyTextItemProtocol.h"
#import "KandyImageItemProtocol.h"
#import "KandyVideoItemProtocol.h"
#import "KandyAudioItemProtocol.h"
#import "KandyContactItemProtocol.h"
#import "KandyLocationItemProtocol.h"

@interface KandyMessageBuilder : NSObject

/**
 *  Creates and returns an object conforms to protocol KandyTextItemProtocol
 *
 *  @param text       the text
 *
 *  @return an object conforms to protocol KandyTextItemProtocol
 */
-(id<KandyTextItemProtocol>)createTextItem:(NSString*)text;
/**
 *  Creates and returns an object conforms to protocol KandyImageItemProtocol
 *
 *  @param imagePath     absolute path to the image
 *  @param text          the text (optional)
 *
 *  @return an object conforms to protocol KandyTextItemProtocol
 */
-(id<KandyImageItemProtocol>)createImageItem:(NSString*)imagePath text:(NSString*)text;
/**
 *  Creates and returns an object conforms to protocol KandyVideoItemProtocol
 *
 *  @param imagePath     absolute path to the video
 *  @param text          the text (optional)
 *
 *  @return an object conforms to protocol KandyVideoItemProtocol
 */
-(id<KandyVideoItemProtocol>)createVideoItem:(NSString*)videoPath text:(NSString*)text;
/**
 *  Creates and returns an object conforms to protocol KandyAudioItemProtocol
 *
 *  @param imagePath     absolute path to the audio
 *  @param text          the text (optional)
 *
 *  @return an object conforms to protocol KandyAudioItemProtocol
 */
-(id<KandyAudioItemProtocol>)createAudioItem:(NSString*)audioPath text:(NSString*)text;
/**
 *  Creates and returns an object conforms to protocol KandyContactItemProtocol
 *
 *  @param imagePath     absolute path to the contact VCard
 *  @param text          the text (optional)
 *
 *  @return an object conforms to protocol KandyContactItemProtocol
 */
-(id<KandyContactItemProtocol>)createContactItem:(NSString*)contactVCardPath text:(NSString*)text;
/**
 *  Creates and returns an object conforms to protocol KandyLocationItemProtocol
 *
 *  @param location CLLocation    the location
 *  @param text                   the text (optional)
 *
 *  @return an object conforms to protocol KandyLocationItemProtocol
 */
-(id<KandyLocationItemProtocol>)createLocationItem:(CLLocation*)location text:(NSString*)text;

@end
