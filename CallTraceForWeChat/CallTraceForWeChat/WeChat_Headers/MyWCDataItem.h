//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface MyWCDataItem : NSObject <WCTTableCoding>
{
    NSString *_m_maID;
    NSData *_m_maBuffer;
}

+ (void)__wcdb_column_constraint_3:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_maBuffer;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_maID;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSData *m_maBuffer; // @synthesize m_maBuffer=_m_maBuffer;
@property(retain, nonatomic) NSString *m_maID; // @synthesize m_maID=_m_maID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
