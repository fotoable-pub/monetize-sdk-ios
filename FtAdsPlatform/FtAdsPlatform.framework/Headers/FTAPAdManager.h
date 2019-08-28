//
//  AdManager.h
//  FtAdsPlatform
//
//  Created by ls on 2019/4/7.
//  Copyright © 2019 FT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FTAPAdManagerDelegate.h"
#import "FTAPAdEnums.h"
#import "FTAPADOriginAdInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface FTAPAdManager : NSObject

//研发传递的用户分层标签
@property (nonatomic, copy) NSArray<NSString *>* packageIds;
//回调
@property (nonatomic, weak) id<FTAPAdManagerDelegate> delegate;

+ (instancetype)getInstance;
//初始化广告配置
- (void)initWithAppID: (NSString *)appID isDebug:(BOOL) isDebug; 
/**
 加载广告
 adPlaceId 广告位id，多个用“,”分隔
 **/
- (void)loadAdByString:(NSString *)adPlaceIds;

/**
 加载广告
 adPlaceId 广告位id
 **/
- (void)loadOneAd:(NSString *)adPlaceId;

/**
 加载广告
 adPlaceIds 广告位id
 **/
- (void)loadAd:(NSArray<NSString *> *)adPlaceIds;

/**
 显示广告
 adPlaceId 广告位id
 **/
- (void)displayAd:(NSString *)adPlaceId withViewController:(UIViewController * __nullable) viewController;

/**
 判断广告是否可用
 adPlaceId 广告位id
 **/
- (BOOL) isAdLoaded: (NSString *)adPlaceId;

/**
 加载banner广告
 @adPlaceId 广告位id
 @showPosition: 广告展示的位置
 @size: 广告尺寸
**/
-(void) loadBanner: (NSString *)adPlaceId showPosition:(FTAP_AD_BANNER_POSITION) position size:(FTAP_AD_BANNER_SIZE) size;

/**
 隐藏banner广告
 @adPlaceId 广告位id
 **/
-(void) hideBanner: (NSString *)adPlaceId;

//显示debug 界面
-(void) showDebugViewByViewController: (UIViewController * __nullable) viewControll;
@end

NS_ASSUME_NONNULL_END
