//
//  YHPresenterProtocol.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YHPresenterProtocol <NSObject>

@optional
- (void)present;
    
- (void)presentWithModel:(id)model;

- (void)presentWithModel:(id)model viewController:(UIViewController *)viewController;

@end
