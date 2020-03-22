//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMDB;

@interface CContactDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (void)getContactQueryProperty:(SyntaxList_7f15fe8c *)arg1;
- (_Bool)isFriendExtTableExist:(id)arg1;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (unsigned int)GetFriendMetaFlag:(id)arg1;
- (unsigned int)GetLastUpdateTimeOfUser:(id)arg1;
- (_Bool)deleteContacts:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (_Bool)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getContactList:(id)arg1 listType:(unsigned int)arg2 limit:(int)arg3;
- (unsigned int)getContactCount;
- (void)getFriendAndExtTableValue:(id)arg1 fromDBContact:(id)arg2 DBContactExt:(id)arg3;
- (_Bool)loadContactExtInfo:(id)arg1;
- (id)getContact:(id)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

