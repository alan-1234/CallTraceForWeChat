//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "ISysCallCheckExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MonoServiceLogicExt-Protocol.h"
#import "WARecorderDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WABaseRecorder;
@protocol IJSContextPluginDelegate;

@interface WAJSContextPlugin_Recorder : WAJSContextPluginBase <IRecordPermissionCheckExt, IVOIPUILogicMgrExt, MonoServiceLogicExt, WARecorderDelegate, ISysCallCheckExt>
{
    _Bool _isCheckingPermission;
    _Bool _isInterrupting;
    id <IJSContextPluginDelegate> _resultDelegate;
    WABaseRecorder *_recorder;
    NSMutableDictionary *_settings;
}

@property(nonatomic) _Bool isInterrupting; // @synthesize isInterrupting=_isInterrupting;
@property(nonatomic) _Bool isCheckingPermission; // @synthesize isCheckingPermission=_isCheckingPermission;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) WABaseRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onEndInterruption;
- (void)interruptRecord;
- (void)updateAllWebViewTitle:(_Bool)arg1;
- (void)onCallBackFileError;
- (void)onCallBackStopEvent:(id)arg1;
- (void)onCallBackRecordState:(id)arg1 params:(id)arg2;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(_Bool)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)delayStop;
- (void)stopRecorder;
- (void)resumeRecorder;
- (void)pauseRecorder;
- (void)realStartRecord;
- (void)startRecord:(id)arg1 sampleRate:(unsigned long long)arg2 encodeBitRate:(unsigned long long)arg3 channels:(unsigned long long)arg4 duaration:(double)arg5 frameByteSize:(unsigned long long)arg6 audioSource:(id)arg7;
- (id)generateFileRecordFilePath:(unsigned long long)arg1;
- (id)recordCachePath;
- (id)cacheRootPath;
- (void)unregisterExt;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

