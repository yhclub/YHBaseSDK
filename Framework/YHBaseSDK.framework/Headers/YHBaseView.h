//
//  YHBaseView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHViewProtocol.h"

#import "YHDeviceHeader.h"
#import "YHGlobalHeader.h"

@interface YHBaseView : UIView<YHViewProtocol>
    
/**
 初始化数据
 */
-(void)initData;


/**
 创建视图
 */
-(void)createView;


/**
 添加约束
 */
-(void)addContraint;


/**
 设置frame
 备注：该方法与系统的layoutSubviews 有一个字母不一样
      但是,这里调用了layoutSubviews方法
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
 显示到windows
 */
-(void)showView;


/**
 显示到指定view

 @param superview super
 */
-(void)showViewInSuperview:(UIView *)superview;


/**
 移除视图
 */
-(void)dismissView;
@end
