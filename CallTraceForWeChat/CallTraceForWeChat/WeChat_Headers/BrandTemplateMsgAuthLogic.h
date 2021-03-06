//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WAPageSheetDelegate-Protocol.h"
#import "WASubscriptionMessagePageSheetDelegate-Protocol.h"

@class NSString, WASubscriptionMessageDataReporter, WASubscriptionMessageRequestListByIDCgi, WASubscriptionMessageRequestSubscribeCgi;
@protocol BrandTemplateMsgAuthLogicDelegate;

@interface BrandTemplateMsgAuthLogic : MMObject <WASubscriptionMessagePageSheetDelegate, WAPageSheetDelegate, MMTipsViewControllerDelegate>
{
    _Bool _cancel;
    id <BrandTemplateMsgAuthLogicDelegate> _delegate;
    NSString *_subscriptionUrl;
    NSString *_username;
    NSString *_msgContentByUrlEncoded;
    WASubscriptionMessageRequestListByIDCgi *_requestListByIDCgi;
    WASubscriptionMessageRequestSubscribeCgi *_requestSubscribeCgi;
    WASubscriptionMessageDataReporter *_dataReporter;
}

@property(retain, nonatomic) WASubscriptionMessageDataReporter *dataReporter; // @synthesize dataReporter=_dataReporter;
@property(retain, nonatomic) WASubscriptionMessageRequestSubscribeCgi *requestSubscribeCgi; // @synthesize requestSubscribeCgi=_requestSubscribeCgi;
@property(retain, nonatomic) WASubscriptionMessageRequestListByIDCgi *requestListByIDCgi; // @synthesize requestListByIDCgi=_requestListByIDCgi;
@property(copy, nonatomic) NSString *msgContentByUrlEncoded; // @synthesize msgContentByUrlEncoded=_msgContentByUrlEncoded;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *subscriptionUrl; // @synthesize subscriptionUrl=_subscriptionUrl;
@property(nonatomic) _Bool cancel; // @synthesize cancel=_cancel;
@property(nonatomic) __weak id <BrandTemplateMsgAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)subscriptionMessagePageSheet:(id)arg1 infoButtonClickedAtIndex:(unsigned long long)arg2;
- (void)subscriptionMessagePageSheet:(id)arg1 operationTypeChanged:(unsigned long long)arg2;
- (void)subscribeSuccessWithResult:(id)arg1 cacheMaxAge:(unsigned int)arg2;
- (id)containerViewController;
- (CDUnknownBlockType)requestSubscribeFailHandler;
- (CDUnknownBlockType)requestSubscribeSuccessHandler;
- (CDUnknownBlockType)requestListByIDFailHandler;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (CDUnknownBlockType)requestListByIDSucceessHandler;
- (void)sendSubscribeRequestWithViewModel:(id)arg1;
- (void)sendListRequest;
- (void)start;
- (id)initWithSubscriptionUrl:(id)arg1 username:(id)arg2 msgContent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

