//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WAAppItemData;

@interface WAStarMoveInfo : MMObject
{
    unsigned long long _moveType;
    WAAppItemData *_moveItem;
    WAAppItemData *_toPreItem;
    WAAppItemData *_toNextItem;
}

@property(retain, nonatomic) WAAppItemData *toNextItem; // @synthesize toNextItem=_toNextItem;
@property(retain, nonatomic) WAAppItemData *toPreItem; // @synthesize toPreItem=_toPreItem;
@property(retain, nonatomic) WAAppItemData *moveItem; // @synthesize moveItem=_moveItem;
@property(nonatomic) unsigned long long moveType; // @synthesize moveType=_moveType;
- (void).cxx_destruct;

@end

