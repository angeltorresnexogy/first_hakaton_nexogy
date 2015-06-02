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

/**
 * @brief enum class for Error Types
 *
 * - PARTIAL_SUCCESS: Request is succeeded in partial manner
 * - ERROR_SYSTEM: System failure
 * - ERROR_INTERNAL_SERVER: Internal server error occurred
 * - ERROR_NETWORK: Network failures
 * - ERROR_SERVER: Server failures
 * - ERROR_SECURITY: Https security failure
 * - ERROR_AUTHENTICATION: Authentication failure
 * - ERROR_AUTHORIZATION: Authorization failure
 * - ERROR_PROXY: Error on defined Notification Proxy
 * - ERROR_LOCALIZATION: Localization not found or malformed
 * - ERROR_VALIDATION: Input structure is not validated
 * - ERROR_MESSAGE_PARSE: Received notification message can not be parsed
 * - ERROR_WEBRTC: Failure on WebRTC library
 * - ERROR_MICROPHONE_ACCESS: Microphone access is not available
 * - ERROR_CAMERA_ACCESS: Camera access is not available
 *
 * @since 2.0.0
 */
typedef enum  errorTypes {
    PARTIAL_SUCCESS,              // Request is succeeded in partial manner
    ERROR_SYSTEM,                 // System failure
    ERROR_INTERNAL_SERVER,        // Internal server error occurred
    ERROR_NETWORK,                // Network failures
    ERROR_SERVER,                 // Server failures
    ERROR_SECURITY,               // Https security failure
    ERROR_AUTHENTICATION,         // Authentication failure
    ERROR_AUTHORIZATION,          // Authorization failure
    ERROR_PROXY,                  // Error on defined Notification Proxy
    ERROR_LOCALIZATION,           // Localization not found or malformed
    ERROR_VALIDATION,             // Input structure is not validated
    ERROR_NULL_PARAMETER,         // Input parameter is null
    ERROR_MESSAGE_PARSE,          // Received notification message can not be parsed
    ERROR_WEBRTC,                 // Failure on WebRTC library
    ERROR_METHOD_NOT_ALLOWED,     // Method can not be performed
    ERROR_MICROPHONE_ACCESS,      // Microphone access is not available
    ERROR_CAMERA_ACCESS           // Camera access is not available
}ErrorTypes;
