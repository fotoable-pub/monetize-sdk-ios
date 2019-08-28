//
//  FATInterstitialAd.h
//  FAT_ads
//
//  Created by 傅瑶 on 2019/6/16.
//  Copyright © 2019 FOTOABLE. All rights reserved.
//

#import <FAT_ads/FATBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FATInterstitialAdDelegate;
@interface FATInterstitialAd : FATBaseAd

@property (nonatomic, weak, nullable) id<FATInterstitialAdDelegate> delegate;

/**
 广告资源是否已经缓存完成
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;


- (instancetype)initWithAdID:(NSString *)adid;

- (void)loadAdData;

- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;
@end

@protocol FATInterstitialAdDelegate <NSObject>

@optional

- (void)interstitialAdDidLoad:(FATInterstitialAd *)interstitialAd;


- (void)interstitialAd:(FATInterstitialAd *)interstitialAd didFailWithError:(NSError *)error;


- (void)interstitialAdWillVisible:(FATInterstitialAd *)interstitialAd;


- (void)interstitialAdDidVisible:(FATInterstitialAd *)interstitialAd;


- (void)interstitialAdDidClick:(FATInterstitialAd *)interstitialAd;


- (void)interstitialAdDidClose:(FATInterstitialAd *)interstitialAd;


@end

NS_ASSUME_NONNULL_END
