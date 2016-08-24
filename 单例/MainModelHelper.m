//
//  MainModelHelper.m
//  EPass Parking
//
//  Created by FredChen on 15/10/16.
//  Copyright © 2015年 FredChen. All rights reserved.
//

#import "MainModelHelper.h"

@implementation MainModelHelper
+ (instancetype)sharedHelper
{
    static MainModelHelper *modelHelper = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!modelHelper) {
            modelHelper = [MainModelHelper new];
        }
        
    });

    return modelHelper;
}
@end
