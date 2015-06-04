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
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CallStates.h"

@class UriAddress;
@class VideoResolution;

/**
 * @brief Call related resources
 * @since 2.0.0
 */
@protocol CallDelegate <NSObject>

/**
 * @brief Address of the user who starts call
 * @since 2.0.0
 */
@property (strong, nonatomic) UriAddress * callerAddress;

/**
 * @brief Address of the user who is being called
 * @since 2.0.0
 */
@property (strong, nonatomic) UriAddress * calleeAddress;

/**
 * @brief Name of the user who starts call
 * @since 2.0.0
 */
@property (strong, nonatomic) NSString * callerName;

/**
 * @brief Holds video view which retrieved from local camera
 * Should be linked with GUI object which is a UIView
 * @since 2.0.0
 */
@property (strong, nonatomic) UIView * localVideoView;

/**
 * @brief Holds video view which received from remote participant of call
 * Should be linked with GUI object which is a UIView
 * @since 2.0.0
 */
@property (strong, nonatomic) UIView * remoteVideoView;

/**
 * @brief Perform end operation on the call.
 * @since 2.0.0
 */
- (void) endCall;

/**
 * @brief Puts the speaker (microphone) into (in) mute
 * @since 2.0.0
 */
- (void) mute;

/**
 * @brief Resumes the speaker
 * @since 2.0.0
 */
- (void) unMute;

/**
 * @brief Stops the video for the call
 * @since 2.0.0
 */
- (void) videoStop;

/**
 * @brief Starts the video for the call
 * @since 2.0.0
 */
- (void) videoStart;

/**
 * @brief Perform hold operation on this call
 * @since 2.0.0
 */
- (void) holdCall;

/**
 * @brief Perform un-hold (resume) operation on this call
 * @since 2.0.0
 */
- (void) unHoldCall;

/**
 * @brief Joins two calls
 * @param anotherCall second call that will be joined
 * @param localView local UIView that will be used in joined call
 * @param remoteView remote UIView that will be used in joined call
 * @since 2.0.0
 */
- (void) join: (id<CallDelegate>) anotherCall withLocalView:(UIView*) localView andRemoteView:(UIView*) remoteView;

/**
 * @brief Method used by the application to transfer this call to another endpoint.
 * @param newAddress address of the endpoint to replace this endpoint in the call
 * Offically not supported yet.
 * @since 2.0.0
 */
- (void) transferCall: (UriAddress *) newAddress;

/**
 * @brief Inserts Dual Tone Multi Frequency Signal to sending queue and returns the success
 * @param tone character value of DTMF tone. Can only be 0,1...,9,*,#,a,b,c,d,A,B,C,D;
 * @return YES if tone can be successfully inserted to queue otherwise NO
 * @since 3.0.1
 */
- (BOOL) sendDTMF:(char)tone;

/**
 * @brief Switches the video for this call to the device of specified position
 * @param position AVCaptureDevicePosition of the camera which will be used
 * @since 2.0.0
 */
- (void) switchCaptureDeviceToPosition:(AVCaptureDevicePosition)position;

/**
 * @brief This method returns the id of the call
 * @return callId unique identifier of the call
 * @since 2.0.0
 */
- (NSString *) getCallId;

/**
 * @brief Retrieve state of the call.
 * @return CallStates state of the call
 * @since 2.0.0
*/
- (CallStates) getCallState;

/**
 * @brief Retrieve media state of the call.
 * @return MediaState state of the call's media
 * @since 2.0.0
 */
- (MediaState) getMediaState;

/*
 * @brief Switches the video for this call to the device of specified position
 *
 * @param newRoute new route of the audio
 * @since 2.0.0
 */
- (void) switchAudioRouteTo:(AudioOutRoute) newRoute;

/**
 * @brief Tests if the call is in hold state or not
 * @return YES if the call is in hold state otherwise returns NO
 * @since 2.0.0
 */
- (BOOL) isHold;

/**
 * @brief Tests if video streaming is available or not
 * @return YES if video streaming is available otherwise returns NO
 * @since 2.0.0
 */
- (BOOL) canReceiveVideo;

/**
 * @brief Tests if the call is currently receiving video or not
 * @return YES if the call is currently receiving video stream otherwise returns NO
 * @since 2.0.0
 */
- (BOOL) isReceivingVideo;

/**
 * @brief Tests if the call is currently sending video stream or not
 * @return YES if the call is currently sending video stream otherwise returns NO
 * @since 2.0.0
 */
- (BOOL) isSendingVideo;

/**
 * @brief Tests if the camera is available or not
 * @return YES if the camera is available otherwise returns NO
 * @since 2.0.0
 */
- (BOOL) canSendVideo;

/**
 * @brief Retrives resolution of video in the call
 * @return video resolution of call
 * @since 2.0.0
 */
- (VideoResolution *) getVideoResolution;

/**
 * @brief Returns supported Cam alternatives (for example: Front or Back)
 * @return CameraAlternatives NSMutableArray
 * Offically not supported yet.
 *
 * @since 2.0.0
 */
- (NSMutableArray *) getCamAlternatives;

/**
 * @brief Set one of the Cam alternatives (for example: Front or Back)
 * If it is not defined default cam is the front cam.
 *
 * @param CameraId identifier of camera
 * Offically not supported yet.
 * @since 2.0.0
 */
- (void) setCamAlternatives :(NSString *)CameraId;

/**
 * @brief Set current active camera.
 *
 * @return AVCaptureDevicePosition position of the current active camera
 * @since 2.0.0
 */
- (AVCaptureDevicePosition) getActiveCamera;

@end
