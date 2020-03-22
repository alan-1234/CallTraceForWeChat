//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface WABackgroundFetchMgr : MMService <MMServiceProtocol>
{
}

- (id)getPreFetchData:(id)arg1;
- (void)tryDeleteExpiredData;
- (void)tryDeleteUnstarData;
- (void)handlePeriodFetchResponse:(id)arg1;
- (void)handlePreFetchResponse:(id)arg1 Request:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (_Bool)asyncPreFetchDataIfNeed:(id)arg1 RelativeURL:(id)arg2 EnterScene:(unsigned int)arg3;
- (void)periodFetchData:(id)arg1;
- (id)getFilteredListIfNotExceedTime:(id)arg1;
- (id)getRecentUseMyStarWeAppList;
- (id)getRecentUseWeAppList;
- (void)fetchPeriodData;
- (void)onServiceEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

