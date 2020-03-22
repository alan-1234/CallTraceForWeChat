//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "BlockViewControllerDelegate-Protocol.h"
#import "IPreEnterWechatLogicExt-Protocol.h"

@class BlockViewController, NSDictionary, NSString, OpenApiParameter;

@interface BaseOpenSDKHandler : MMObject <BlockViewControllerDelegate, IPreEnterWechatLogicExt>
{
    OpenApiParameter *_parameter;
    BlockViewController *_blockView;
    NSDictionary *_linkMap;
}

@property(retain, nonatomic) NSDictionary *linkMap; // @synthesize linkMap=_linkMap;
@property(retain, nonatomic) BlockViewController *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (void)onBlockViewControllerReturn;
- (void)onPreEnterWechatDone;
- (void)didNeedRefreshToken:(id)arg1;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (id)getExtTaransLinkParams;
- (void)realHandleReqAfterermissionValidation;
- (void)startPermissionValidation;
- (void)cancelHandler;
- (void)startHandler:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

