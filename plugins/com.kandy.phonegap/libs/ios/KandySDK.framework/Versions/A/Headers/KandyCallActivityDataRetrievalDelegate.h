//
//  KandyCallActivityDataRetrievalDelegate.h
//  Fring
//
//  Created by Yehonatan Yochpaz on 8/12/14.
//  Copyright (c) 2015 GENBAND-fring. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KandyCallServiceEnums.h"
#import "KandyCallActivityRecord.h"

@protocol KandyCallActivityDataRetrievalDelegate <NSObject>
/**
 *  Create activity record for the current instance
 *
 *  @return The activityRecord of the current instance
 */
-(KandyCallActivityRecord*) createActivityRecord;
@end
