//
//  FATSDKManager.h
//  FAT_ads
//
//  Created by 傅瑶fotoable on 2019/6/26.
//  Copyright © 2019 FOTOABLE. All rights reserved.
//


#import <Foundation/Foundation.h>
typedef enum : NSInteger {
    ENVIRONMENT_UNKNOW = -1,
    ENVIRONMENT_RELEASE = 0,
    ENVIRONMENT_DEBUG = 1
} FAT_ENVIRONMENT;


/**
 SDK 初始化后,使用该单利类保存变量,使得可以全局使用这些变量
 */
@interface FATSDKManager : NSObject

+ (instancetype)sharedManager;

@property (nonatomic, copy) NSString *AppID;
@property (nonatomic, assign) FAT_ENVIRONMENT environment;


@end

