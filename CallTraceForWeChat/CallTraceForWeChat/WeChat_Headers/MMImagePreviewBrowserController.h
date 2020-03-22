//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "EditImageInitialViewDelegate-Protocol.h"
#import "EditVideoLogicItemDelegate-Protocol.h"
#import "MMAssetPickerBrowserViewDelegate-Protocol.h"
#import "MMAssetSelectedCollectionViewDelegate-Protocol.h"
#import "MultiImageScrollViewDelegate-Protocol.h"
#import "SightLocalVideoProcessingViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCEditImageViewControllerDelegate-Protocol.h"
#import "WCEditVideoViewControllerDelegate-Protocol.h"

@class EditImageIntialView, EditVideoLogicItem, FavClickStreamHelper, MMAsset, MMAssetPickerSendButton, MMAssetSelectCheckButton, MMAssetSelectedCollectionView, MultiImageScrollView, NSMutableDictionary, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;
@protocol MMImagePickerControlCenter, MMImagePreviewBrowserControllerDataSource, MMImagePreviewBrowserControllerDelegate;

@interface MMImagePreviewBrowserController : WCDragToCloseViewController <EditVideoLogicItemDelegate, WCEditVideoViewControllerDelegate, EditImageInitialViewDelegate, WCEditImageViewControllerDelegate, MMAssetPickerBrowserViewDelegate, MMAssetSelectedCollectionViewDelegate, SightLocalVideoProcessingViewControllerDelegate, MultiImageScrollViewDelegate, WCActionSheetDelegate>
{
    MMAssetSelectCheckButton *m_selectCheckButton;
    MultiImageScrollView *_pagingScrollView;
    MMAssetSelectedCollectionView *m_selectedCollectionView;
    MMAssetPickerSendButton *m_sendButton;
    UIView *oTitleBackGroundView;
    UIView *_bottomBar;
    UIButton *_originImageCheck;
    UILabel *_originImageLabel;
    UIActivityIndicatorView *_originIndictorView;
    UIButton *m_cropVideoButton;
    UIButton *_editButton;
    _Bool isChangePageBySelected;
    NSMutableDictionary *m_browserViewCache;
    UILabel *m_tipInfoLabel;
    UIButton *m_errorInfoBar;
    _Bool m_hasClickSendButton;
    _Bool _isOriginSelected;
    unsigned int _startPageIndex;
    id <MMImagePickerControlCenter> controlCenter;
    id <MMImagePreviewBrowserControllerDelegate> m_delegate;
    EditImageIntialView *_editImageInitialView;
    EditVideoLogicItem *editVideoLogicItem;
    id <MMImagePreviewBrowserControllerDataSource> _m_dataSource;
    MMAsset *__editAsset;
    UIImageView *_originImageView;
    UIView *_blurView;
    FavClickStreamHelper *_favClickStreamHelper;
}

@property(nonatomic) _Bool isOriginSelected; // @synthesize isOriginSelected=_isOriginSelected;
@property(retain, nonatomic) FavClickStreamHelper *favClickStreamHelper; // @synthesize favClickStreamHelper=_favClickStreamHelper;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *originImageView; // @synthesize originImageView=_originImageView;
@property(nonatomic) unsigned int startPageIndex; // @synthesize startPageIndex=_startPageIndex;
@property(copy, nonatomic) MMAsset *_editAsset; // @synthesize _editAsset=__editAsset;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDataSource> m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(retain, nonatomic) EditVideoLogicItem *editVideoLogicItem; // @synthesize editVideoLogicItem;
@property(retain, nonatomic) EditImageIntialView *_editImageInitialView; // @synthesize _editImageInitialView;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void).cxx_destruct;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)sightLocalVideoProcessingViewController:(id)arg1 didFinishEditingWithSightDraft:(id)arg2;
- (void)onAssetSelectedCollectionViewMoveAssetInfo:(id)arg1 oldIndex:(unsigned long long)arg2;
- (void)onAssetSelectedCollectionViewClickAtIndex:(unsigned long long)arg1;
- (void)onAssetBrowserViewPlayingStateChanged:(id)arg1 isPlaying:(_Bool)arg2;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (_Bool)currentAssetIsVideo;
- (void)onChangePage;
- (void)multiImageScrollViewWillBeginDragging;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)resizeBlurViewWithCollectionVisiable:(_Bool)arg1;
- (void)changeToPageWithAssetInfo:(id)arg1;
- (void)shouldShowErrorInfoBarWithAssetInfo:(id)arg1 stateInfo:(id)arg2;
- (void)updateBottomBarWithAssetInfo:(id)arg1 stateInfo:(id)arg2;
- (void)updateOriginSizeLabel;
- (void)updateSelectedButtonWithAssetInfo:(id)arg1;
- (void)updateSelectCheckButtonWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)updateEditButtonEnableWithAssetInfo:(id)arg1;
- (void)setBottomAndTopBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)OnSelectedButtonDone;
- (void)cancelSelected;
- (void)onOriginImageCheck:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)sendSelectedImage;
- (void)prepareSend;
- (void)OnCancel:(id)arg1;
- (void)OnCrop:(id)arg1;
- (void)onEditVideo:(id)arg1;
- (unsigned long long)imagePickerSceneToEditImageEnterScene;
- (void)onEditImage:(id)arg1;
- (_Bool)hidesStatusBar;
- (void)viewDidTransitionToNewSize;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)OnClickDoneBarButton;
- (void)OnClickBackBarButton:(id)arg1;
- (void)showErrorInfoBarWithInfo:(id)arg1;
- (void)initBackgroundView;
- (void)initDoneBarbutton;
- (void)initBackBarButton;
- (void)initSelectCheckButton;
- (void)initOriginImageButton;
- (void)initBottomBar;
- (_Bool)useBlackStatusbar;
- (id)init;
- (void)returnToTimelineOrAlbum;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (id)currentViewController;
- (void)onClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;
- (void)onEditDoneInTimelineAlbum;
- (void)onEditDoneInChatAlbum;
- (void)onEditFinish;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)onEditVideo:(int)arg1 withEditEntrance:(unsigned long long)arg2;
- (id)currentViewController;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)onEditImage:(int)arg1 withEditEntrance:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
