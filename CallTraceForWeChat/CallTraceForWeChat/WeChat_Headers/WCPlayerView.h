//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IVOIPWindowExt-Protocol.h"
#import "WCPlayerProtocol-Protocol.h"

@class NSString, UIImageView, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter;
@protocol WCPlayerControlProtocol;

@interface WCPlayerView : UIView <WCPlayerProtocol, IVOIPWindowExt>
{
    _Bool _bFirstReadyToPlay;
    float _lastPlayBackRate;
    WCPlayerReporter *_reporter;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    UIImageView *_thumbImageView;
    UIView<WCPlayerControlProtocol> *_controlView;
    CDUnknownBlockType _observePlayCallbackBlock;
}

+ (id)generatePlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 ControlView:(id)arg3;
@property(nonatomic) _Bool bFirstReadyToPlay; // @synthesize bFirstReadyToPlay=_bFirstReadyToPlay;
@property(nonatomic) float lastPlayBackRate; // @synthesize lastPlayBackRate=_lastPlayBackRate;
@property(copy, nonatomic) CDUnknownBlockType observePlayCallbackBlock; // @synthesize observePlayCallbackBlock=_observePlayCallbackBlock;
@property(nonatomic) __weak UIView<WCPlayerControlProtocol> *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
- (void).cxx_destruct;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)addNotification;
- (void)fetchAllVideoData;
- (id)generateReporterWithPlayerScene:(unsigned long long)arg1;
- (void)changeToDownloadFirstWithDownloadMode:(unsigned long long)arg1;
- (void)configWithPlayerInfo:(id)arg1 ControlView:(id)arg2;
- (_Bool)shouldUpdatePlayArgs;
- (void)setThumbImageHidden:(_Bool)arg1;
- (void)setThumbImage:(id)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)setThumbImageViewContentWithWCPlayerContentMode:(long long)arg1;
- (void)dealloc;
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 ControlView:(id)arg3;
- (void)attachVideoModel:(id)arg1;
- (id)videoModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

