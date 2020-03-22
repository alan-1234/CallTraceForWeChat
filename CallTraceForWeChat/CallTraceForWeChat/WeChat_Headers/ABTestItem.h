//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSDictionary, NSString;

@interface ABTestItem : MMObject <PBCoding>
{
    _Bool bNoReport;
    unsigned int uiSeq;
    unsigned int uiBeginTime;
    unsigned int uiEndTime;
    unsigned int uiPriorityLevel;
    NSString *nsLayerId;
    NSString *nsExpId;
    NSDictionary *dicExpArgs;
    NSString *nsBizId;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_nsBizId;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_dicExpArgs;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_nsLayerId;
@property(nonatomic) unsigned int uiPriorityLevel; // @synthesize uiPriorityLevel;
@property(retain, nonatomic) NSString *nsBizId; // @synthesize nsBizId;
@property(nonatomic) _Bool bNoReport; // @synthesize bNoReport;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime;
@property(nonatomic) unsigned int uiSeq; // @synthesize uiSeq;
@property(retain, nonatomic) NSDictionary *dicExpArgs; // @synthesize dicExpArgs;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId;
@property(retain, nonatomic) NSString *nsLayerId; // @synthesize nsLayerId;
- (void).cxx_destruct;
- (unsigned int)getPriorityLevel;
- (_Bool)abtestRunning;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
