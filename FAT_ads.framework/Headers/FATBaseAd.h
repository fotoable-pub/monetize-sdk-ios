//
//  FATBaseAd.h
//  FAT_ads
//
//  Created by 傅瑶fotoable on 2019/6/18.
//  Copyright © 2019 FOTOABLE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface FATBaseAd : NSObject

- (void)bindStoreProductVc:(NSString *)iTunesItemId;

- (void)jumpToAppStore:(NSString *)iTunesItemId PresentRootVc:(UIViewController*)presentRootVc;
@end



NS_ASSUME_NONNULL_END
