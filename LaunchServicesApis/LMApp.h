//
//  LMApp.h
//  WatchSpringboard
//
//  Created by Denzel Anderson on 15-05-16.
//  Copyright (c) 2016 SmartAppleTech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LMApp : NSObject

@property (nonatomic, readonly) NSString* bundleIdentifier;
@property (nonatomic, readonly) NSString* name;
@property (nonatomic, readonly) UIImage* icon;

@property (nonatomic, readonly) BOOL isHiddenApp;

+ (instancetype)appWithPrivateProxy:(id)privateProxy;
+ (instancetype)appWithBundleIdentifier:(NSString*)bundleIdentifier;

@end
