//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBTrafficBlockData : NSObject
{
    int _level;
    int _blockId;
    unsigned int _timeStamp;
    CDStruct_02837cd9 _mapRect;
}

@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int blockId; // @synthesize blockId=_blockId;
@property(nonatomic) int level; // @synthesize level=_level;

@end

