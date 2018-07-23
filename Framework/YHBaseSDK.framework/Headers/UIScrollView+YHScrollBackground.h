//
//  UIScrollView+YHScrollBackground.h
//  YHBaseSDK
//
//  Created by zxl on 2018/6/4.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (YHScrollBackground)

/**
 用于记录最后一次滚动到的ContentOffset ，非自动化只是方便记录需要手动实现记录，在
 */
@property(nonatomic,assign)CGPoint yh_lastScrollContentOffset;


@end
