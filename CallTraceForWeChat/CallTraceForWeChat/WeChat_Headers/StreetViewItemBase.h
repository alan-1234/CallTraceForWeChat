//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface StreetViewItemBase : NSObject
{
    int _type;
    id _streetViewItem;
}

+ (id)getStreetViewItemFromXml:(id)arg1 andType:(int)arg2;
@property(retain, nonatomic) id streetViewItem; // @synthesize streetViewItem=_streetViewItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

