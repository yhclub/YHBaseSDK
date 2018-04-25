//
//  YHGlobalHeader.h
//  YHBaseSDK
//
//  Created by zxl on 2018/1/26.
//  Copyright © 2018年 YH. All rights reserved.
//

#ifndef YHGlobalHeader_h
#define YHGlobalHeader_h

#ifdef DEBUG
#define LOG(...) NSLog(__VA_ARGS__);
#define LOG_METHOD NSLog(@"%s", __func__);
#else
#define LOG(...);
#define LOG_METHOD
#endif

#define YHWeakifySelf \
__weak __typeof(&*self)yh_weak_self = self

#define YHStrongifySelf \
__strong __typeof(&*yh_weak_self)self = yh_weak_self

#define YHKeyWindow [UIApplication sharedApplication].keyWindow

#define YHCloseKeyBoard [[[UIApplication sharedApplication] keyWindow] endEditing:YES];

#define YLZYHDelegate [UIApplication sharedApplication].delegate;

//获取多国化语言
#define YHString(string) NSLocalizedString(string,nil)

#endif /* YHGlobalHeader_h */
