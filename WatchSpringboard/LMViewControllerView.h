//
//  LMViewControllerView.h
//  WatchSpringboard
//
//  Created by Denzel Anderson on 15-05-16.
//  Copyright (c) 2016 SmartAppleTech. All rights reserved
//

#import <UIKit/UIKit.h>

@class LMSpringboardItemView;
@class LMSpringboardView;

@interface LMViewControllerView : UIView

@property (readonly) LMSpringboardView* springboard;
@property (readonly) UIView* appView;
@property (readonly) UIButton* respringButton;
@property (readonly) BOOL isAppLaunched;

- (void)launchAppItem:(LMSpringboardItemView*)item;
- (void)quitApp;

@end
