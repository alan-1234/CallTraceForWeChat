//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBJceStreamNew : NSObject
{
    char *_streamBuffer;
    int _streamSize;
    int _cursor;
}

@property(nonatomic) int cursor; // @synthesize cursor=_cursor;
@property(nonatomic) int streamSize; // @synthesize streamSize=_streamSize;
@property(nonatomic) char *streamBuffer; // @synthesize streamBuffer=_streamBuffer;
- (id)description;
- (id)data;
- (id)init;

@end

