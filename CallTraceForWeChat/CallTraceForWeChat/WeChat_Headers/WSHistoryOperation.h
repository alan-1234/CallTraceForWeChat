//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WSHistoryOperation : NSObject <PBCoding>
{
    unsigned int sugType;
    NSString *string;
}

+ (void)initialize;
+ (void)PBArrayAdd_sugType;
+ (void)PBArrayAdd_string;
@property(nonatomic) unsigned int sugType; // @synthesize sugType;
@property(retain, nonatomic) NSString *string; // @synthesize string;
- (void).cxx_destruct;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

