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
#import <AVFoundation/AVFoundation.h>
#import "LoggingInterface.h"
#import "CameraModes.h"
#import "ConnectionType.h"
#import "VideoResolution.h"
#import "ICEServers.h"

/**
 * @brief enum class for supported Audio codec types for a call
 *
 * @since 2.0.0
 */
typedef enum AUDIO_CODEC_TYPE{
    AC_PCMA,
    AC_PCMU,
    AC_OPUS,
    AC_ISAC,
    AC_NOT_SPECIFIED
} AUDIO_CODEC_TYPE;

/**
 * @brief Utility class for configuration management.
 * @since 2.0.0
 **/
@interface Configuration : NSObject

/**
 * Name value of the user.
 * @since 2.0.0
 *
 */
@property (nonatomic, strong) NSString *userName;

/**
 * Password value of the user.
 * @since 2.0.0
 *
 */
@property (nonatomic, strong) NSString *password;

/**
 * server port information of the baseUrl used for REST request.
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) NSString *restServerPort;

/**
 * server ip information of the baseUrl used for REST request.
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) NSString *restServerIP;

/**
 * port information used in web socket connection creation.
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) NSString *webSocketServerPort;

/**
 * ip information used in web socket connection creation.
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) NSString *webSocketServerIP;

/**
 * Web socket protocol selection.
 *
 * @since 3.0.3
 */
@property (nonatomic) BOOL securedWSProtocol;

/**
 * Web socket Self signed certificate file data. Can be fetched from a file or string
@code
 NSString *cerPath = [[NSBundle mainBundle] pathForResource:@"myOwnCertificate" ofType:@"der"];
 [[Configuration getInstance] setWebSocketCertificate:[[NSData alloc] initWithContentsOfFile:cerPath]];
@endcode
 *
 * @since 3.0.3
 */
@property (nonatomic) NSData* webSocketCertificate;


/**
 * LoggingInterface reference used by LogManager.
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) LoggingInterface* logger;

/**
 * Is Request Protocol http.
 * Default return value is FALSE (meaning use HTTPS)
 *
 * @since 2.0.0
 */
@property (nonatomic)BOOL requestProtocolHttp;

/**
 * Is DTLS enabled.
 * Default value is FALSE
 *
 * @since 2.0.0
 */
@property (nonatomic)BOOL dtls;

/**
 * ICEServers stores ICE servers array (including stun & turn).
 *
 * @since 3.0.3
 */
@property (nonatomic, strong) ICEServers *ICEServers;

/**
 * Default username of ICEServers.
 *
 * @since 3.0.3
 */
@property (nonatomic, strong) NSString *defaultICEUsername;

/**
 * Default password of ICEServers.
 *
 * @since 3.0.3
 */
@property (nonatomic, strong) NSString *defaultICEPassword;

/**
 * Video resolution.
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) VideoResolution *videoResolution;

/**
 * Subscription expire time
 *
 * @since 2.0.0
 */
@property (nonatomic, strong) NSNumber *subscriptionExpires;

/**
 * Subscription localization parameter
 *
 * @since 2.0.0
 */
@property (nonatomic, strong, readonly) NSString *subscriptionLocalization;

/**
 * Type of connection to be used for notification mechanism.
 *
 * @since 2.0.0
 */
@property (nonatomic) TypeOfConnection connectionType;

/**
 * Manages app state changes (ex: entering background or foreground)
 * This is an instance of ApplicationStateChangesHandler
 *
 * @see ApplicationStateChangesHandler
 * @since 2.0.0
 */
@property(nonatomic, strong) id stateChangesHandler;

/**
 * Server certificate to be used in HTTPS connection
 * Certificate must be .DER format
 *
 * @since 2.0.0
 */
@property(nonatomic, strong) NSString *serverCertificate;

/**
 * Sends audit message to call control.
 *
 * @since 2.0.0
 */
@property(nonatomic) BOOL  auditEnable;

/**
 * Sending audit message frequency (seconds)
 *
 * @since 2.0.0
 */
@property(nonatomic) NSInteger auditFrequency;

/**
 * subscriptionID to use unregisteration
 *
 * @since 2.0.0
 */
@property(nonatomic, strong) NSString *subscriptionID;

/**
 * subscriptionID to use unregisteration
 *
 * @since 2.0.0
 */
@property(nonatomic) AUDIO_CODEC_TYPE preferedAudioCodec;

/**
 * Sets the camera orientation type of video capturer. 
 * Video orientation can be changed according to application status bar orientation
 * or device orientation. Camera can be bind to this notifications or not to be bind
 * anything.
 *
 * @since 2.0.0
 */
@property(nonatomic) CameraOrientationMode orientationMode;


/**
 * Sets the default camera position mode
 * @see AVCaptureDevicePosition
 *
 * @since 3.0.1
 */
@property (nonatomic) AVCaptureDevicePosition cameraPosition;


/**
 * Sets duration value of DTMF tones im ms
 * Default value is 400 and can be between 70 and 6000
 *
 * @since 3.0.1
 */
@property (nonatomic) NSUInteger dtmfToneDuration;

/**
 * Sets log level of Mobile SDK
 *
 * @see LogLevel
 *
 * @since 3.0.2
 */
@property (nonatomic) LogLevel logLevel;

/**
 * This method returns (creates if necessary) singleton instance of Configuration class
 *
 * @return shared Configuration instance
 *
 * @since 2.0.0
 */
+ (id)getInstance;

/**
 * This method checks that is there any TURN server in the ICEServer list has empty username and password
 *
 * @return YES If there is TURN server in the ICEServer list has empty username and password
 *
 * @since 3.0.3
 */
- (BOOL)requestTurnCredential;

@end
