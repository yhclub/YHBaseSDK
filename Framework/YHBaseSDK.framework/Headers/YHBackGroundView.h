//
//  YHBackGroundView.h
//  YHBaseSDK
//
//  Created by zxl on 2018/6/4.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHBackGroundScrollView.h"

typedef BOOL(^YHBgGetTypeBlock)(void);

@protocol YH_VCScrollBackgroundProtocol <NSObject>

@required

/**
 优化滚动效果的实现方法
 
 嵌套使用各类可滚动控件时方便效果联动
 
 用法：在BaseController里实现该协议 完成对联动效果的定制
 
 在scrollViewDidScroll委托里调用此方法
 
 @param scrollView 子控件的UIScrollView
 */
-(void)yh_optimzeScroll:(UIScrollView*)scrollView;

@end

@protocol YH_ScrollBackgroundDelegate <NSObject>

/**
 YHBackGroundView的scrollViewDidScroll委托
 
 注：YHBackGroundView是Controller的Baseview内
 
 @param scrollView SLBackGroundView
 */
-(void)yh_scrollViewDidScroll:(UIScrollView *)scrollView;

@end

@interface YHBackGroundView : UIView

@property(nonatomic,strong)YHBackGroundScrollView *bgScroll;

@property(nonatomic,weak)id<YH_ScrollBackgroundDelegate> scrollBackgroundDelgate;

@property(nonatomic,copy)YHBgGetTypeBlock boolBlock;

-(void)addSubviewForBg:(UIView *)view;

@end
