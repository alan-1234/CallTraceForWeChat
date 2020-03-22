//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class CMessageWrap, NSString;

@interface VoiceTransInfo : MMObject <PBCoding>
{
    _Bool showTransResult;
    _Bool _bAutoScrollUp;
    _Bool _bAutoTranslate;
    _Bool _bShowAnimation;
    _Bool _fromPreView;
    _Bool _hadLocalTranslateRet;
    unsigned int mesLocalId;
    long long msgServerId;
    unsigned long long msgCreateTime;
    NSString *translatedText;
    NSString *voiceId;
    long long status;
    NSString *_displayText;
    unsigned long long _translatedTime;
    unsigned long long _transStartTime;
    unsigned long long _fristTransTime;
    CMessageWrap *_messageWrap;
}

+ (void)initialize;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_voiceId;
+ (void)PBArrayAdd_showTransResult;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_mesLocalId;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) _Bool hadLocalTranslateRet; // @synthesize hadLocalTranslateRet=_hadLocalTranslateRet;
@property(nonatomic) unsigned long long fristTransTime; // @synthesize fristTransTime=_fristTransTime;
@property(nonatomic) unsigned long long transStartTime; // @synthesize transStartTime=_transStartTime;
@property(nonatomic) unsigned long long translatedTime; // @synthesize translatedTime=_translatedTime;
@property(nonatomic) _Bool fromPreView; // @synthesize fromPreView=_fromPreView;
@property(nonatomic) _Bool bShowAnimation; // @synthesize bShowAnimation=_bShowAnimation;
@property(nonatomic) _Bool bAutoTranslate; // @synthesize bAutoTranslate=_bAutoTranslate;
@property(nonatomic) _Bool bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) long long status; // @synthesize status;
@property(retain, nonatomic) NSString *voiceId; // @synthesize voiceId;
@property(nonatomic) _Bool showTransResult; // @synthesize showTransResult;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(nonatomic) unsigned long long msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId;
- (void).cxx_destruct;
- (void)setIdentifierParamsWithMsg:(id)arg1;
- (id)getIdentifier;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

