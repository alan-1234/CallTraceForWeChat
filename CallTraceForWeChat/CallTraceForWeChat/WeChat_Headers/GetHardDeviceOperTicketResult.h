//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class HardDevice, NSString;

@interface GetHardDeviceOperTicketResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) HardDevice *device; // @dynamic device;
@property(nonatomic) unsigned int oper; // @dynamic oper;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

