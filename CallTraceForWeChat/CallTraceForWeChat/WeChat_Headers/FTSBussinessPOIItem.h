//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface FTSBussinessPOIItem : MMObject
{
    NSString *_title;
    NSString *_url;
    NSString *_postion;
    NSString *_detailInfo;
    unsigned int _starLevel;
    NSString *_average;
    unsigned int _poiFlag;
}

+ (id)fromServerObject:(id)arg1;
@property(nonatomic) unsigned int poiFlag; // @synthesize poiFlag=_poiFlag;
@property(retain, nonatomic) NSString *average; // @synthesize average=_average;
@property(nonatomic) unsigned int starLevel; // @synthesize starLevel=_starLevel;
@property(retain, nonatomic) NSString *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *postion; // @synthesize postion=_postion;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

