//
//  MainModelHelper.h
//  EPass Parking
//
//  Created by FredChen on 15/10/16.
//  Copyright © 2015年 FredChen. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface MainModelHelper : NSObject

// 创建存储单例
+ (instancetype)sharedHelper;

/*
 *充值卡号
 */
@property(nonatomic,strong)NSString    *bgoneString;

/*
 *生效时间
 */
@property(nonatomic,strong)NSString    *timestring;

/*
 *月卡类型
 */
@property(nonatomic,strong)NSString    *monthtype;

/*
 *月卡值
 */
@property(nonatomic,strong)NSString    *monthmoney;
/*
 *月卡值
 */
@property(nonatomic,strong)NSString    *monthnum;
/*
 *没有年月日的时间
 */
@property(nonatomic,strong)NSString    *notimestring;
/*
 *车牌号码
 */
@property (nonatomic,strong)NSString *CarNumString;
/*
 *抽屉推出状态
 */
@property (nonatomic,strong)NSString *leftViewType;
/*
 *卡状态
 */
@property (nonatomic,strong)NSString *cardStatus;

@end
