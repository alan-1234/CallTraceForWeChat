//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXIModule-Protocol.h"

@class NSString;

@interface TXCModule : NSObject <TXIModule>
{
    NSString *_id;
}

- (void).cxx_destruct;
- (id)stringValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (id)stringValueForKey:(int)arg1;
- (double)doubleValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (double)doubleValueForKey:(int)arg1;
- (long long)intValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (long long)intValueForKey:(int)arg1;
- (_Bool)setStatusValue:(id)arg1 forKey:(int)arg2 Key2:(unsigned short)arg3;
- (_Bool)setStatusValue:(id)arg1 forKey:(int)arg2;
- (id)getID;
- (void)clearID;
- (void)setID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

