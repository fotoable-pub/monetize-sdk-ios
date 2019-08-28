//
//  FTAPADOriginAdInfo.h
//  FtAdsPlatform
//
//  Created by ls on 2019/7/1.
//  Copyright © 2019 FT. All rights reserved.
//

#import <FtAdsPlatform/FtAdsPlatform.h>

NS_ASSUME_NONNULL_BEGIN

@interface FTAPADOriginAdInfo : FTAPAdInfo

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

@property (nonatomic, copy) NSString *nativeJSON;

-(void) clickTrackEvent;

-(void) displayTrackEvent;
@end

NS_ASSUME_NONNULL_END
