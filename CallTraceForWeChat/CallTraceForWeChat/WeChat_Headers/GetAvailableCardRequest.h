//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface GetAvailableCardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *buff; // @dynamic buff;
@property(retain, nonatomic) NSString *cardSign; // @dynamic cardSign;
@property(retain, nonatomic) NSString *cardTpId; // @dynamic cardTpId;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(nonatomic) unsigned int onlyInvoice; // @dynamic onlyInvoice;
@property(nonatomic) unsigned int shopId; // @dynamic shopId;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;

@end

