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

@class MobileError;
@protocol CallDelegate;
@protocol IncomingCallDelegate;
@protocol OutgoingCallDelegate;

/**
 * @brief Represents events of Call
 * This protocol must be conformed by classes which uses Callervice
 * @since 2.0.0
 */
@protocol CallApplicationDelegate <NSObject>

/**
 * This method is invoked when there is an IncomingCall
 * Used for informing the application about new call.
 * @param call reference of incoming call
 * @since 2.0.0
 */
- (void) incomingCall:(id<IncomingCallDelegate>) call;

/**
 * This is the call back method for any call state change on the CallDelegate.
 * Application shall call CallDelegate.getCallState to check it’s current call state.
 * @param call which of state changed
 * @see [CallDelegate getCallState]
 * @since 2.0.0
 */
- (void) callStatusChanged:(id<CallDelegate>)call;

/**
 * This is the call back method for any call's media state change on the CallDelegate.
 * Application shall call CallDelegate.getMediaState to check it’s current call's media state.
 * @param call which of media state changed
 * @see [CallDelegate getMediaState]
 * @since 2.0.0
 */
- (void) mediaStatusChanged:(id<CallDelegate>)call;

/**
 * This method is invoked when establishCall has succeeded.
 * @param call performed establishment successfully
 * @see [OutgoingCallDelegate establishCall:]
 * @since 2.0.0
 */
- (void) establishCallSucceeded:(id<OutgoingCallDelegate>) call;

/**
 * This method is invoked when establishCall has failed.
 * @param call couldn't made outgoing call establisment
 * @param error definition of failure
 * @see [OutgoingCallDelegate establishCall:]
 * @since 2.0.0
 */
- (void) establishCallFailed:(id<OutgoingCallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to accept an incoming call has succeeded.
 * @param call performed accepting successfully
 * @see [IncomingCallDelegate acceptCall:]
 * @since 2.0.0
 */
- (void) acceptCallSucceed:(id<IncomingCallDelegate>) call;

/**
 * Method invoked when attempt to accept an incoming call has failed.
 * @param call couldn't be accepted
 * @param error definition of failure
 * @see [IncomingCallDelegate acceptCall:]
 * @since 2.0.0
 */
- (void) acceptCallFailed:(id<IncomingCallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to reject an incoming call has succeeded.
 * @param call performed reject successfully
 * @see [IncomingCallDelegate rejectCall]
 * @since 2.0.0
 */
- (void) rejectCallSuccedded:(id<IncomingCallDelegate>) call;

/**
 * Method invoked when attempt to reject an incoming call has failed.
 * @param call that couldn't be rejected
 * @param error definition of failure
 * @see IncomingCallDelegate rejectCall method
 * @since 2.0.0
 */
- (void) rejectCallFailed:(id<IncomingCallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to ignore a call has succeeded.
 * @param call performed ignore successfully
 * @see [IncomingCallDelegate ignoreCall]
 * @since 2.0.0
 */
- (void) ignoreSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to ignore a call has failed.
 * @param call couldn't be ignored
 * @param error definition of failure
 * @see [IncomingCallDelegate ignoreCall]
 * @since 2.0.0
 */
- (void) ignoreFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * This method is invoked when endCall has succeeded.
 * This is the call back method for the endCall request
 * @param call performed end successfully
 * @see [CallDelegate endCall]
 * @since 2.0.0
 */
- (void) endCallSucceeded:(id<CallDelegate>) call;

/**
 * This method is invoked when endCall has failed.
 * This is the call back method for the endCall request
 * @param call coudn't be ended
 * @param error definition of failure
 * @see [CallDelegate endCall]
 * @since 2.0.0
 */
- (void) endCallFailed:(id<CallDelegate>)call withError:(MobileError *)error ;

/**
 * Method invoked when attempt to mute a call has succeeded.
 * @param call performed mute successfully
 * @see [CallDelegate mute]
 * @since 2.0.0
 */
- (void) muteCallSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to mute a call has failed.
 * @param call coudn't be muted
 * @param error definition of failure
 * @see [CallDelegate mute]
 * @since 2.0.0
 */
- (void) muteCallFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to unmute a call has succeeded.
 * @param call performed unmute successfully
 * @see [CallDelegate unMute]
 * @since 2.0.0
 */
- (void) unMuteCallSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to unmute a call has failed.
 * @param call couldn't be unmuted
 * @param error definition of failure
 * @see [CallDelegate unMute]
 * @since 2.0.0
 */
- (void) unMuteCallFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to start video on a call has succeeded.
 * @param call performed start video start successfully
 * @see [CallDelegate videoStart]
 * @since 2.0.0
 */
- (void) videoStartSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to start video on a call has failed.
 * @param call coudn't start video
 * @param error definition of failure
 * @see [CallDelegate videoStart]
 * @since 2.0.0
 */
- (void) videoStartFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to stop video on a call has succeeded.
 * @param call performed stop video successfully
 * @see [CallDelegate videoStop]
 * @since 2.0.0
 */
- (void) videoStopSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to stop video on a call has failed.
 * @param call coudn't stop video
 * @param error definition of failure
 * @see [CallDelegate videoStop]
 * @since 2.0.0
 */
- (void) videoStopFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * Method invoked when attempt to hold a call has succeeded.
 * @param call performed hold successfully
 * @see [CallDelegate holdCall]
 * @since 2.0.0
 */
- (void) holdCallSucceed:(id<CallDelegate>)call;

/**
 * Method invoked when attempt to hold a call has failed.
 * @param call couldn't be holded
 * @param error definition of failure
 * @see [CallDelegate holdCall]
 * @since 2.0.0
 */
- (void) holdCallFailed:(id<CallDelegate>)call withError:(MobileError *)error;

/**
 * Method invoked when attempt to unHold a call has succeded.
 * @param call performed unhold successfully
 * @see [CallDelegate unHoldCall]
 * @since 2.0.0
 */
- (void) unHoldCallSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to unHold a call has failed.
 * @param call couldn't be unholded
 * @param error definition of failure
 * @see [CallDelegate unHoldCall]
 * @since 2.0.0
 */
- (void) unHoldCallFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * Method is invoked when attemptto join call with another call has succeeded.
 * @param call new created call after join
 * @see [CallDelegate join:withLocalView:andRemoteView:]
 * @since 2.0.0
 */
- (void) joinSucceeded:(id<CallDelegate>) call;

/**
 * Method is invoked when attemptto join call with another call has succeeded.
 * @param call coudn't made the join
 * @param error definition of failure
 * @see [CallDelegate join:withLocalView:andRemoteView:]
 * @since 2.0.0
 */
- (void) joinFailed:(id<CallDelegate>)call withError:(MobileError *)error ;

/**
 * Method invoked when attempt to transfer a call has succeeded.
 * @param call performed transfer call successfully
 * @see [CallDelegate transferCall:]
 * @since 2.0.0
 */
- (void) transferCallSucceed:(id<CallDelegate>) call;

/**
 * Method invoked when attempt to transfer a call has failed.
 * @param call couldn't made transferring
 * @param error reason of the failure
 * @see [CallDelegate transferCall:]
 * @since 2.0.0
 */
- (void) transferCallFailed:(id<CallDelegate>) call withError:(MobileError *)error;

/**
 * This method is invoked when the CallDelegate changes its progress status.
 * In the release, this method is invoked while establishing first party Call.
 * @param call CallDelegate
 * @since 2.0.0
 */
- (void) notifyCallProgressChange:(id<CallDelegate>)call;

@optional

/**
 * This method is invoked when the call ends and the call report is generated.
 * This method is an optional method.
 * @param report call report dictionary
 * @since 2.0.0
 */
- (void) callReportReceived:(NSDictionary *)report;

@end
