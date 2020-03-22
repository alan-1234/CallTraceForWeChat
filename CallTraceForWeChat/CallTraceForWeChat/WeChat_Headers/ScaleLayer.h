//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNNKernel.h"

@class CNNBuffer;

@interface ScaleLayer : CNNKernel
{
    CNNBuffer *_dimensionsBuffer;
    CNNBuffer *_scaleXBuffer;
    CNNBuffer *_scaleYBuffer;
}

@property(retain, nonatomic) CNNBuffer *scaleYBuffer; // @synthesize scaleYBuffer=_scaleYBuffer;
@property(retain, nonatomic) CNNBuffer *scaleXBuffer; // @synthesize scaleXBuffer=_scaleXBuffer;
@property(retain, nonatomic) CNNBuffer *dimensionsBuffer; // @synthesize dimensionsBuffer=_dimensionsBuffer;
- (void).cxx_destruct;
- (void)findBestThreadgroupsPerGrid:(CDStruct_14f26992 *)arg1 threadsPerThreadgroup:(CDStruct_14f26992 *)arg2;
- (_Bool)encodeWithCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)constructWithLayerData:(const struct layer_res *)arg1;
- (id)initWithInputDimension:(struct CNNDimension)arg1 outputDimension:(struct CNNDimension)arg2 device:(id)arg3 library:(id)arg4;

@end

