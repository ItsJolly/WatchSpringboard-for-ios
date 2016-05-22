//
//  LMAppController.h
//  WatchSpringboard
//
//  Created by Denzel Anderson on 15-05-16.
//  Copyright (c) 2016 SmartAppleTech. All rights reserved
//

#import <Foundation/Foundation.h>
#import "LMApp.h"

@interface LMAppController : NSObject

@property (nonatomic, readonly) NSArray* installedApplications;

- (BOOL)openAppWithBundleIdentifier:(NSString*)bundleIdentifier;

+ (instancetype)sharedInstance;

@end
