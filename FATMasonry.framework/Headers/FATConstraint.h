//
//  MASConstraint.h
//  Masonry
//
//  Created by Jonas Budelmann on 22/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "FATUtilities.h"

/**
 *	Enables Constraints to be created with chainable syntax
 *  Constraint can represent single NSLayoutConstraint (MASViewConstraint) 
 *  or a group of NSLayoutConstraints (MASComposisteConstraint)
 */
@interface FATConstraint : NSObject

// Chaining Support

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeTop, NSLayoutAttributeLeft, NSLayoutAttributeBottom, NSLayoutAttributeRight
 */
- (FATConstraint * (^)(MASEdgeInsets insets))insets;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeTop, NSLayoutAttributeLeft, NSLayoutAttributeBottom, NSLayoutAttributeRight
 */
- (FATConstraint * (^)(CGFloat inset))inset;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeWidth, NSLayoutAttributeHeight
 */
- (FATConstraint * (^)(CGSize offset))sizeOffset;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeCenterX, NSLayoutAttributeCenterY
 */
- (FATConstraint * (^)(CGPoint offset))centerOffset;

/**
 *	Modifies the NSLayoutConstraint constant
 */
- (FATConstraint * (^)(CGFloat offset))offset;

/**
 *  Modifies the NSLayoutConstraint constant based on a value type
 */
- (FATConstraint * (^)(NSValue *value))valueOffset;

/**
 *	Sets the NSLayoutConstraint multiplier property
 */
- (FATConstraint * (^)(CGFloat multiplier))multipliedBy;

/**
 *	Sets the NSLayoutConstraint multiplier to 1.0/dividedBy
 */
- (FATConstraint * (^)(CGFloat divider))dividedBy;

/**
 *	Sets the NSLayoutConstraint priority to a float or MASLayoutPriority
 */
- (FATConstraint * (^)(MASLayoutPriority priority))priority;

/**
 *	Sets the NSLayoutConstraint priority to MASLayoutPriorityLow
 */
- (FATConstraint * (^)(void))priorityLow;

/**
 *	Sets the NSLayoutConstraint priority to MASLayoutPriorityMedium
 */
- (FATConstraint * (^)(void))priorityMedium;

/**
 *	Sets the NSLayoutConstraint priority to MASLayoutPriorityHigh
 */
- (FATConstraint * (^)(void))priorityHigh;

/**
 *	Sets the constraint relation to NSLayoutRelationEqual
 *  returns a block which accepts one of the following:
 *    MASViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (FATConstraint * (^)(id attr))equalTo;

/**
 *	Sets the constraint relation to NSLayoutRelationGreaterThanOrEqual
 *  returns a block which accepts one of the following:
 *    MASViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (FATConstraint * (^)(id attr))greaterThanOrEqualTo;

/**
 *	Sets the constraint relation to NSLayoutRelationLessThanOrEqual
 *  returns a block which accepts one of the following:
 *    MASViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (FATConstraint * (^)(id attr))lessThanOrEqualTo;

/**
 *	Optional semantic property which has no effect but improves the readability of constraint
 */
- (FATConstraint *)with;

/**
 *	Optional semantic property which has no effect but improves the readability of constraint
 */
- (FATConstraint *)and;

/**
 *	Creates a new MASCompositeConstraint with the called attribute and reciever
 */
- (FATConstraint *)left;
- (FATConstraint *)top;
- (FATConstraint *)right;
- (FATConstraint *)bottom;
- (FATConstraint *)leading;
- (FATConstraint *)trailing;
- (FATConstraint *)width;
- (FATConstraint *)height;
- (FATConstraint *)centerX;
- (FATConstraint *)centerY;
- (FATConstraint *)baseline;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)

- (FATConstraint *)firstBaseline;
- (FATConstraint *)lastBaseline;

#endif

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000)

- (FATConstraint *)leftMargin;
- (FATConstraint *)rightMargin;
- (FATConstraint *)topMargin;
- (FATConstraint *)bottomMargin;
- (FATConstraint *)leadingMargin;
- (FATConstraint *)trailingMargin;
- (FATConstraint *)centerXWithinMargins;
- (FATConstraint *)centerYWithinMargins;

#endif


/**
 *	Sets the constraint debug name
 */
- (FATConstraint * (^)(id key))key;

// NSLayoutConstraint constant Setters
// for use outside of mas_updateConstraints/mas_makeConstraints blocks

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeTop, NSLayoutAttributeLeft, NSLayoutAttributeBottom, NSLayoutAttributeRight
 */
- (void)setInsets:(MASEdgeInsets)insets;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeTop, NSLayoutAttributeLeft, NSLayoutAttributeBottom, NSLayoutAttributeRight
 */
- (void)setInset:(CGFloat)inset;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeWidth, NSLayoutAttributeHeight
 */
- (void)setSizeOffset:(CGSize)sizeOffset;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeCenterX, NSLayoutAttributeCenterY
 */
- (void)setCenterOffset:(CGPoint)centerOffset;

/**
 *	Modifies the NSLayoutConstraint constant
 */
- (void)setOffset:(CGFloat)offset;


// NSLayoutConstraint Installation support

#if TARGET_OS_MAC && !(TARGET_OS_IPHONE || TARGET_OS_TV)
/**
 *  Whether or not to go through the animator proxy when modifying the constraint
 */
@property (nonatomic, copy, readonly) MASConstraint *animator;
#endif

/**
 *  Activates an NSLayoutConstraint if it's supported by an OS. 
 *  Invokes install otherwise.
 */
- (void)activate;

/**
 *  Deactivates previously installed/activated NSLayoutConstraint.
 */
- (void)deactivate;

/**
 *	Creates a NSLayoutConstraint and adds it to the appropriate view.
 */
- (void)install;

/**
 *	Removes previously installed NSLayoutConstraint
 */
- (void)uninstall;

@end


/**
 *  Convenience auto-boxing macros for MASConstraint methods.
 *
 *  Defining MAS_SHORTHAND_GLOBALS will turn on auto-boxing for default syntax.
 *  A potential drawback of this is that the unprefixed macros will appear in global scope.
 */
#define mas_equalTo(...)                 equalTo(MASBoxValue((__VA_ARGS__)))
#define mas_greaterThanOrEqualTo(...)    greaterThanOrEqualTo(MASBoxValue((__VA_ARGS__)))
#define mas_lessThanOrEqualTo(...)       lessThanOrEqualTo(MASBoxValue((__VA_ARGS__)))

#define mas_offset(...)                  valueOffset(MASBoxValue((__VA_ARGS__)))


#ifdef MAS_SHORTHAND_GLOBALS

#define equalTo(...)                     mas_equalTo(__VA_ARGS__)
#define greaterThanOrEqualTo(...)        mas_greaterThanOrEqualTo(__VA_ARGS__)
#define lessThanOrEqualTo(...)           mas_lessThanOrEqualTo(__VA_ARGS__)

#define offset(...)                      mas_offset(__VA_ARGS__)

#endif


@interface FATConstraint (AutoboxingSupport)

/**
 *  Aliases to corresponding relation methods (for shorthand macros)
 *  Also needed to aid autocompletion
 */
- (FATConstraint * (^)(id attr))mas_equalTo;
- (FATConstraint * (^)(id attr))mas_greaterThanOrEqualTo;
- (FATConstraint * (^)(id attr))mas_lessThanOrEqualTo;

/**
 *  A dummy method to aid autocompletion
 */
- (FATConstraint * (^)(id offset))mas_offset;

@end
