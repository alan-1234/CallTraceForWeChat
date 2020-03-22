//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface H5VideoProxyManager : MMService <MMServiceProtocol>
{
    _Bool _isInit;
    _Bool _isNeedReInitFromSuspend;
    id <WXCustomWebViewControllerProtocol> _proxyWebviewController;
}

@property(nonatomic) _Bool isNeedReInitFromSuspend; // @synthesize isNeedReInitFromSuspend=_isNeedReInitFromSuspend;
@property(nonatomic) __weak id <WXCustomWebViewControllerProtocol> proxyWebviewController; // @synthesize proxyWebviewController=_proxyWebviewController;
- (void).cxx_destruct;
- (void)tryReInitProxyWhenEnterForground;
- (void)tryDeinitProxyWhenSuspend;
- (void)reportInitIDKeyForResult:(int)arg1;
- (int)preload:(int)arg1 Time:(int)arg2;
- (void)setPlayState:(int)arg1;
- (void)setRemainTime:(int)arg1 PlayDataId:(int)arg2;
- (id)startPlay:(id)arg1;
- (void)stopPlay:(int)arg1;
- (void)doDeinitProxy;
- (void)deinitProxy;
- (_Bool)tryInit;
- (_Bool)initProxyFromWebVC:(id)arg1;
- (void)onServiceEnterForeground;
- (void)applicationWillSuspend;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

