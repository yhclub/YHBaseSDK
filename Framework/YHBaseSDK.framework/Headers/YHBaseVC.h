//
//  YHBaseVC.h
//  YHVCSDK
//
//  Created by zxl on 2018/1/26.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHViewProtocol.h"
#import "YHNavView.h"
#import "YHBGView.h"

#import "YHBackGroundView.h"

@interface YHBaseVC : UIViewController<YHViewProtocol>

@property(nonatomic,strong)YHNavView *navView;//导航栏

@property(nonatomic,strong)YHBGView *bgView;//背景视图

@property(nonatomic,assign)BOOL hiddenNavView;

@property(nonatomic,assign)BOOL isPresent;

@property(nonatomic,strong)UIColor *backgroundColor;//背景视图颜色

@property (nonatomic,assign)BOOL enableNavigtionPan;//仅控制多层嵌套UIScroll时是否响应

@property(nonatomic,strong)YHBackGroundView *baseView;//背景视图

@property(nonatomic,assign)BOOL isLargeTitleType;//大标题属性

@property(nonatomic,assign)BOOL isAutoCloseKeyboard;//点击关闭键盘，default：NO

-(id)initWithTitle:(NSString *)title;

-(void)setTitle:(NSString *)title;

/**
 添加子视图到bgview
 
 @param subview subview
 */
-(void)addSubview:(UIView *)subview;

/**
 返回上一级
 */
-(void)goBack;


/**
 隐藏返回按钮
 
 @param hidden hidden
 */
-(void)hideBackBtn:(BOOL)hidden;


/**
 设置左导航栏按钮
 
 @param btn leftBtn
 */
-(void)setLeftNavBtn:(UIButton *)btn;

-(void)setRightNavBtn:(UIButton *)btn;

/**
 设置左导航栏按钮数组
 
 @param leftBtnArray 数组
 */
-(void)setLeftNavBtnArray:(NSArray <UIView *> *)leftBtnArray;

-(void)setRightNavBtnArray:(NSArray <UIView *> *)rightBtnArray;

/**
 点击导航栏左边按钮
 
 @param index btnindex
 */
-(void)clickLeftNav:(NSInteger)index;

/**
 点击导航栏右边按钮
 
 @param index btnindex
 */
-(void)clickRightNav:(NSInteger)index;


/**
 以下方法为base vc 模板
 */
-(void)setup;


/**
 初始化数据
 */
-(void)initData;


/**
 创建视图
 */
-(void)createView;


/**
 添加约束(use -addConstraints)
 */
-(void)addContraint NS_DEPRECATED_IOS(2_0,3_0, "use -addConstraints");

/**
 添加约束
 */
-(void)addConstraints;


/**
 设置frame
 备注：该方法与系统的layoutSubviews 有一个字母不一样
 */
-(void)layoutSubViews;


/**
 添加事件
 */
-(void)createEvents;


/**
 视图加载后，触发事件
 */
-(void)actionAfterViewDidload;


/**
 *  销毁字段
 */
- (void)destroyFields;

/**
 *  销毁视图
 */
- (void)destroyViews;

/**
 *  注销事件与通知
 */
- (void)destroyEvents;

/**
 大标题联动滚动。该方法已废弃，兼容旧版内部为空的实现。
 
 @param scrollView scroll
 */
-(void)yh_optimzeScroll:(UIScrollView*)scrollView NS_DEPRECATED_IOS(2_0,3_0, "新版本无需在重写。");;


/**
 在大标题下面添加子view

 @param subview view
 */
-(void)addSubviewForNavViewBlowTitle:(UIView *)subview;


/**
 当大标题scale变化时候，触发事件

 @param scale scale1s
 */
-(void)actionWhenTitleScaleChange:(CGFloat)scale;

@end
