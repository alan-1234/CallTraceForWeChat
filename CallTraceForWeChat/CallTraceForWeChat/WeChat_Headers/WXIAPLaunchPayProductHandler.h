//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MidasIAPPayDelegate-Protocol.h"

@class NSString, WXIAPInitMidasResult, WXIAPLaunchPayParameter;

@interface WXIAPLaunchPayProductHandler : MMObject <MidasIAPPayDelegate>
{
    WXIAPLaunchPayParameter *_parameter;
    WXIAPInitMidasResult *_midasInitData;
    CDUnknownBlockType _completion;
    WXIAPLaunchPayProductHandler *_selfRetain;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (void)launchPayWithParameter:(id)arg1 midasInitData:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) WXIAPLaunchPayProductHandler *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WXIAPInitMidasResult *midasInitData; // @synthesize midasInitData=_midasInitData;
@property(retain, nonatomic) WXIAPLaunchPayParameter *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (void)handleMidasResp:(id)arg1;
- (void)onResp:(id)arg1;
- (void)handleNeedLoginCallBack;
- (void)needLogin;
@property(readonly, copy) NSString *description;
- (void)callbackCompleteSuccess;
- (void)callbackCompleteFail:(id)arg1;
- (void)callbackCompleteCancel:(id)arg1;
- (void)start;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (id)initWithParameter:(id)arg1 midasInitData:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

