//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UINavigationController;

@interface MPLandingCommonSharePageExtParams : NSObject
{
    unsigned int _reportEnterScene;
    unsigned int _reportEnterSubScene;
    unsigned int _reportSessionId;
    unsigned int _msgCreateTime;
    unsigned int _enterId;
    UINavigationController *_navigationController;
    NSMutableDictionary *_extraInfo;
    NSString *_msgFromUserName;
}

@property(nonatomic) unsigned int enterId; // @synthesize enterId=_enterId;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(copy, nonatomic) NSString *msgFromUserName; // @synthesize msgFromUserName=_msgFromUserName;
@property(nonatomic) unsigned int reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(nonatomic) unsigned int reportEnterSubScene; // @synthesize reportEnterSubScene=_reportEnterSubScene;
@property(nonatomic) unsigned int reportEnterScene; // @synthesize reportEnterScene=_reportEnterScene;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;

@end

