//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCSessionVCStackItem : MMObject
{
    NSString *_pageName;
    unsigned long long _hashCode;
}

@property(nonatomic) unsigned long long hashCode; // @synthesize hashCode=_hashCode;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1 withHashCode:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)toString;

@end

