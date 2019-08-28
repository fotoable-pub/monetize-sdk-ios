//
//  FATAdModel.h
//  FAT_ads
//
//  Created by 傅瑶fotoable on 2019/6/25.
//  Copyright © 2019 FOTOABLE. All rights reserved.
//

#import "FATBaseModel.h"

NS_ASSUME_NONNULL_BEGIN


/**
 广告公共信息
 */
@interface FATAdModel : FATBaseModel
@property (nonatomic, assign) NSInteger adid;

/**
 苹果商店应用id
 */
@property (nonatomic, copy) NSString *bundle;

/**
 点击上报
 */
@property (nonatomic, strong) NSArray <NSString *>*clickTrackUrls;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, assign) NSInteger ID;

/**
 展示上报地址
 */
@property (nonatomic, strong) NSArray <NSString *>*displayTrackUrls;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *score;
@property (nonatomic, copy) NSString *turl;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, copy) NSString *title;
@end

NS_ASSUME_NONNULL_END
