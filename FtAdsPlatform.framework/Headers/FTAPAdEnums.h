//
//  AdEnums.h
//  FtAdsPlatform
//
//  Created by ls on 2019/4/7.
//  Copyright © 2019 FT. All rights reserved.
//

#ifndef FTAPAdEnums_h
#define FTAPAdEnums_h

#import <Foundation/Foundation.h>
/*广告平台类型*/
typedef enum : NSUInteger {
    PLATFORM_KIND_UNKNOWN,
    PLATFORM_KIND_FB,
    PLATFORM_KIND_ADMOB,
    PLATFORM_KIND_Vungle,
    PLATFORM_KIND_AppLovin,
    PLATFORM_KIND_Arlington,
    PLATFORM_KIND_Unity,
    PLATFORM_KIND_AdColony,
    PLATFORM_KIND_IronSource,
    PLATFORM_KIND_Tapjoy,
    PLATFORM_KIND_Chartboost,
} FTAP_PLATFORM_KIND;//"platform"

/**广告类型**/
typedef enum : NSUInteger {
    AD_KIND_UNKNOWN,
    AD_KIND_INTERSTITIAL,
    AD_KIND_BANNER,
    AD_KIND_NATIVE,
    AD_KIND_BUTTON,
    AD_KIND_VIDEO,
    AD_KIND_REWARD_VIDEO
} FTAP_AD_KIND;//"ad_kind"

//初始化请求广告方式
typedef enum : NSUInteger {
    //串行
    AD_INIT_REUQTES_WATER_FALL,
    //并行
    AD_INIT_REUQTES_FAN_OUT,
} FTAP_AD_INIT_REQUETS_WAY; 

//广告展示结束后，请求广告方式
typedef enum : NSUInteger { 
    AdRquestOpenLoop,
    AdRquestCloseLoop,
} FTAP_AD_NEXT_LOAD;

//SDK 初始化时，否针对该广告位进行预加载
typedef enum : NSUInteger {
    AdRquestOpenPre,
    AdRquestClosePre,
} FTAP_AD_PRE_LOAD;

//SDK banner广告位置
typedef enum : NSUInteger {
    FTAP_Bottom,
    FTAP_Top,
} FTAP_AD_BANNER_POSITION;

//SDK banner尺寸
typedef enum : NSUInteger {
    //320x50
    FTAP_Standard_50,
    //320x250
    FTAP_Medium_250,
    //320x90
    FTAP_Large_90,
} FTAP_AD_BANNER_SIZE;
#endif /* AdEnums_h */
