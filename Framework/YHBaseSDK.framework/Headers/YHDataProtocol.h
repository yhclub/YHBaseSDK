//
//  YHDataProtocol.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/21.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YHDataProtocol <NSObject>

@optional

- (void)setDataWithModel:(id)model;

- (void)setDataWithModel:(id)model withObject:(id)object;

@end
