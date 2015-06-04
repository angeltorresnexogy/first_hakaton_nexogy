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
 * @brief enum class for Camera Modes
 *
 * - CAMERA_ORIENTATION_USES_NONE,
 * - CAMERA_ORIENTATION_USES_DEVICE,
 * - CAMERA_ORIENTATION_USES_STATUS_BAR
 *
 * @since 2.0.0
 */

#ifndef MobileSDK_CameraModes_h
#define MobileSDK_CameraModes_h

typedef enum CameraOrientationMode{
    CAMERA_ORIENTATION_USES_NONE,
    CAMERA_ORIENTATION_USES_DEVICE,
    CAMERA_ORIENTATION_USES_STATUS_BAR
} CameraOrientationMode;

#endif
