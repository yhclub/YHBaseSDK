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

typedef NS_ENUM(NSUInteger, YHNavStyle) {
    YHNavStyleDefault = 0,//蓝底
    YHNavStyleLevel1 = 1,//白底 NavBarLevel1
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

-(void)setNavBtnBlock:(YHNavBtnBlock)navBtnBlock;

-(void)setRightBtnHighlighted:(BOOL)highlighted atIndex:(NSInteger)index;

-(void)setShadowImageColor:(UIColor *)shadowImageColor;

-(void)setTitleLabelColor:(UIColor *)titleLabelColor;

+(UIButton *)createBtnWithImageSize:(CGSize)imageSize withImage:(NSString *)imageName;

+(UIButton *)createBtnWithTitle:(NSString *)title;

+(UIButton *)createBtnWithTitle:(NSString *)title withStyle:(YHNavStyle)style;


@end
