//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt-Protocol.h"

@class NSString, OpenApiParameter;

@interface OpenMiniProgramHandler : MMObject <IPreEnterWechatLogicExt>
{
    OpenApiParameter *_parameter;
}

@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (void)onPreEnterWechatDone;
- (id)encodeUrl:(id)arg1;
- (id)translateToInternalWebviewUrlString;
- (void)doOpenMiniProgram;
- (void)startHandle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

