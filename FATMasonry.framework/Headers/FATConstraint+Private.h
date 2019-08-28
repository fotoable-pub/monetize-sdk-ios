//
//  MASConstraint+Private.h
//  Masonry
//
//  Created by Nick Tymchenko on 29/04/14.
//  Copyright (c) 2014 cloudling. All rights reserved.
//

#import "FATConstraint.h"

@protocol FATConstraintDelegate;


@interface FATConstraint ()

/**
 *  Whether or not to check for an existing constraint instead of adding constraint
 */
@property (nonatomic, assign) BOOL updateExisting;

/**
 *	Usually MASConstraintMaker but could be a parent MASConstraint
 */
@property (nonatomic, weak) id<FATConstraintDelegate> delegate;

/**
 *  Based on a provided value type, is equal to calling:
 *  NSNumber - setOffset:
 *  NSValue with CGPoint - setPointOffset:
 *  NSValue with CGSize - setSizeOffset:
 *  NSValue with MASEdgeInsets - setInsets:
 */
- (void)setLayoutConstantWithValue:(NSValue *)value;

@end


@interface FATConstraint (Abstract)

/**
 *	Sets the constraint relation to given NSLayoutRelation
 *  returns a block which accepts one of the following:
 *    MASViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (FATConstraint * (^)(id, NSLayoutRelation))equalToWithRelation;

/**
 *	Override to set a custom chaining behaviour
 */
- (FATConstraint *)addConstraintWithLayoutAttribute:(NSLayoutAttribute)layoutAttribute;

@end


@protocol FATConstraintDelegate <NSObject>

/**
 *	Notifies the delegate when the constraint needs to be replaced with another constraint. For example
 *  A MASViewConstraint may turn into a MASCompositeConstraint when an array is passed to one of the equality blocks
 */
- (void)constraint:(FATConstraint *)constraint shouldBeReplacedWithConstraint:(FATConstraint *)replacementConstraint;

- (FATConstraint *)constraint:(FATConstraint *)constraint addConstraintWithLayoutAttribute:(NSLayoutAttribute)layoutAttribute;

@end
