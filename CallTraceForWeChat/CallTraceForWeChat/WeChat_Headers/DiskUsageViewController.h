//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMUIActivityIndicatorView, NSString, UIButton;

@interface DiskUsageViewController : MMUIViewController <MFMailComposeViewControllerDelegate, WCActionSheetDelegate>
{
    UIButton *m_btnAnalyze;
    UIButton *m_btnMail;
    UIButton *m_btnDelete;
    MMUIActivityIndicatorView *m_actView;
}

- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)onMail;
- (void)writeMailWithAttachFile:(id)arg1 filePath:(id)arg2 zipName:(id)arg3 zipPath:(id)arg4;
- (id)mimeOfFile:(id)arg1;
- (void)wechatToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onForwarResult;
- (void)OnDiskUsage;
- (void)OnReAnalyze;
- (void)OnFinish;
- (void)OnShowDetail;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;
- (id)getDataPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

