//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class FinderExtendedReading, FinderLocation, FinderTopic, NSArray, NSString, WCFinderMediaInfo, WCFinderParseContentModel;

@interface WCFinderMedia : MMObject <PBCoding, WCTColumnCoding>
{
    NSString *title;
    NSArray *mediaArray;
    unsigned long long mediaType;
    NSString *extraText;
    FinderLocation *location;
    FinderExtendedReading *extReading;
    FinderTopic *topic;
    NSString *contentHighlightString;
    WCFinderParseContentModel *parseContentModel;
}

+ (id)finderMediaFromDesc:(id)arg1;
+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_parseContentModel;
+ (void)PBArrayAdd_contentHighlightString;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_extraText;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_title;
@property(retain, nonatomic) WCFinderParseContentModel *parseContentModel; // @synthesize parseContentModel;
@property(retain, nonatomic) NSString *contentHighlightString; // @synthesize contentHighlightString;
@property(retain, nonatomic) FinderTopic *topic; // @synthesize topic;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @synthesize extReading;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location;
@property(copy, nonatomic) NSString *extraText; // @synthesize extraText;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSArray *mediaArray; // @synthesize mediaArray;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)genObjectDesc;
@property(readonly, nonatomic) WCFinderMediaInfo *currentMedia;
- (struct NSObject *)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

