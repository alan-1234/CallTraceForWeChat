//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, GetWxaGameResponse_WxaGameInfo, NSMutableArray, NSString, WxaAppBaseResponse;

@interface GetWxaGameResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int disappearOneClick; // @dynamic disappearOneClick;
@property(retain, nonatomic) NSString *entryWordingColor; // @dynamic entryWordingColor;
@property(retain, nonatomic) GetWxaGameResponse_WxaGameInfo *gameEntry; // @dynamic gameEntry;
@property(retain, nonatomic) NSString *linkWxagame; // @dynamic linkWxagame;
@property(retain, nonatomic) NSString *newWordingBgColor; // @dynamic newWordingBgColor;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;
@property(retain, nonatomic) NSString *wxagameEntryWording; // @dynamic wxagameEntryWording;
@property(retain, nonatomic) NSMutableArray *wxagameList; // @dynamic wxagameList;
@property(retain, nonatomic) NSString *wxagameNewWording; // @dynamic wxagameNewWording;

@end

