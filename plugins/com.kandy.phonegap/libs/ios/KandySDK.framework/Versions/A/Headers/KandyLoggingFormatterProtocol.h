//
//  KandyLoggingFormatterProtocol.h
//  KandySDK
//
//  Created by Tamir Maoz on 10/20/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef KandySDK_KandyLoggingFormatterProtocol_h
#define KandySDK_KandyLoggingFormatterProtocol_h

#import "KandyLoggingEnums.h"

/**
 *  This class is responsible for the way that the logs are printed
 */
@protocol KandyLoggingFormatterProtocol <NSObject>

/**
 *  Formatting method to recieve the parameters and return formatted string
 *
 *  @param date      log record date
 *  @param thread    log record thread
 *  @param level     log record level
 *  @param file      log record file name
 *  @param line      log record line number
 *  @param method    log record method name
 *  @param logString log record text
 *
 *  @return a formatted string containing relevant information
 */
-(NSString*) formattedLogStringWithDate:(NSDate*)date andThread:(NSString*)thread andLevel:(EKandyLogLevel)level andFile:(NSString*)file andLine:(int)line andMethod:(NSString*)method andLogString:(NSString*)logString;

@end

#endif
