//
//  IZHairlineBorderView.m
//  IZHairlineBorderView
//
//  Created by Kim Hansaem on 2015. 8. 23..
//

#import "IZHairlineBorderView.h"

@implementation IZHairlineBorderView

- (void)drawRect:(CGRect)rect {
    [super drawRect:rect];

    // Drawing code
    CGContextRef context = UIGraphicsGetCurrentContext();
    if (context == nil) {
        return;
    }
    
    UIColor *color = self.borderColor;
    if (color == nil) {
        return;
    }
    
    CGFloat r, g, b, a;
    [color getRed:&r green:&g blue:&b alpha:&a];
    
    CGContextSetRGBFillColor(context, r, g, b, a);
    CGContextSetRGBStrokeColor(context, r, g, b, a);

    CGFloat borderWidth = self.thick ? 1.f : (1.f / [UIScreen mainScreen].scale);
    
    UIGraphicsPushContext(context);

    if (self.leftBorder) {
        CGRect r = CGRectMake(0, 0, borderWidth, CGRectGetHeight(rect));
        CGContextFillRect(context, r);
    }
    
    if (self.topBorder) {
        CGRect r = CGRectMake(0, 0, CGRectGetWidth(rect), borderWidth);
        CGContextFillRect(context, r);
    }
    
    if (self.rightBorder) {
        CGRect r = CGRectMake(CGRectGetWidth(rect) - borderWidth, 0, borderWidth, CGRectGetHeight(rect));
        CGContextFillRect(context, r);
    }
    
    if (self.bottomBorder) {
        CGRect r = CGRectMake(0, CGRectGetHeight(rect) - borderWidth, CGRectGetWidth(rect), borderWidth);
        CGContextFillRect(context, r);
    }
    
    UIGraphicsPopContext();
}

@end
