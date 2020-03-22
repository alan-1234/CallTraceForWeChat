//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IUiUtilExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMNavBarInteractiveDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommentDetailViewControllerFBDelegate-Protocol.h"
#import "WCCommitViewAnimationDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCImageViewDelegate-Protocol.h"
#import "WCListHeaderViewDelegate-Protocol.h"
#import "WCListViewDelegate-Protocol.h"
#import "WCListViewRowViewDelegate-Protocol.h"
#import "WCPuzzleImageViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CContact, MMAdaptiveLabel, MMTableView, MMTipsViewController, MMURLHandler, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView, WCDataItem, WCListHeaderView, WCListViewController, WCListYearFloatView, WCPhotoMutipleImageViewController, WCTimeLineFooterView;

@interface WCListView : MMUIView <WCCommitViewAnimationDelegate, WCListViewRowViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, WCImageViewDelegate, MMRefreshTableFooterDelegate, WCListViewDelegate, WCFacadeExt, WCListHeaderViewDelegate, WCPuzzleImageViewDelegate, tableViewDelegate, MMTipsViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, IUiUtilExt, MMImagePickerManagerDelegate, MMNavBarInteractiveDelegate>
{
    _Bool m_isMyWC;
    CContact *m_contact;
    int m_curDownloadEntrance;
    double m_statusBarHeight;
    WCListViewController *viewController;
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    WCListHeaderView *m_headerView;
    WCListYearFloatView *m_yearFloatView;
    MMURLHandler *m_urlHandler;
    MMAdaptiveLabel *m_tipsLabel;
    NSArray *m_arrPhotoDatas;
    NSMutableArray *m_arrDates;
    NSMutableArray *m_arrCitysForDate;
    NSMutableArray *m_arrGroupsForDate;
    NSMutableDictionary *m_cellHeightCache;
    NSMutableArray *m_arrPhotoDataForView;
    _Bool m_bTapHeaderView;
    _Bool m_bRecentLimitTipShown;
    WCDataItem *_cacheDateItem;
    UIView *_animationView;
    MMTipsViewController *m_introView;
    WCPhotoMutipleImageViewController *_multipleImageViewController;
}

@property(nonatomic) __weak WCPhotoMutipleImageViewController *multipleImageViewController; // @synthesize multipleImageViewController=_multipleImageViewController;
@property(retain, nonatomic) NSMutableArray *m_arrPhotoDataForView; // @synthesize m_arrPhotoDataForView;
@property(retain, nonatomic) NSMutableDictionary *m_cellHeightCache; // @synthesize m_cellHeightCache;
@property(retain, nonatomic) NSMutableArray *m_arrGroupsForDate; // @synthesize m_arrGroupsForDate;
@property(retain, nonatomic) NSMutableArray *m_arrCitysForDate; // @synthesize m_arrCitysForDate;
@property(retain, nonatomic) NSMutableArray *m_arrDates; // @synthesize m_arrDates;
@property(nonatomic) __weak WCListViewController *viewController; // @synthesize viewController;
- (void).cxx_destruct;
- (long long)getCurrentYearWithUpdate:(_Bool)arg1;
- (_Bool)tryToInsertRecentLimitTipItemInArray:(id)arg1;
- (_Bool)tryToInsertYearItemInArray:(id)arg1 withThisYear:(long long)arg2 lastYear:(long long)arg3;
- (id)makeTipCell:(id)arg1 withItem:(id)arg2 indexPath:(id)arg3;
- (id)makeYearCell:(id)arg1 withItem:(id)arg2;
- (void)openPhotoMutipleImageViewController:(id)arg1;
- (_Bool)shouldAddShadowView;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onRestoreWCListCellView:(id)arg1;
- (void)handleClickImageView:(id)arg1;
- (void)handleShortVideoView:(id)arg1;
- (void)handleFeedView:(id)arg1;
- (void)handleVideoView:(id)arg1;
- (void)handleMusicView:(id)arg1;
- (void)handleTextView:(id)arg1;
- (void)showDetailViewController:(id)arg1;
- (_Bool)isPrivate:(id)arg1;
- (void)jumpToContentViewController:(id)arg1;
- (void)resetListHeaderViewForSignatureLabelHeightChanged;
- (void)showContactInfo;
- (void)onClickWCPuzzleImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)reloadBackGround;
- (id)genImageView:(id)arg1 imageType:(int)arg2;
- (void)refreshFooterEnd:(unsigned int)arg1;
- (void)refreshHeaderEnd:(unsigned int)arg1;
- (void)onNoMoreDataWithRet:(int)arg1 andTip:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showDetailView:(id)arg1;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)showUploadOption:(id)arg1;
- (void)showPhotoAlert:(id)arg1;
- (void)reportLastDraft;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getViewController;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)openCommitViewControllerWithSightDraft:(id)arg1;
- (void)openCommitViewController:(_Bool)arg1 arrImage:(id)arg2;
- (void)doSetEntranceForAllMediaItem;
- (long long)indexOfPageForMediaItem:(id)arg1;
- (id)getImageViewByDataItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)idForIndexPath:(id)arg1;
- (void)showNoContentTips:(_Bool)arg1;
- (void)updateRowsData;
- (void)shouldReloadData:(id)arg1;
- (void)onDataChanged:(id)arg1;
- (id)getTableView;
- (void)layoutSubviews;
- (void)clearHeightCache;
- (void)didReceiveMemoryWarning;
- (id)initWithData:(id)arg1 frame:(struct CGRect)arg2 contact:(id)arg3;
- (void)initYearFloatView;
- (void)initTableView;
- (void)initTipsLabel;
- (void)initFooterView;
- (void)initHeaderView;
- (void)dealloc;
- (void)touchesCancelled_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)showAnimationToImageView;
- (id)FindTheRowViewContainDataItem:(id)arg1;
- (void)clearAnimationProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

