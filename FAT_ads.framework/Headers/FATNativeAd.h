//
//  FATNativeAd.h
//  FAT_ads
//
//  Created by 傅瑶fotoable on 2019/6/25.
//  Copyright © 2019 FOTOABLE. All rights reserved.
//

#import "FATBaseAd.h"
#import "FATNativeAdModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FATNativeAdDelegate;

@interface FATNativeAd : FATBaseAd

@property (nonatomic, weak, nullable) id<FATNativeAdDelegate> delegate;


- (instancetype)initWithAdID:(NSString *)adid ShowFromViewController:(UIViewController *)fromViewController;

- (void)loadAdData;
/**
 *  当点击广告的时候调用该方法,自动在应用内打开appStore
 **/
-(void) clickTrackEvent;

/**
 *  广告展示时，手动上报此方法
 **/
-(void) displayTrackEvent;

@end


@protocol FATNativeAdDelegate <NSObject>

@optional

- (void)nativeAdDidLoad:(FATNativeAd *)nativeAd nativeAdModel:(FATNativeAdModel *)adModel;


- (void)nativeAdDidLoad:(FATNativeAd *)nativeAd didFailWithError:(NSError *)error;



@end


NS_ASSUME_NONNULL_END
