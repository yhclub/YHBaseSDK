//
//  YHBaseTool.h
//  YHVCSDK
//
//  Created by zxl on 2018/1/26.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define YHBaseSDKBundle_NAME   @"YHBaseSDKBundle.bundle"
#define YHBaseSDKBundle_PATH   [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:YHBaseSDKBundle_NAME]
#define YHBaseSDKBundle        [NSBundle bundleWithPath:YHBaseSDKBundle_PATH]

@interface YHBaseTool : NSObject

+ (UIColor *) colorWithHexString: (NSString *)color;

+ (UIColor *) colorWithHexString: (NSString *)color withAlpha:(CGFloat)alpha;

/**
 由于bundle无法自动识别@2x,@3x图片,我们根据系统scale进行判断
 @param imageName imgName
 @return imageName
 */
+(UIImage *)getBundleImageNamePath:(NSString *)imageName;

+ (CGFloat)getIPhoneNotchScreenHeight;

@end
