//
//  MASViewConstraint.h
//  Masonry
//
//  Created by Jonas Budelmann on 20/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "FATViewAttribute.h"
#import "FATConstraint.h"
#import "FATLayoutConstraint.h"
#import "FATUtilities.h"

/**
 *  A single constraint.
 *  Contains the attributes neccessary for creating a NSLayoutConstraint and adding it to the appropriate view
 */
@interface FATViewConstraint : FATConstraint <NSCopying>

/**
 *	First item/view and first attribute of the NSLayoutConstraint
 */
@property (nonatomic, strong, readonly) FATViewAttribute *firstViewAttribute;

/**
 *	Second item/view and second attribute of the NSLayoutConstraint
 */
@property (nonatomic, strong, readonly) FATViewAttribute *secondViewAttribute;

/**
 *	initialises the MASViewConstraint with the first part of the equation
 *
 *	@param	firstViewAttribute	view.mas_left, view.mas_width etc.
 *
 *	@return	a new view constraint
 */
- (id)initWithFirstViewAttribute:(FATViewAttribute *)firstViewAttribute;

/**
 *  Returns all MASViewConstraints installed with this view as a first item.
 *
 *  @param  view  A view to retrieve constraints for.
 *
 *  @return An array of MASViewConstraints.
 */
+ (NSArray *)installedConstraintsForView:(MAS_VIEW *)view;

@end
