//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTMsgSectionData, MPPageRelatedInfo, NSString, ReaderWrap;

@protocol BTMsgSectionDataDelegate <NSObject>
- (MPPageRelatedInfo *)onMsgSectionGetRelatedInfoForReaderWrap:(ReaderWrap *)arg1;
- (NSString *)onMsgSectionGetPageIdentifierForReaderWrap:(ReaderWrap *)arg1;
- (void)onMsgSectionHeightChange:(BTMsgSectionData *)arg1;
@end

