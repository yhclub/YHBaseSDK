//
//  YHViewProtocol.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YHViewProtocol <NSObject>

@optional

/**
 初始化数据
 */
-(void)initData;


/**
 创建视图
 */
-(void)createView;


/**
 添加约束(use -addConstraint)
 */
-(void)addContraint NS_DEPRECATED_IOS(2_0,3_0, "use -addConstraint");

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

@end
