//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class FinderExtendedReading, FinderLocation, FinderMediaExtra, FinderTopic, NSMutableArray, NSString;

@interface FinderObjectDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @dynamic extReading;
@property(retain, nonatomic) FinderMediaExtra *extra; // @dynamic extra;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *media; // @dynamic media;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) FinderTopic *topic; // @dynamic topic;

@end

