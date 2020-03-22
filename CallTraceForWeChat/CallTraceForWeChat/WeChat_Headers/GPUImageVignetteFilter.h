//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageVignetteFilter : GPUImageFilter
{
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
    double _vignetteStart;
    double _vignetteEnd;
    struct GPUVector3 _vignetteColor;
    struct CGPoint _vignetteCenter;
}

@property(nonatomic) double vignetteEnd; // @synthesize vignetteEnd=_vignetteEnd;
@property(nonatomic) double vignetteStart; // @synthesize vignetteStart=_vignetteStart;
@property(nonatomic) struct GPUVector3 vignetteColor; // @synthesize vignetteColor=_vignetteColor;
@property(nonatomic) struct CGPoint vignetteCenter; // @synthesize vignetteCenter=_vignetteCenter;
- (id)init;

@end

