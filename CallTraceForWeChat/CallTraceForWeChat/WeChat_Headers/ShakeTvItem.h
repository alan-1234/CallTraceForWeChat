//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface ShakeTvItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString *tvId;
    NSString *title;
    NSString *topic;
    NSString *thumbUrl;
    NSString *playUrl;
    NSString *playStatid;
    NSString *actionUrl;
    NSString *actionStatid;
    NSString *shareUrl;
    NSMutableArray *actionLists;
    _Bool isAutoplay;
    NSString *subTitle;
}

+ (void)initialize;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_isAutoplay;
+ (void)PBArrayAdd_actionLists;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_actionStatid;
+ (void)PBArrayAdd_actionUrl;
+ (void)PBArrayAdd_playStatid;
+ (void)PBArrayAdd_playUrl;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_tvId;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(nonatomic) _Bool isAutoplay; // @synthesize isAutoplay;
@property(retain, nonatomic) NSMutableArray *actionLists; // @synthesize actionLists;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl;
@property(retain, nonatomic) NSString *actionStatid; // @synthesize actionStatid;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl;
@property(retain, nonatomic) NSString *playStatid; // @synthesize playStatid;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *tvId; // @synthesize tvId;
- (void).cxx_destruct;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

