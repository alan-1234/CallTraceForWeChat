//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetExpressionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int interval; // @dynamic interval;
@property(nonatomic) int isPlayExpression; // @dynamic isPlayExpression;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *traceId; // @dynamic traceId;

@end

