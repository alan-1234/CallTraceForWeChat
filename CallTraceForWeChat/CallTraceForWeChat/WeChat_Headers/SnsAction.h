//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, RemindFriendsInfo, SKBuiltinBuffer_t;

@interface SnsAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int commentFlag; // @dynamic commentFlag;
@property(nonatomic) int commentId; // @dynamic commentId;
@property(nonatomic) unsigned long long commentId2; // @dynamic commentId2;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fromNickname; // @dynamic fromNickname;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) SKBuiltinBuffer_t *hbbuffer; // @dynamic hbbuffer;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(retain, nonatomic) RemindFriendsInfo *remindFriendsInfo; // @dynamic remindFriendsInfo;
@property(nonatomic) int replyCommentId; // @dynamic replyCommentId;
@property(nonatomic) unsigned long long replyCommentId2; // @dynamic replyCommentId2;
@property(retain, nonatomic) NSMutableArray *snsEmojiInfo; // @dynamic snsEmojiInfo;
@property(nonatomic) unsigned int snsEmojiInfoCount; // @dynamic snsEmojiInfoCount;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *toNickname; // @dynamic toNickname;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

