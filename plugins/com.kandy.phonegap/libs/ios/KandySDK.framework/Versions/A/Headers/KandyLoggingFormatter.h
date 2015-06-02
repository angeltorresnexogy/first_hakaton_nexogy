//
//  KandyLoggingFormatter.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/21/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyLoggingFormatterProtocol.h"


/**
 *  Default formatter: format: level thread   date   file:line   method   logString
 */
@interface KandyLoggingFormatter : NSObject <KandyLoggingFormatterProtocol>

@end
