//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCSnsABTestActionResult : NSObject
{
    unsigned int experType;
    NSString *dataItemId;
    NSMutableArray *arrTipActionResult;
    unsigned int startTime;
    unsigned int endTime;
}

@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *dataItemId; // @synthesize dataItemId;
@property(nonatomic) unsigned int experType; // @synthesize experType;
- (void).cxx_destruct;
- (void)addTipActionResult:(id)arg1;
- (void)tryAddTimeStamp:(_Bool)arg1 endTime:(_Bool)arg2;
- (_Bool)hasActionResult;
- (id)genActionResult;
- (void)resetResult;
- (id)init;

@end

