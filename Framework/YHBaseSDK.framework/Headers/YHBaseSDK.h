//
//  YHBaseSDK.h
//  YHBaseSDK
//
//  Created by zxl on 2018/1/26.
//  Modify by Jagtu on 2018/11/27.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for YHBaseSDK.
FOUNDATION_EXPORT double YHBaseSDKVersionNumber;

//! Project version string for YHBaseSDK.
FOUNDATION_EXPORT const unsigned char YHBaseSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YHBaseSDK/YHBaseSDK.h>
//  Version 1.0.*  hide FDFullscreenPopGesture
//  Version 1.1.*  import FDFullscreenPopGesture
//  Version 1.1.5  适配iPhoneX系列
//  V1.1.6 addContraint->addConstraints

#import <YHBaseSDK/YHDeviceHeader.h>
#import <YHBaseSDK/YHGlobalHeader.h>

#import <YHBaseSDK/YHDataProtocol.h>
#import <YHBaseSDK/YHPresenterProtocol.h>
#import <YHBaseSDK/YHViewProtocol.h>

#import <YHBaseSDK/YHBaseNavController.h>
#import <YHBaseSDK/YHBaseView.h>
#import <YHBaseSDK/YHNavView.h>

#import <YHBaseSDK/YHBaseVC.h>
#import <YHBaseSDK/YHBaseNavController+FDFullscreenPopGesture.h>

#import <YHBaseSDK/YHBackGroundView.h>
#import <YHBaseSDK/YHBackGroundScrollView.h>
#import <YHBaseSDK/UIScrollView+YHScrollBackground.h>

#import <YHBaseSDK/UIView+YHRect.h>

