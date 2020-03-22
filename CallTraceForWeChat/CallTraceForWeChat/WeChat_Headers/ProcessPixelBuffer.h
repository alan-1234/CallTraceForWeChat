//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUImageNewBeautifyFilter, GPUImageRawDataInput;
@protocol OS_dispatch_semaphore, ProcessPixelBufferDelegate;

@interface ProcessPixelBuffer : NSObject
{
    GPUImageRawDataInput *_rawDataInputFilter;
    GPUImageNewBeautifyFilter *_beautityFilterRGB;
    GPUImageRawDataInput *_rawDataInputFilterRGB;
    char *pRGBAOut;
    _Bool showMask;
    int frameCnt;
    struct __CVBuffer *imageBufferOut;
    int beautyMode;
    id <ProcessPixelBufferDelegate> _delegate;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct __CVBuffer *_imageBuffer;
    char *_pOutY;
    char *_pOutUV;
    unsigned long long _imgWidth;
    unsigned long long _imgHeight;
    unsigned long long _imgWidthOut;
    unsigned long long _imgHeightOut;
}

@property(nonatomic) unsigned long long imgHeightOut; // @synthesize imgHeightOut=_imgHeightOut;
@property(nonatomic) unsigned long long imgWidthOut; // @synthesize imgWidthOut=_imgWidthOut;
@property(nonatomic) unsigned long long imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) unsigned long long imgWidth; // @synthesize imgWidth=_imgWidth;
@property(nonatomic) char *pOutUV; // @synthesize pOutUV=_pOutUV;
@property(nonatomic) char *pOutY; // @synthesize pOutY=_pOutY;
@property(nonatomic) struct __CVBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) id <ProcessPixelBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer *)processWithRGBACVPixelBuffer:(struct __CVBuffer *)arg1;
- (void)outputRGBPixelBuffer;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setBrightness:(double)arg1;
- (void)setRed:(double)arg1;
- (void)setShowMode:(int)arg1;
- (void)setIntensity:(double)arg1;
- (void)setRegionShow:(int)arg1;
- (struct __CVBuffer *)imageToYUVPixelBuffer:(struct CGImage *)arg1;
- (void)RGBA32to2PlanarYpCbCr:(struct vImage_Buffer)arg1 dstPtr:(void **)arg2 pixelFormat:(int)arg3;
- (struct __CVBuffer *)imageToRGBPixelBuffer:(struct CGImage *)arg1;
- (id)init:(float)arg1;

@end

