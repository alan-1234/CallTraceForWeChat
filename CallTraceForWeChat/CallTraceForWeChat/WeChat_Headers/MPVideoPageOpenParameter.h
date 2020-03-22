//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSNumber, NSString;

@interface MPVideoPageOpenParameter : MMObject <PBCoding>
{
    unsigned int duration;
    unsigned int videoWidth;
    unsigned int videoHeight;
    NSString *videoId;
    NSNumber *videoInitialTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoInitialTime;
+ (void)PBArrayAdd_videoHeight;
+ (void)PBArrayAdd_videoWidth;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_videoId;
@property(retain, nonatomic) NSNumber *videoInitialTime; // @synthesize videoInitialTime;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth;
@property(nonatomic) unsigned int duration; // @synthesize duration;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

