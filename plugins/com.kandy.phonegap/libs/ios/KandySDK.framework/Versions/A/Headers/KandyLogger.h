//
//  KandyLogger.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/21/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyLoggerProtocol.h"

/**
 *  Default logger - prints no NSLog
 */
@interface KandyLogger : NSObject <KandyLoggerProtocol>

/**
 *  Initialization method for the logger
 *
 *  @param formatter the formatter to use inorder to format the log texts
 *
 *  @return initialized KandyLogger object conforms to KandyLoggerProtocol
 */
-(id)initWithFormatter:(id<KandyLoggingFormatterProtocol>)formatter;

@end
