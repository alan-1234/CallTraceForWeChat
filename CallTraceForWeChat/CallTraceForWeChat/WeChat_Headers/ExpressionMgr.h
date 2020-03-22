//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMEmoticonResExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ExpressionMgr : MMService <MMEmoticonResExt, MMServiceProtocol, IMMLanguageMgrExt>
{
    NSString *m_nsTotalEmoticonRegex;
    NSArray *m_qqEmojiKeyList;
    NSArray *m_emojiCodes;
    NSArray *m_emojiDescription;
    NSDictionary *m_emojiDescDic;
    NSDictionary *m_expressionWrapDic;
    NSDictionary *m_descToExpressionWrapDic;
    NSString *m_newEmojiConfigDirPath;
    NSString *m_emojiPanelConfiDirPath;
    NSArray *m_recentUseKeyArray;
    NSString *m_recentUseDataPath;
}

- (void).cxx_destruct;
- (id)getCurrentLanDescStrArray;
- (id)getExpressionSymbolArray;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)sendEmojiWithKey:(id)arg1;
- (id)getRecentUseKeyArray;
- (void)dealloc;
- (id)getEmojiDescriptionAtIndex:(unsigned long long)arg1;
- (void)onLanguageChange;
- (id)getDescStrByEmoji:(id)arg1;
- (unsigned int)countOfEmoji:(id)arg1;
- (struct _NSRange)rangeOfEmoticon:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)getDescStrByExpression:(id)arg1;
- (id)getEmojiBoardKeyList;
- (_Bool)loadQQEmotionImageByExpression:(id)arg1 isSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getImageByExpression:(id)arg1;
- (void)onLocalMemoryWarning;
- (void)loadQQEmojiKeyList;
- (id)valueForKey:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (void)loadQQEmojiKeyListConfig;
- (id)emoticonRegexForNewExpressionCongifWithWrapDic:(id)arg1 descToWrapDic:(id)arg2;
- (void)configEmoticonRegexWithNewExpressionRegexString:(id)arg1;
- (void)loadExpression;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

