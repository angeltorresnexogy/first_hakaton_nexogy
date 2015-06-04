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

#import <AVFoundation/AVFoundation.h>

/**
 * @brief enum class for Call States
 *
 * - CALLSTATES_INITIAL,
 * - CALLSTATES_IN_CALL,
 * - CALLSTATES_HOLDING,
 * - CALLSTATES_ON_HOLD,
 * - CALLSTATES_UNHOLDING,
 * - CALLSTATES_ON_DOUBLE_HOLD,
 * - CALLSTATES_REMOTE_HOLD,
 * - CALLSTATES_REMOTE_HOLDING,
 * - CALLSTATES_REMOTE_UNHOLDING,
 * - CALLSTATES_JOINING,
 * - CALLSTATES_ENDED,
 * - CALLSTATES_DIALING,
 * - CALLSTATES_RINGING,
 * - CALLSTATES_ANSWERING,
 * - CALLSTATES_UNKNOWN
 *
 *
 * @since 2.0.0
 */

typedef enum  CallStates {
    CALLSTATES_INITIAL                      = 1,  // Call object is initialized
    CALLSTATES_IN_CALL                      = 3,  // Call is active.
    CALLSTATES_RINGING                      = 7,  // Outgoing call is ringing
    CALLSTATES_ON_HOLD                      = 8,  // Call is held
    CALLSTATES_REMOTELY_HELD                = 9,  // Remote side is on hold
    CALLSTATES_ON_DOUBLE_HOLD               = 20, // Call is held and remote side is on hold simultaneously
    CALLSTATES_JOINING                      = 10, // Call is joining ????????
    CALLSTATES_ENDED                        = 11, // Call is ended completely
    CALLSTATES_DIALING                      = 12, // Originator is dialing a number
    CALLSTATES_ANSWERING                    = 13, // Ringing call is answering
    CALLSTATES_NOT_AVAILABLE                = 14, // Remote side is not reachably
    CALLSTATES_IGNORED                      = 15, // Ringing call is ignored, not answered
    CALLSTATES_REJECTED                     = 16, // User rejects incoming call
    CALLSTATES_DECLINED                     = 18, // Remote side rejects the offering call
    CALLSTATES_UNKNOWN                      = 19  // Unknown
}CallStates;

/**
 * @brief enum class for Audio route of a Call
 * - AR_HEADPHONE, Audio is routed to headphone of iPhones
 * - AR_BLUETOOTH, Audio is routed to a connected bluetooth device
 * - AR_SPEAKER,   Audio is routed to speaker of the iOS device
 * - AR_UNDETERMINED
 *
 * @since 2.0.0
 */
typedef enum AudioOutRoute{
    AR_HEADPHONE,
    AR_BLUETOOTH,
    AR_SPEAKER,
    AR_UNDETERMINED
} AudioOutRoute;

/**
 * @brief structure for Media state of a Call
 * localVideo, holds boolean value that if the local video is activated for sending
 * remoteVideo, holds boolean value that if the remote video is receiving
 * mute, holds boolean value that whether local audio is muted or not
 * audioRoute, active route of audio
 * captureDevicePosition, position of active capture device
 *
 * @since 2.0.0
 */
typedef struct MediaState {
    BOOL localVideo;
    BOOL remoteVideo;
    BOOL mute;
    AudioOutRoute audioRoute;
    AVCaptureDevicePosition captureDevicePosition;
}MediaState;
