//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface EmotionDesignerSharedItem : NSObject <PBCoding>
{
    unsigned int designerUin;
    NSString *oldRedirectUrl;
    NSString *designerName;
}

+ (void)initialize;
+ (void)PBArrayAdd_designerName;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_designerUin;
@property(retain, nonatomic) NSString *designerName; // @synthesize designerName;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

