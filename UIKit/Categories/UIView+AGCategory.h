//
//  UIView+AGCategory.h
//  AGFoundation
//
//  Created by Andrew Garn on 03/05/2012.
//  Copyright (c) 2012 Andrew Garn. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice, this
//  list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
//  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import <UIKit/UIKit.h>

/** A collection of category extensions for `UIView` */
@interface UIView (AGCategory)

/**-------------------------------------------------------------------------------------
 @name Image Rendering
 ---------------------------------------------------------------------------------------
*/

/** Creates a UIImage object representing the receiver.
 @return A UIImage object representing the receiver.
*/ 
- (UIImage *)image;

/**-------------------------------------------------------------------------------------
 @name Style Attributes
 ---------------------------------------------------------------------------------------
*/

/** Adds rounded corners to the receiver.
 @param radius The corner radius to use.
 @param width The width of the image border
 @param color The color of the image border. Optional.
*/ 
- (void)setRoundedCornersWithRadius:(CGFloat)radius width:(CGFloat)width color:(UIColor *)color;

/**-------------------------------------------------------------------------------------
 @name Hierarchy Logging
 ---------------------------------------------------------------------------------------
*/

/** Recursively log the receiver and its subviews. */ 
- (void)logViewHierarchy;

/**-------------------------------------------------------------------------------------
 @name Animating Views
 ---------------------------------------------------------------------------------------
*/

/** Unlinks the receiver from its superview and its window, and removes it from the responder chain with animation. */ 
- (void)removeFromSuperviewAnimated;

/**-------------------------------------------------------------------------------------
 @name Bounds for Orientation
 ---------------------------------------------------------------------------------------
*/

/** Returns the bounds rectangle of the receiver adjusted for the current status bar orientation. 
 @return The bounds rectangle of the receiver adjusted for the current status bar orientation.
 */ 
- (CGRect)currentBounds;

/** Returns the bounds rectangle of the receiver adjusted for orientation. 
 @param orientation The interface orientation to use.
 @return The bounds rectangle of the receiver adjusted for orientation.
*/ 
- (CGRect)boundsForOrientation:(UIInterfaceOrientation)orientation;

/**-------------------------------------------------------------------------------------
 @name Configuring Position
 ---------------------------------------------------------------------------------------
*/

/** Shortcut for the receiver's frame.origin property. */ 
@property (nonatomic) CGPoint origin;

/** Shortcut for the receiver's frame.origin.x property. */
@property (nonatomic) CGFloat x;

/** Shortcut for the receiver's frame.origin.y property. */
@property (nonatomic) CGFloat y;

/**-------------------------------------------------------------------------------------
 @name Configuring Size
 ---------------------------------------------------------------------------------------
*/

/** Shortcut for the receiver's frame.size property. */ 
@property (nonatomic) CGSize size;

/** Shortcut for the receiver's frame.size.width property. */
@property (nonatomic) CGFloat width;

/** Shortcut for the receiver's frame.size.height property. */
@property (nonatomic) CGFloat height;

/**-------------------------------------------------------------------------------------
 @name Configuring Min, Mid, and Max Values
 ---------------------------------------------------------------------------------------
*/

/** Shortcut for the receiver's frame.origin.x property. */
@property (nonatomic) CGFloat minX;

/** Shortcut for the receiver's frame.origin.x + (frame.size.width / 2) value. */
@property (nonatomic) CGFloat midX;

/** Shortcut for the receiver's frame.origin.x + frame.size.width value. */
@property (nonatomic) CGFloat maxX;

/** Shortcut for the receiver's frame.origin.y property. */
@property (nonatomic) CGFloat minY;

/** Shortcut for the receiver's frame.origin.y + (frame.size.height / 2) value. */
@property (nonatomic) CGFloat midY;

/** Shortcut for the receiver's frame.origin.y + frame.size.height value. */
@property (nonatomic) CGFloat maxY;

@end