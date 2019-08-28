//
//  FTAPAdInfo.h
//  FtAdsPlatform
//
//  Created by ls on 2019/4/24.
//  Copyright © 2019 FT. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FTAPAdInfo : NSObject
//广告位id，可为nil
@property(nonatomic,copy,nullable) NSString *adPositionAd;
//广告id, 即第三方广告id，可为nil
@property(nonatomic,copy,nullable) NSString *adId;
/**
 * 广告类型， 可为nil
 * @adType 1.INTERSTITIAL 2.REWARD_VIDEO
 **/
@property(nonatomic,copy,nullable) NSString *adType;
/**
 * 广告平台名称， 可为nil
 * @adName 1.Admob  2.Facebook
 **/
@property(nonatomic,copy,nullable) NSString *adName;
//广告平台描述， 可为nil
@property(nonatomic,copy,nullable) NSString *adDesc;
/**
 * 广告结果， 可为nil
 * @adResulet 1.onAdLoaded  2.onAdFailed 3.onAdClosed 4.onAdClicked  5.onAdDisplayed  6.onVideoCompleted  7.onAdDisplayedFailed
 **/
@property(nonatomic,copy,nullable) NSString *adResulet; 

@end

NS_ASSUME_NONNULL_END
