//
//  FFMAuthorization.h
//  FFMAutoDistribution
//
//  Created by 常润泽 on 2018/4/4.
//  Copyright © 2018年 常润泽. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFMAuthorization : NSObject

+ (instancetype)requestAuthorization:(void (^)(BOOL isAuthorized))result;

@end
