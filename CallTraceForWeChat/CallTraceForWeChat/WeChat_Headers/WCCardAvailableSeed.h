//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardAvailableSeed : MMObject
{
    unsigned int _shopID;
    unsigned int _canMultiSelect;
    unsigned int _timeStamp;
    unsigned int _onlyInvoice;
    NSString *_appID;
    NSString *_cardType;
    NSString *_cardTpID;
    NSString *_signType;
    NSString *_cardSign;
    NSString *_nonceStr;
}

@property(nonatomic) unsigned int onlyInvoice; // @synthesize onlyInvoice=_onlyInvoice;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *cardSign; // @synthesize cardSign=_cardSign;
@property(retain, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned int canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(nonatomic) unsigned int shopID; // @synthesize shopID=_shopID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)dealloc;

@end

