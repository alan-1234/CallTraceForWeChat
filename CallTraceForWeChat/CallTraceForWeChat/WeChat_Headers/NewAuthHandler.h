//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAppDataExt-Protocol.h"
#import "IPreEnterWechatLogicExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class IPadOAuthFromPhoneHandler, MMTipsViewController, NSString, OpenApiParameter, OpenSDKAuthorizeLoginManager, UINavigationController;

@interface NewAuthHandler : MMObject <MMWebViewDelegate, IAppDataExt, MMKernelExt, IPreEnterWechatLogicExt>
{
    OpenApiParameter *m_parameter;
    UINavigationController *m_oAuthViewController;
    _Bool m_isDoing;
    IPadOAuthFromPhoneHandler *m_oAuthFromPhoneHandler;
    OpenSDKAuthorizeLoginManager *m_nativeAuthManager;
    MMTipsViewController *m_alertConfirmVC;
    NSString *_m_nsScope;
    NSString *_m_nsState;
}

@property(retain, nonatomic) NSString *m_nsState; // @synthesize m_nsState=_m_nsState;
@property(retain, nonatomic) NSString *m_nsScope; // @synthesize m_nsScope=_m_nsScope;
- (void).cxx_destruct;
- (void)onIPadOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5;
- (void)onIPadOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onIPadOAuthCancel;
- (void)onNewOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5;
- (void)onNewOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onNewOAuthDeny;
- (void)onNewOAuthCancel;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (id)webViewFailToLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (id)limitString:(id)arg1 WithLimitLength:(unsigned int)arg2;
- (void)alertLaunchAppWithUrl:(id)arg1 confirmWording:(id)arg2 appIconUrl:(id)arg3 appNickname:(id)arg4 fromDegrade:(_Bool)arg5;
- (void)onOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5;
- (void)onOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)OnOAuthDeny;
- (void)OnOAuthCancel;
- (void)onPreEnterWechatDone;
- (void)removeOAuthView;
- (void)onRetry:(id)arg1;
- (id)createOAuthRequestWithOpenParameter;
- (void)createOAuthView;
- (_Bool)isABTestUseNativeOauth;
- (void)send3rdRespWithErrCode:(int)arg1 errStr:(id)arg2;
- (void)denyAllHandleAndReturn3rdApp;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)delayCancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (id)parseURLParams;
- (void)cancelWechatConnect;
- (void)startIPadOAuthInNativeView;
- (void)startIPadOAuthInWebview;
- (void)startWechatConnect:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

