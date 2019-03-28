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
