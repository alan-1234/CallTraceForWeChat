//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIBezierPath, UIColor, WCSVGGradient;

@interface WCSVGStyledPath : NSObject
{
    UIBezierPath *_path;
    UIColor *_fillColor;
    WCSVGGradient *_fillGradient;
    UIColor *_strokeColor;
    double _strokeWidth;
    NSArray *_affineTransforms;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) NSArray *affineTransforms; // @synthesize affineTransforms=_affineTransforms;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) WCSVGGradient *fillGradient; // @synthesize fillGradient=_fillGradient;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;
- (void)drawStyledPathInContext:(struct CGContext *)arg1 tintColor:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

