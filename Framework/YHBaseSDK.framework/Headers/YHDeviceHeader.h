//
//  YHDeviceHeader.h
//  YHBaseSDK
//
//  Created by zxl on 2018/1/26.
//  Copyright © 2018年 YH. All rights reserved.
//

#ifndef YHDeviceHeader_h
#define YHDeviceHeader_h


#define VERTICAL_SCREEN_WIDTH_2    ([UIScreen mainScreen].bounds.size.width/2.f)
#define VERTICAL_SCREEN_WIDTH_3    ([UIScreen mainScreen].bounds.size.width/3.f)
#define VERTICAL_SCREEN_WIDTH_4    ([UIScreen mainScreen].bounds.size.width/4.f)
#define VERTICAL_SCREEN_WIDTH_5    ([UIScreen mainScreen].bounds.size.width/5.f)
#define VERTICAL_SCREEN_WIDTH_7    ([UIScreen mainScreen].bounds.size.width/7.f)
#define VERTICAL_SCREEN_WIDTH_8    ([UIScreen mainScreen].bounds.size.width/8.f)


#define WIDTHRATE [UIScreen mainScreen].bounds.size.width/375.f //以4.7屏为主

#define HEIGHTRATE [UIScreen mainScreen].bounds.size.height/667.f //以4.7屏为主

// iPhone X | iPhone XS || iPhone XR | iPhone XS Max
#define  YH_iPhoneXS ([UIScreen mainScreen].bounds.size.width == 375.f && [UIScreen mainScreen].bounds.size.height == 812.f ? YES : NO)
#define  YH_iPhoneXR ([UIScreen mainScreen].bounds.size.width == 414.f && [UIScreen mainScreen].bounds.size.height == 896.f ? YES : NO)

#define  YH_iPhoneX ((YH_iPhoneXS||YH_iPhoneXR) ? YES : NO)

// Status bar height.
#define  YH_StatusBarHeight  [UIApplication sharedApplication].statusBarFrame.size.height

#define  YH_StatusBarHeight_Origin  (YH_iPhoneX ? 44.f : 20.f)

// Navigation bar height.
#define  YH_NavigationBarHeight  44.f

// Tabbar safe bottom margin.
#define  YH_TabbarSafeBottomMargin         (YH_iPhoneX ? 34.f : 0.f)

// Tabbar height.
#define  YH_TAB_BAR_HEIGHT         (YH_TabbarSafeBottomMargin + 49.f)

// Status bar & navigation bar height.
#define  YH_StatusBarAndNavBarHeight  (YH_StatusBarHeight + YH_NavigationBarHeight)

#define YH_ViewSafeAreInsets(view) ({UIEdgeInsets insets; if(@available(iOS 11.0, *)) {insets = view.safeAreaInsets;} else {insets = UIEdgeInsetsZero;} insets;})

#define ScreenHeigth [UIScreen mainScreen].bounds.size.height
#define ScreenWidth [UIScreen mainScreen].bounds.size.width
#define ScreenStatusBottom  ([UIApplication sharedApplication].statusBarFrame.origin.y + [UIApplication sharedApplication].statusBarFrame.size.height)

#define YH_NavLargeTitleHeight 52.f

#define YH_NavigationLargeTitleBarHeight_Origin (YH_StatusBarHeight_Origin + YH_NavigationBarHeight + YH_NavLargeTitleHeight + 0)

#define VERTICAL_SCREEN_WIDTH    [UIScreen mainScreen].bounds.size.width    //竖屏宽度
#define VERTICAL_SCREEN_HEIGHT   ([UIScreen mainScreen].bounds.size.height+YH_StatusBarHeight_Origin-YH_StatusBarHeight)   //竖屏高度
#define HORIZONTAL_SCREEN_WIDTH  [UIScreen mainScreen].bounds.size.height  //横屏宽度
#define HORIZONTAL_SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.width //横屏高度

/*判断设备的分辨率*/

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPad ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(768, 1024), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPad_HD ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(2048,1536), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IOS11  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11) //是否是运行iOS11系统
#define IS_IOS10 [[[UIDevice currentDevice]systemVersion]floatValue] >= 10.0 ? YES:NO
#define IS_IOS9 [[[UIDevice currentDevice]systemVersion]floatValue] >= 9.0 ? YES:NO
#define IS_IOS8 [[[UIDevice currentDevice]systemVersion]floatValue] >= 8.0 ? YES:NO
#define IS_IOS7 [[[UIDevice currentDevice]systemVersion]floatValue] >= 7.0 ? YES:NO
#define IS_IOS6 [[[UIDevice currentDevice]systemVersion]floatValue] < 7.0 ? YES:NO

#define FontWithSize(fontSize) [UIFont fontWithName:@"Courier New" size:fontSize]


#endif /* YHDeviceHeader_h */
