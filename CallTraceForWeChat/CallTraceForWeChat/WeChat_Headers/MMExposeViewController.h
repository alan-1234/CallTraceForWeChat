//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ExposeEvidenceViewControllerDelegate-Protocol.h"
#import "ExposeWithProofCgiDelegate-Protocol.h"
#import "MMExposeResultViewControllerDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CdnFavMediaInfo, MMExposeEvidenceViewController, MMExposeWithProofCgi, MMTableViewInfo, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, ProofImgItem, UIButton, UIImage, WCDataItem;
@protocol MMExposeViewControllerDelegate;

@interface MMExposeViewController : MMUIViewController <ExposeEvidenceViewControllerDelegate, tableViewDelegate, MMExposeResultViewControllerDelegate, ExposeWithProofCgiDelegate>
{
    NSString *m_userName;
    NSString *m_exposeContent;
    WCDataItem *m_wcDataItem;
    unsigned int m_exposeScene;
    id <MMExposeViewControllerDelegate> m_delegate;
    MMExposeWithProofCgi *cgiHandle;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bIsExposeWCData;
    NSArray *m_arrExposeReasonList;
    NSArray *m_arrExposeLinkList;
    unsigned int m_newExposeType;
    NSArray *m_arrProofItems;
    NSMutableArray *m_arrProofImgItems;
    NSArray *m_arrImgAssets;
    NSMutableDictionary *m_dicMediaInfo;
    _Bool m_bIsSupportUploadChat;
    NSString *nsEvidenceCount;
    NSIndexPath *nsLastSelectReasonPath;
    _Bool bNeedTwoStep;
    MMExposeEvidenceViewController *evidenceVC;
    _Bool bIsFinishProcessImg;
    _Bool bIsCancelUploadImg;
    unsigned int cellCount;
    ProofImgItem *htmlContentCdnItem;
    CdnFavMediaInfo *m_htmlInfo;
    UIButton *_noticeBtn;
    int m_source;
    int m_userProfileSource;
    unsigned int m_msgType;
    NSString *m_helloMsgs;
    long long m_msgId;
    NSString *_m_webViewHtml;
    UIImage *_m_webViewScreenShot;
}

@property(retain, nonatomic) UIImage *m_webViewScreenShot; // @synthesize m_webViewScreenShot=_m_webViewScreenShot;
@property(retain, nonatomic) NSString *m_webViewHtml; // @synthesize m_webViewHtml=_m_webViewHtml;
@property(nonatomic) unsigned int m_msgType; // @synthesize m_msgType;
@property(nonatomic) long long m_msgId; // @synthesize m_msgId;
@property(nonatomic) int m_userProfileSource; // @synthesize m_userProfileSource;
@property(nonatomic) int m_source; // @synthesize m_source;
@property(nonatomic) __weak id <MMExposeViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_helloMsgs; // @synthesize m_helloMsgs;
@property(retain, nonatomic) NSString *m_exposeContent; // @synthesize m_exposeContent;
@property(nonatomic) unsigned int m_exposeScene; // @synthesize m_exposeScene;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName;
- (void).cxx_destruct;
- (void)onReturnBtnDone;
- (void)onExposeCompleteAndExit;
- (void)onExposeConfirmWithMsgEvidence:(id)arg1 andImgEvidence:(id)arg2;
- (void)startUploadImgProof:(id)arg1;
- (void)processUploadImg;
- (void)processScreenShotAndHtmlContent;
- (id)getLocalPathByResourceIdTypeData:(id)arg1;
- (id)getLocalPathByResourceId:(id)arg1;
- (id)getLocalResourceId;
- (void)onExposeResultOK;
- (void)OnUploadImgToCdnFail:(id)arg1;
- (void)OnUploadImgToCdnSuccess:(id)arg1 withProofImgItem:(id)arg2;
- (void)OnGetExposeLinkError;
- (void)OnGetExposeLinkSuccess:(id)arg1;
- (void)OnExposeWithProofError;
- (void)OnExposeWithProofSuccess;
- (void)makeExposeWithProof;
- (void)jumpToExposeH5:(id)arg1;
- (void)onExposeDetail:(struct WCTableViewNormalCellManager *)arg1:(id)arg2;
- (void)onSelectReason:(struct WCTableViewNormalCellManager *)arg1:(id)arg2;
- (void)makeWebDetailCell:(id)arg1:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeCell:(id)arg1:(struct WCTableViewNormalCellManager *)arg2;
- (void)onExpose;
- (void)onNextStep;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onCancel;
- (void)onNoticeDetail;
- (void)reloadNoticeBtn;
- (void)initView;
- (void)reloadData;
- (void)initData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setWCDataItem:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getXmlStrFromArrayOfHelloMsgs:(id)arg1;
- (id)getXmlStrFromBottleID:(id)arg1 andBottleContent:(id)arg2;
- (id)getXmlStrFromUrl:(id)arg1 Scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

