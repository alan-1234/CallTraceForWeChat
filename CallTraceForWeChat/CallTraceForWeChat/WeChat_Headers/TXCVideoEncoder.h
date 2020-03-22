//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXIVideoEncoder;

@interface TXCVideoEncoder : NSObject
{
    _Bool _isRunning;
    int _encoderType;
    TXIVideoEncoder *_videoEncoder;
}

+ (_Bool)hasEncoder:(int)arg1;
+ (_Bool)supportMultipassEncoding;
+ (id)encoder:(int)arg1;
@property(retain) TXIVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) int encoderType; // @synthesize encoderType=_encoderType;
- (void).cxx_destruct;
- (void)setFirstPassEncodeFinished:(CDUnknownBlockType)arg1;
- (long long)realGop;
- (long long)encodeFrameCount;
- (long long)realFPS;
- (long long)realBitrate;
- (void)restartIDR;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 recvTimestamp:(long long)arg3;
- (void)setEncodeFps:(long long)arg1;
- (void)setEncodeIdrFpsFromQos:(long long)arg1;
- (void)setBitrateFromQos:(long long)arg1 totalBitrate:(long long)arg2;
- (void)setBitrate:(long long)arg1;
- (void)setNotifyDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)finishPushSampleBuffer;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (long long)stop;
- (long long)startWith:(struct TXSVideoEncoderParam *)arg1;
- (void)setID:(id)arg1;
- (void)enableNearestRPS:(long long)arg1;
- (void)dealloc;
- (void)createEncoderWithType:(int)arg1;
- (id)initBy:(int)arg1;

@end
