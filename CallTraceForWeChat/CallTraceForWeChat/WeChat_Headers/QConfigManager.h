//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QMConnectionItemDelegate-Protocol.h"

@class NSMutableDictionary, NSString, QMediator, QStatisticer;
@protocol QConfigManagerDelegate;

@interface QConfigManager : NSObject <QMConnectionItemDelegate>
{
    int _unfinishedTasks;
    id <QConfigManagerDelegate> _delegate;
    QMediator *_mediator;
    QStatisticer *_statistics;
    NSString *_businessKey;
    NSString *_configDirectoryPath;
    NSString *_versionPlistPath;
    NSMutableDictionary *_versionDict;
    NSMutableDictionary *_tempVersionDict;
    NSMutableDictionary *_indoorDict;
}

@property(retain, nonatomic) NSMutableDictionary *indoorDict; // @synthesize indoorDict=_indoorDict;
@property(nonatomic) int unfinishedTasks; // @synthesize unfinishedTasks=_unfinishedTasks;
@property(retain, nonatomic) NSMutableDictionary *tempVersionDict; // @synthesize tempVersionDict=_tempVersionDict;
@property(retain, nonatomic) NSMutableDictionary *versionDict; // @synthesize versionDict=_versionDict;
@property(copy, nonatomic) NSString *versionPlistPath; // @synthesize versionPlistPath=_versionPlistPath;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(nonatomic) __weak QStatisticer *statistics; // @synthesize statistics=_statistics;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) __weak id <QConfigManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupVersionDict;
- (void)setupVersionPlist;
- (id)initWithConfigPreference:(id)arg1;
- (id)getLocalMd5;
- (id)createRequestDataDict:(id)arg1;
- (id)assembleIndoorConfigStats:(id)arg1;
- (void)recordIndoorConfig;
- (void)recordIndoorConfigError:(id)arg1;
- (_Bool)hasIndoorPrevilege;
- (id)getIndoorConfigKey;
- (id)getIndoorConfigName;
- (id)getMd5KeyFromVersionKey:(id)arg1;
- (void)checkStyleIDStringChange;
- (id)appendParameterStringFor:(id)arg1;
- (id)sdkVersion;
- (id)apiKey;
- (void)statisticMapConfigFileExist;
- (void)statisticUpdateFailInfo:(id)arg1;
- (void)statisticUpdateSucceess;
- (void)onUpdateDidFailWithError:(id)arg1;
- (void)onUpdateDidFinish;
- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)saveData:(id)arg1 fileName:(id)arg2 key:(id)arg3;
- (void)launchResourceUpdate:(id)arg1;
- (id)getCurrentIndoorConfigFilePath;
- (id)getCurrentConfigVersions;
- (void)checkConfigUpdate;
- (struct FileUpdateReq)constructRequestWithName:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

