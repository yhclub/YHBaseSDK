//
//  YHDeviceHeader.h
//  YHBaseSDK
//
//  Created by zxl on 2018/1/26.
//  Copyright © 2018年 YH. All rights reserved.
//

#ifndef YHDeviceHeader_h
#define YHDeviceHeader_h

#define VERTICAL_SCREEN_WIDTH    [UIScreen mainScreen].bounds.size.width    //竖屏宽度
#define VERTICAL_SCREEN_HEIGHT   [UIScreen mainScreen].bounds.size.height   //竖屏高度
#define HORIZONTAL_SCREEN_WIDTH  [UIScreen mainScreen].bounds.size.height  //横屏宽度
#define HORIZONTAL_SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.width //横屏高度


#define VERTICAL_SCREEN_WIDTH_2    ([UIScreen mainScreen].bounds.size.width/2.f)
#define VERTICAL_SCREEN_WIDTH_3    ([UIScreen mainScreen].bounds.size.width/3.f)
#define VERTICAL_SCREEN_WIDTH_4    ([UIScreen mainScreen].bounds.size.width/4.f)
#define VERTICAL_SCREEN_WIDTH_5    ([UIScreen mainScreen].bounds.size.width/5.f)
#define VERTICAL_SCREEN_WIDTH_7    ([UIScreen mainScreen].bounds.size.width/7.f)
#define VERTICAL_SCREEN_WIDTH_8    ([UIScreen mainScreen].bounds.size.width/8.f)

#define IS_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7) //是否是运行iOS7系统

#define IS_IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9)

#define IS_IOS11  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11) //是否是运行iOS11系统

#define FontWithSize(fontSize) [UIFont fontWithName:@"Courier New" size:fontSize]

#define WIDTHRATE VERTICAL_SCREEN_WIDTH/375.f //以4.7屏为主

#define HEIGHTRATE VERTICAL_SCREEN_HEIGHT/667.f //以4.7屏为主

// iPhone X | iPhone XS || iPhone XR | iPhone XS Max
#define  YH_iPhoneXS (VERTICAL_SCREEN_WIDTH == 375.f && VERTICAL_SCREEN_HEIGHT == 812.f ? YES : NO)
#define  YH_iPhoneXR (VERTICAL_SCREEN_WIDTH == 414.f && VERTICAL_SCREEN_HEIGHT == 896.f ? YES : NO)

#define  YH_iPhoneX ((YH_iPhoneXS||YH_iPhoneXR) ? YES : NO)

// Status bar height.
#define  YH_StatusBarHeight  [UIApplication sharedApplication].statusBarFrame.size.height

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

#define NavigationBarLargeTitleHeight (YH_StatusBarHeight + YH_NavigationBarHeight + YH_NavLargeTitleHeight + 0)

#endif /* YHDeviceHeader_h */
