//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EVADProcessorDelegate-Protocol.h"
#import "UploadStreamVoiceDataMgrDelegate-Protocol.h"

@class EVADProcessor, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, StreamInputResult, UploadStreamVoiceDataMgr;
@protocol MMNewVoiceInputCacheLogicDelegate;

@interface MMNewVoiceInputCacheLogic : NSObject <UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate>
{
    _Bool _bStartTrans;
    unsigned int _audioId;
    unsigned int _languageType;
    unsigned int _voiceOffset;
    unsigned int _currentInputId;
    unsigned int _processVoiceCount;
    NSString *_nsChatName;
    id <MMNewVoiceInputCacheLogicDelegate> _delegate;
    EVADProcessor *_evad;
    UploadStreamVoiceDataMgr *_uploadMgr;
    NSMutableArray *_voiceIdArray;
    NSMutableData *_cacheData;
    NSString *_sessionId;
    NSString *_currentVoiceId;
    StreamInputResult *_result;
    NSMutableDictionary *_sequenceMap;
    NSMutableArray *_arrInputQueueItem;
}

@property(retain, nonatomic) NSMutableArray *arrInputQueueItem; // @synthesize arrInputQueueItem=_arrInputQueueItem;
@property(retain, nonatomic) NSMutableDictionary *sequenceMap; // @synthesize sequenceMap=_sequenceMap;
@property(retain) StreamInputResult *result; // @synthesize result=_result;
@property(nonatomic) unsigned int processVoiceCount; // @synthesize processVoiceCount=_processVoiceCount;
@property(nonatomic) unsigned int currentInputId; // @synthesize currentInputId=_currentInputId;
@property(nonatomic) unsigned int voiceOffset; // @synthesize voiceOffset=_voiceOffset;
@property(nonatomic) unsigned int languageType; // @synthesize languageType=_languageType;
@property(copy, nonatomic) NSString *currentVoiceId; // @synthesize currentVoiceId=_currentVoiceId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableData *cacheData; // @synthesize cacheData=_cacheData;
@property(retain, nonatomic) NSMutableArray *voiceIdArray; // @synthesize voiceIdArray=_voiceIdArray;
@property(nonatomic) _Bool bStartTrans; // @synthesize bStartTrans=_bStartTrans;
@property(retain, nonatomic) UploadStreamVoiceDataMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) EVADProcessor *evad; // @synthesize evad=_evad;
@property(nonatomic) __weak id <MMNewVoiceInputCacheLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
- (void).cxx_destruct;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onGetText:(id)arg1;
- (void)onVADDetectDelayVoice:(id)arg1 Pcm:(id)arg2;
- (void)onVADFilterdSpeakingVoice:(id)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(_Bool)arg3;
- (void)onVADDetectFirstStart:(id)arg1;
- (_Bool)shouldAcceptFirstSlice;
- (void)createNewVoiceId;
- (void)processDataWithEvad:(id)arg1;
- (void)processVoiceData:(id)arg1;
- (void)endProcessVoiceData;
- (void)startProcessVoiceData;
- (unsigned int)reTransVoiceWithLanguage:(unsigned int)arg1;
- (void)stopTransVoiceWithInputId:(unsigned int)arg1;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)arg1;
- (_Bool)hadAnyDataSliceToStartTrans;
- (void)checkAddVoiceItemWithCurIndex:(id)arg1;
- (void)setUserName:(id)arg1 AudioId:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

