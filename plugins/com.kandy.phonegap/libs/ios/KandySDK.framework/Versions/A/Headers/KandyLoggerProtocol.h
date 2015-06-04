//
//  KandyLoggerProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/20/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef KandySDK_KandyLoggerProtocol_h
#define KandySDK_KandyLoggerProtocol_h

#import "KandyLoggingFormatterProtocol.h"
/**
 *  This class incorporates the Kandy SDK logs to provide the developer the resposibilty of printing them the required way
 */
@protocol KandyLoggerProtocol <NSObject>

/**
 *  Prints to log
 *
 *  @param level     the log level
 *  @param logString the string to print
 */
-(void) logWithLevel:(EKandyLogLevel)level andLogString:(NSString*)logString;

/**
 *  Logging formatter to determine the log printing layout
 */
@property (nonatomic, strong) id<KandyLoggingFormatterProtocol> loggingFormatter;

@end

#endif
