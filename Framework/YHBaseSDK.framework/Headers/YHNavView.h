//
//  YHNavView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHDeviceHeader.h"
#import "YHGlobalHeader.h"

typedef void(^YHNavBtnBlock)(BOOL isLeft , NSInteger index);

typedef void(^YHResetViewHeightBlock)(NSInteger addHeight);

//辅色
FOUNDATION_EXPORT NSString *YHNavDefaultColorHexString;
FOUNDATION_EXPORT NSString *YHNavDefaultTextColorHexString;
FOUNDATION_EXPORT NSString *YHNavBgColorHexString;

typedef NS_ENUM(NSUInteger, YHNavStyle) {
    YHNavStyleDefault = 0,//默认背景色YHNavDefaultColorHexString
    YHNavStyleWhite = 1,
    YHNavStyleLevel1 = YHNavStyleWhite,//白底 NavBarLevel1
};

typedef NS_ENUM(NSUInteger, YHNavTitleStyle) {
    YHNavTitleStyleNormal = 0,//小标题
    YHNavTitleStyleLarge = 1,//大标题
};

@interface YHNavView : UIView

/**
 标题
 */
@property(nonatomic,strong)NSString *title;


/**
 标题栏的标签
 */
@property(nonatomic,strong)UILabel *titleLabel;


/**
 左导航按钮组
 */
@property(nonatomic,strong)NSArray *leftBtnArray;


/**
 右导航按钮组
 */
@property(nonatomic,strong)NSArray *rightBtnArray;


/**
 导航按钮的点击触发事件
 */
@property(nonatomic,copy)YHNavBtnBlock navBtnBlock;


/**
 隐藏返回按钮
 */
@property(nonatomic,assign)BOOL hiddenBackBtn;


/**
 隐藏底线
 */
@property(nonatomic,assign)BOOL hiddenBottomLine;


/**
 nav样式
 */
@property(nonatomic,assign)YHNavStyle navStyle;


/**
 返回按钮
 */
@property(nonatomic,strong)UIButton *backBtn;


/**
 底线
 */
@property(nonatomic,strong)UIView *bottomLine;

/**
 默认为 50.f,用于控制titlelabel靠左边的距离，长度计算为屏幕宽度 - 2*titleLabelPadding
 */
@property(nonatomic,assign)CGFloat titleLabelPadding;


/**
 大小标题模式
 */
@property (nonatomic,assign)YHNavTitleStyle navTitleType;

@property(nonatomic,assign)CGFloat heightBlowLargeTitle;//大标题模式下面的view高度

@property(nonatomic,assign)CGFloat maxHeight;//自身最大高度

@property(nonatomic,assign)CGFloat largeTitleHeight;//标题最大高度

@property(nonatomic,copy)YHResetViewHeightBlock resetViewHeihtBlock;

-(void)setRightBtnHighlighted:(BOOL)highlighted atIndex:(NSInteger)index;

-(void)setShadowImageColor:(UIColor *)shadowImageColor;

-(void)setTitleLabelColor:(UIColor *)titleLabelColor;


/**
 标题下面的为底层

 @param subView <#subView description#>
 */
-(void)addSubviewBlowLargeTitle:(UIView *)subView;

/**
 大标题模式下滚动缩放标题

 @param scale 比例
 */
-(void)navigationBarAnimationWithScale:(CGFloat)scale;

#pragma mark nav btn class method

+(UIButton *)createBtnWithImageSize:(CGSize)imageSize withImage:(NSString *)imageName;

+(UIButton *)createBtnWithTitle:(NSString *)title;

+(UIButton *)createBtnWithTitle:(NSString *)title withStyle:(YHNavStyle)style;


@end
