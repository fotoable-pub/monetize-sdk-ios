//
//  FATNativeAdModel.h
//  FAT_ads
//
//  Created by 傅瑶fotoable on 2019/6/25.
//  Copyright © 2019 FOTOABLE. All rights reserved.
//

#import "FATAdModel.h"


NS_ASSUME_NONNULL_BEGIN
@interface FATNativeAdInfo : FATBaseModel

/**
 图片集合 <key:imgUrl>
 */
@property (nonatomic, strong) NSArray *imgs;
/**
 视频集合 <key:VideoUrl>
 */
@property (nonatomic, strong) NSArray *videos;

@property (nonatomic, strong) NSArray *title;
@property (nonatomic, strong) NSArray *icon;

@property (nonatomic, copy, readonly) NSString *nativeInfoJson;

@end

@interface FATNativeAdModel : FATAdModel
@property (nonatomic, strong) FATNativeAdInfo *nativead;
@end


NS_ASSUME_NONNULL_END
