//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WCSTokenPickData;

@interface WCSTokenPickLogic : NSObject
{
    _Bool _isTokenSearching;
    _Bool _isTokenResulting;
    _Bool _bNeedDisplayIndexContacts;
    NSString *_rawQuery;
    NSMutableArray *_arrKeywords;
    NSMutableArray *_arrTokens;
    NSArray *_arrIndexTitles;
    NSMutableArray *_arrLastSelectedTokens;
    WCSTokenPickData *_lastSelectedRecommendToken;
    NSMutableArray *_arrLastIndexContactTokens;
    NSMutableDictionary *_dicSelectedContact;
    NSMutableDictionary *_dicSelectedIndex;
}

@property(retain, nonatomic) NSMutableDictionary *dicSelectedIndex; // @synthesize dicSelectedIndex=_dicSelectedIndex;
@property(retain, nonatomic) NSMutableDictionary *dicSelectedContact; // @synthesize dicSelectedContact=_dicSelectedContact;
@property(retain, nonatomic) NSMutableArray *arrLastIndexContactTokens; // @synthesize arrLastIndexContactTokens=_arrLastIndexContactTokens;
@property(retain, nonatomic) WCSTokenPickData *lastSelectedRecommendToken; // @synthesize lastSelectedRecommendToken=_lastSelectedRecommendToken;
@property(retain, nonatomic) NSMutableArray *arrLastSelectedTokens; // @synthesize arrLastSelectedTokens=_arrLastSelectedTokens;
@property(retain, nonatomic) NSArray *arrIndexTitles; // @synthesize arrIndexTitles=_arrIndexTitles;
@property(nonatomic) _Bool bNeedDisplayIndexContacts; // @synthesize bNeedDisplayIndexContacts=_bNeedDisplayIndexContacts;
@property(retain, nonatomic) NSMutableArray *arrTokens; // @synthesize arrTokens=_arrTokens;
@property(retain, nonatomic) NSMutableArray *arrKeywords; // @synthesize arrKeywords=_arrKeywords;
@property(retain, nonatomic) NSString *rawQuery; // @synthesize rawQuery=_rawQuery;
@property(nonatomic) _Bool isTokenResulting; // @synthesize isTokenResulting=_isTokenResulting;
@property(nonatomic) _Bool isTokenSearching; // @synthesize isTokenSearching=_isTokenSearching;
- (void).cxx_destruct;
- (_Bool)hasSelectedIndexResult;
- (long long)firstIndexOfIndexContactToken;
- (void)addOneSectionToTokensFromIndex:(long long)arg1;
- (void)insertRecommendCOntactPickData:(id)arg1;
- (id)getRecommendGroupPickData;
- (id)getRecommendContactPickData;
- (id)getIndexContactTokenDatas;
- (BOOL)getTokenDataTypeForSelectedContact:(id)arg1;
- (long long)getSectionForSelectedContact:(id)arg1;
- (void)handleNilQueryChanged;
- (void)cacheSelectedTokens;
- (_Bool)hasTokenResultCache;
- (_Bool)hasSelectedTokenResult;
- (void)parseQuery:(id)arg1;
- (id)init;

@end

