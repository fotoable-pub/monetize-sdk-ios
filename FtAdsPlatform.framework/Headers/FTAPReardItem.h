//
//  FTAPReardItem.h
//  FtAdsPlatform
//
//  Created by ls on 2019/5/21.
//  Copyright © 2019 FT. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FTAPReardItem : NSObject
//广告id
@property(nonatomic,copy) NSString *platform;
@property(nonatomic,copy) NSString *adID;
@property(nonatomic,copy) NSString *adPositionAd;
@property(nonatomic,copy) NSString *rewardName;
@property(nonatomic,copy) NSString *rewardType;
@property(nonatomic,copy) NSString *rewardAmount;
@end

NS_ASSUME_NONNULL_END
