//
//  UIViewController+MASAdditions.h
//  Masonry
//
//  Created by Craig Siemens on 2015-06-23.
//
//

#import "FATUtilities.h"
#import "FATConstraintMaker.h"
#import "FATViewAttribute.h"

#ifdef MAS_VIEW_CONTROLLER

@interface MAS_VIEW_CONTROLLER (FATAdditions)

/**
 *	following properties return a new MASViewAttribute with appropriate UILayoutGuide and NSLayoutAttribute
 */
@property (nonatomic, strong, readonly) FATViewAttribute *mas_topLayoutGuide;
@property (nonatomic, strong, readonly) FATViewAttribute *mas_bottomLayoutGuide;
@property (nonatomic, strong, readonly) FATViewAttribute *mas_topLayoutGuideTop;
@property (nonatomic, strong, readonly) FATViewAttribute *mas_topLayoutGuideBottom;
@property (nonatomic, strong, readonly) FATViewAttribute *mas_bottomLayoutGuideTop;
@property (nonatomic, strong, readonly) FATViewAttribute *mas_bottomLayoutGuideBottom;


@end

#endif
