//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PublicWifiBarMsg : NSObject
{
    unsigned int m_uin;
    unsigned int m_actioncode;
    unsigned int m_shopid;
    unsigned int m_expiredtime;
    NSString *m_msgtype;
    NSString *m_bartext;
    NSString *m_barurl;
    NSString *m_appid;
    NSString *m_apkey;
    NSMutableArray *m_sbarlist;
}

@property(retain, nonatomic) NSMutableArray *m_sbarlist; // @synthesize m_sbarlist;
@property(nonatomic) unsigned int m_expiredtime; // @synthesize m_expiredtime;
@property(retain, nonatomic) NSString *m_apkey; // @synthesize m_apkey;
@property(nonatomic) unsigned int m_shopid; // @synthesize m_shopid;
@property(retain, nonatomic) NSString *m_appid; // @synthesize m_appid;
@property(nonatomic) unsigned int m_actioncode; // @synthesize m_actioncode;
@property(retain, nonatomic) NSString *m_barurl; // @synthesize m_barurl;
@property(retain, nonatomic) NSString *m_bartext; // @synthesize m_bartext;
@property(nonatomic) unsigned int m_uin; // @synthesize m_uin;
@property(retain, nonatomic) NSString *m_msgtype; // @synthesize m_msgtype;
- (void).cxx_destruct;

@end

