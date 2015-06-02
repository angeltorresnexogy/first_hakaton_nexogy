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
 * @brief Utility class for LogType.
 *
 * @since 2.0.0
 **/

/**
 * Enum values for LogLevel
 *
 * ERROR --> events that will presumably lead the application to abort
 * WARNING --> potentially harmful situations
 * INFO --> informational messages that highlight the progress of the application at coarse-grained level
 * TRACE --> finer-grained informational events
 * VERBOSE --> method start and finishes
 *
 *
 * @since 2.0.0
 **/
typedef enum LogLevel
{
    ERROR,
    WARNING,
    INFO,
    TRACE,
    VERBOSE
} LogLevel;
