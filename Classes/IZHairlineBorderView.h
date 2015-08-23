//
//  IZHairlineBorderView.h
//
//  @version 0.1
//  @author Hansaem Kim
//

// Copyright (c) 2015 Hansaem Kim.
// This code is distributed under the terms and conditions of the MIT license.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

/**
 * This view draws hairline borders(1 pixel width related device scale) or
 * thick borders(1 pixel logical width).
 */
IB_DESIGNABLE
@interface IZHairlineBorderView : UIView

/**
 * For drawing a border on left edge, set this property set to YES.
 * The default value is NO.
 */
@property (nonatomic, assign) IBInspectable BOOL leftBorder;

/**
 * For drawing a border on right edge, set this property set to YES.
 * The default value is NO.
 */
@property (nonatomic, assign) IBInspectable BOOL rightBorder;

/**
 * For drawing a border on top edge, set this property set to YES.
 * The default value is NO.
 */
@property (nonatomic, assign) IBInspectable BOOL topBorder;

/**
 * For drawing a border on bottom edge, set this property set to YES.
 * The default value is NO.
 */
@property (nonatomic, assign) IBInspectable BOOL bottomBorder;

/**
 * Set border's color will be drawn. The defaul value is nil.
 * When nil is set, nothing is happened.
 */
@property (nonatomic, strong) IBInspectable UIColor *borderColor;

/**
 * For drawing thick borders, set this property set to YES. The default value is NO.
 */
@property (nonatomic, assign) IBInspectable BOOL thick;

@end
