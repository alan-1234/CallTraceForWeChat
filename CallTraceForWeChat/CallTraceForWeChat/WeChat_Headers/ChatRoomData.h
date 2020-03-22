//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface ChatRoomData : NSObject
{
    NSMutableDictionary *m_dicData;
    unsigned int m_maxMemberCount;
    unsigned int m_chatRoomVersion;
    unsigned int m_uiLocalMemberVersion;
    _Bool isSimplify;
    NSRecursiveLock *_lock;
}

@property(nonatomic) _Bool isSimplify; // @synthesize isSimplify;
@property(nonatomic) unsigned int localMemberVersion; // @synthesize localMemberVersion=m_uiLocalMemberVersion;
@property(nonatomic) unsigned int chatRoomVersion; // @synthesize chatRoomVersion=m_chatRoomVersion;
@property(nonatomic) unsigned int maxMemberCount; // @synthesize maxMemberCount=m_maxMemberCount;
- (void).cxx_destruct;
- (void)updateDicData:(struct XmlReaderNode_t *)arg1;
- (unsigned int)getXmlNodeIntValue:(struct XmlReaderNode_t *)arg1 forName:(const char *)arg2;
- (_Bool)isShowDislayName;
- (void)setShowDislayName:(_Bool)arg1;
- (void)setInviterNameName:(id)arg1 forUserName:(id)arg2;
- (id)getInviterNameForUsername:(id)arg1;
- (id)getDislayNameForUserName:(id)arg1;
- (void)setDislayName:(id)arg1 forUserName:(id)arg2;
- (void)updateChatRoomData:(struct XmlReaderNode_t *)arg1;
- (id)getDataDescription;
- (id)getDataXml;
- (void)parseData:(id)arg1;
- (void)setDataForUserName:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getDataForUserName:(id)arg1 key:(id)arg2;
- (void)mergeOldDetail:(id)arg1;
- (void)mergeOpenIMData:(id)arg1;
- (void)merge:(id)arg1;
- (id)initWithNewOpenIMChatRoomData:(id)arg1;
- (id)initWithNewChatRoomData:(id)arg1;
- (id)initWithChatRoomData:(id)arg1;
- (id)init;

@end

