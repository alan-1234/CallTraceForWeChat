//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WCFinderNotifyCenterViewModelDelegate <NSObject>

@optional
- (void)notifyCenterLoadMoreDataSuccessfulWithType:(unsigned long long)arg1;
- (void)notifyCenterLoadMoreDataFailWithType:(unsigned long long)arg1;
- (void)notifyCenterLoadNoMoreDataWithType:(unsigned long long)arg1;
- (void)notifyCenterNeedReloadWithType:(unsigned long long)arg1 isLoadMore:(_Bool)arg2;
@end

