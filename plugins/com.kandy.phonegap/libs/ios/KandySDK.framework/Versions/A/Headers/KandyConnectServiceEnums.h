//
//  KandyConnectServiceEnums.h
//  Fring
//
//  Created by Yaron Jackoby on 7/28/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#ifndef KandyConnectServiceEnums_h
#define KandyConnectServiceEnums_h
static NSString * const KandyConnectServiceErrorDomain = @"connectServiceErrorDomain";

typedef NS_ENUM(NSUInteger, EKandyConnectionState)
{
    EKandyConnectionState_disconnecting, /** unregistering from the service (logging out)*/
    EKandyConnectionState_disconnected, /** not registered (loged out)*/
    EKandyConnectionState_connecting, /** register to the service (logging in)*/
    EKandyConnectionState_connected, /** registered in the system (logged in)*/
};

typedef NS_ENUM(NSUInteger, EKandyConnectServiceError)
{
    //Server errors
    EKandyConnectServiceError_noAvailableServer = 1000,
    EKandyConnectServiceError_authenticationFailed, /** wrong credentials */
    EKandyConnectServiceError_connectionDropped, /** The connection dropped */
    EKandyConnectServiceError_serverInitialConnectionFailed, /** Didn't succeed to start the initial connection with the server */
    EKandyConnectServiceError_userNotRegistered, /** user is already not registered */
    EKandyConnectServiceError_serverConfigurationMissing, /**missing config to connect the server - usually, IP + host**/
    EKandyConnectServiceError_count
};

#endif //KandyConnectServiceEnums_h
