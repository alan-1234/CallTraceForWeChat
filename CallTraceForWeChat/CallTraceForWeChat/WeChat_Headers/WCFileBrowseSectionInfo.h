//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFileBrowseSectionInfo : NSObject
{
    NSMutableArray *_browseInfoArray;
    NSString *_sectionTitle;
    unsigned long long _beginTime;
    unsigned long long _endTime;
}

@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSMutableArray *browseInfoArray; // @synthesize browseInfoArray=_browseInfoArray;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

