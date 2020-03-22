//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMatrixCustomIssueExt-Protocol.h"

@class NSMutableArray, NSString;
@protocol MMStackReportConnectionDelegate, OS_dispatch_queue;

@interface MMStackReportConnection : NSObject <IMatrixCustomIssueExt>
{
    id <MMStackReportConnectionDelegate> _delegate;
    NSMutableArray *_uploadedCustomIssue;
    NSObject<OS_dispatch_queue> *_reportQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(retain, nonatomic) NSMutableArray *uploadedCustomIssue; // @synthesize uploadedCustomIssue=_uploadedCustomIssue;
@property(nonatomic) __weak id <MMStackReportConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCustomIssue:(id)arg1 uploadComplete:(_Bool)arg2;
- (void)stackReportDict:(id)arg1 reportType:(unsigned long long)arg2;
- (void)stackReportWithData:(id)arg1 reportType:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

