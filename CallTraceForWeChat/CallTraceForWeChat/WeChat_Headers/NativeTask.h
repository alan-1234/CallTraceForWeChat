//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface NativeTask : NSObject
{
    struct IMBNativeInterface *_interface;
    NSThread *_thread;
}

@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) struct IMBNativeInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (void)update:(id)arg1;
- (void)run:(long long)arg1;

@end
