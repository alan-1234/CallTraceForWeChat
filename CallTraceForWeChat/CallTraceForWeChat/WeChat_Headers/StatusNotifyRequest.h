//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, StatusNotifyFunction;

@interface StatusNotifyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int code; // @dynamic code;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) StatusNotifyFunction *function; // @dynamic function;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(retain, nonatomic) NSMutableArray *unreadChatList; // @dynamic unreadChatList;
@property(nonatomic) unsigned int unreadChatListCount; // @dynamic unreadChatListCount;
@property(nonatomic) unsigned int unreadFunctionCount; // @dynamic unreadFunctionCount;
@property(retain, nonatomic) NSMutableArray *unreadFunctionList; // @dynamic unreadFunctionList;

@end

