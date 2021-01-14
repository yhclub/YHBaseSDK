//
//  UINavigationController+YHFDFullscreenPopGesture.h
//  YHBaseSDK
//
//  Created by Jagtu on 2018/04/26.
//  Modify by Jagtu on 2021/01/14.
//  Copyright © 2018年 YH. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface UINavigationController (YHFDFullscreenPopGesture)

/// The gesture recognizer that actually handles interactive pop.
@property (nonatomic, strong, readonly) UIPanGestureRecognizer *yhfd_fullscreenPopGestureRecognizer;

/// A view controller is able to control navigation bar's appearance by itself,
/// rather than a global way, checking "yhfd_prefersNavigationBarHidden" property.
/// Default to YES, disable it if you don't want so.
@property (nonatomic, assign) BOOL yhfd_viewControllerBasedNavigationBarAppearanceEnabled;

@end



/// Allows any view controller to disable interactive pop gesture, which might
/// be necessary when the view controller itself handles pan gesture in some
/// cases.
@interface UIViewController (YHFDFullscreenPopGesture)

/// Whether the interactive pop gesture is disabled when contained in a navigation
/// stack.
@property (nonatomic, assign) BOOL yhfd_interactivePopDisabled;

/// Indicate this view controller prefers its navigation bar hidden or not,
/// checked when view controller based navigation bar's appearance is enabled.
/// Default to NO, bars are more likely to show.
@property (nonatomic, assign) BOOL yhfd_prefersNavigationBarHidden;

/// Max allowed initial distance to left edge when you begin the interactive pop
/// gesture. 0 by default, which means it will ignore this limit.
@property (nonatomic, assign) CGFloat yhfd_interactivePopMaxAllowedInitialDistanceToLeftEdge;

@end
