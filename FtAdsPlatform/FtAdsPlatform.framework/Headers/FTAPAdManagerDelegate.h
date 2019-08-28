//
//  AdManagerInitOption.h
//  FtAdsPlatform
//
//  Created by ls on 2019/4/7.
//  Copyright © 2019 FT. All rights reserved.
//

#ifndef FTAPAdManagerInitOption_h
#define FTAPAdManagerInitOption_h
#import "FTAPAdInfo.h"
#import "FTAPAdError.h"
#import "FTAPReardItem.h"

@protocol FTAPAdManagerDelegate <NSObject>

@required
//在广告加载成功后的回调
- (void) onAdLoaded: (FTAPAdInfo * _Nullable) ad;
//在广告加载失败后的回调
- (void) onAdFailed: (FTAPAdInfo * _Nullable) ad error : (FTAPAdError * _Nullable) error;
//在广告显示成功、视频类广告播放开始的回调
- (void) onAdDisplayed: (FTAPAdInfo * _Nullable) ad;
//在广告被点击时的回调
- (void) onAdClicked: (FTAPAdInfo * _Nullable) ad;
//在广告关闭时的回调
- (void) onAdClosed: (FTAPAdInfo * _Nullable) ad;
//视频类广告播放完成的回调
- (void) onVideoCompleted: (FTAPAdInfo * _Nullable) ad;
//在广告展示失败后的回调
- (void) onAdDisplayedFailed: (FTAPAdInfo * _Nullable) ad error: (FTAPAdError * _Nullable) error;
//奖励
- (void) onUserEarnedReward: (FTAPAdInfo * _Nullable) ad reward: (FTAPReardItem * _Nullable) rewardItem;

//测试用的
- (void) printDesc2: (NSString * _Nullable)desc;
@end

#endif /* AdManagerInitOption_h */
