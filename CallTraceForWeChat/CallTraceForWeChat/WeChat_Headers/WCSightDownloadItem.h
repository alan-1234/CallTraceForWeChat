//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WCSightDownloadItem : MMObject
{
    _Bool _isPreload;
    unsigned int _scene;
    unsigned long long _startTime;
}

+ (id)itemWithStartTime:(unsigned long long)arg1 isPreload:(_Bool)arg2 scene:(unsigned int)arg3;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;

@end

