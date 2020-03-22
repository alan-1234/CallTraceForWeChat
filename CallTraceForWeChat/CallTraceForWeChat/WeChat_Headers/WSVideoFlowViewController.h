//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSVideoFlowBaseViewController.h"

#import "ITopStoryPluginMsgExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "WSFullVideoDragEducateViewDelegate-Protocol.h"
#import "WSVideoFlowDataDelegate-Protocol.h"
#import "WSVideoFlowTableViewCellDelegate-Protocol.h"
#import "WSVideoPlayerViewDelegate-Protocol.h"
#import "WSVideoWowCommentFloatViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class ForwardMessageLogicController, MMUILabel, NSString, UIImageView, UIView, WCTimeLineFooterView, WSFullVideoDragEducateView, WSVideoFlowTableViewCell, WSVideoFullScreenController, WSVideoModel, WSVideoTagInfo, WSVideoWowCommentFloatView;

@interface WSVideoFlowViewController : WSVideoFlowBaseViewController <WSVideoFlowDataDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, WSVideoFlowTableViewCellDelegate, MMRefreshTableFooterDelegate, UIViewControllerAnimatedTransitioning, WSVideoPlayerViewDelegate, WSFullVideoDragEducateViewDelegate, ITopStoryPluginMsgExt, WSVideoWowCommentFloatViewDelegate>
{
    UIView *_navBarBkg;
    UIView *_headerView;
    MMUILabel *_mainTagTitle;
    WSVideoModel *_initVideoModel;
    WCTimeLineFooterView *_footerView;
    WSVideoFlowTableViewCell *_interactiveCell;
    WSVideoFlowTableViewCell *_feedBackingCell;
    _Bool _bShouldForcedRotationToPortrait;
    long long _orientation;
    _Bool _startCustomMgrRetreiveLocation;
    _Bool _canAutoPlay;
    _Bool _bDisplayNoDefaultVideo;
    _Bool _hasLoadFirstPage;
    _Bool _shouldReturnFromFullScreenWithScrollToCurrentVideo;
    _Bool _stopUpdateInteractsUntilScrollDone;
    _Bool _hasDidBePushed;
    _Bool _isOperateScrollingToNextVideo;
    _Bool _isSingleVideoPlay;
    WSVideoTagInfo *_initTagInfo;
    NSString *_contentTitle;
    ForwardMessageLogicController *_forwardMsgLogic;
    double _lastScrollTime;
    struct CGPoint _lastScrollOffset;
    double _titleViewPosY;
    int _cgiStatus;
    WSVideoFullScreenController *_fullPlayController;
    WSFullVideoDragEducateView *_dragTipsView;
    _Bool _isPauseByDragTips;
    _Bool _isDebugingExchange;
    _Bool _viewWillBePop;
    WSVideoWowCommentFloatView *_wowCommentView;
    NSString *_lastPlayedNetStatus;
    NSString *_lastLoadingVid;
    _Bool _bPagingEffect;
    _Bool _isMiniVideoFlow;
    _Bool _isDelayResizeing;
    UIImageView *_transitionVideoImageView;
    struct CGSize _lastViewSize;
}

@property(nonatomic) _Bool isDelayResizeing; // @synthesize isDelayResizeing=_isDelayResizeing;
@property(nonatomic) struct CGSize lastViewSize; // @synthesize lastViewSize=_lastViewSize;
@property(readonly, nonatomic) _Bool isMiniVideoFlow; // @synthesize isMiniVideoFlow=_isMiniVideoFlow;
@property(nonatomic) _Bool bPagingEffect; // @synthesize bPagingEffect=_bPagingEffect;
@property(retain, nonatomic) UIImageView *transitionVideoImageView; // @synthesize transitionVideoImageView=_transitionVideoImageView;
- (void).cxx_destruct;
- (void)onFloatViewCommentClick:(id)arg1;
- (void)onFloatViewDidPop;
- (void)onFloatViewWillPop;
- (void)showToast:(id)arg1;
- (void)onConfirmEducateView;
- (void)showFullDragTipsIfNeeded;
- (void)clearFullScreenDragTips;
- (void)showFullScreenDragTips;
- (void)onDelayToHideControlViews;
- (void)onOperateShare:(id)arg1;
- (_Bool)isWSVideoPlayAsFirstVideo:(id)arg1;
- (void)onPlayerMuteChanged:(_Bool)arg1;
- (void)onPlayerViewClickTitle:(id)arg1;
- (void)onPlayerViewClickLike:(_Bool)arg1 video:(id)arg2;
- (void)onPlayerViewMuteChanged:(_Bool)arg1;
- (void)onMaskPlayButtonClick:(id)arg1;
- (id)onPlayNextVideo:(_Bool)arg1 currentVideo:(id)arg2;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)onUpdatePlayTime:(float)arg1 vid:(id)arg2 playerView:(id)arg3;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)preloadSurroundingForCell:(id)arg1;
- (void)reportVideoExpose;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (struct CGRect)transitionViewEndRectInView:(id)arg1;
- (double)commonInsetYForTableView;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)didSimTypeChangeToDaWangKaForReason:(int)arg1;
- (void)tapNavigationTitle;
- (void)didNetworkChange;
- (void)notifyVideoPlayMuteChange;
- (id)getThumbData:(id)arg1;
- (void)resetCurrentVideo;
- (void)pauseCurrentVideo;
- (void)resumeCurrentVideo;
- (_Bool)isVideoPlaying;
- (id)currentVideoModel;
- (long long)getOrientation;
- (id)currentIndexPath;
- (void)afterFoldInputView:(id)arg1;
- (id)shareTag;
- (_Bool)isLandscape;
- (void)startForcedRotation:(long long)arg1;
- (_Bool)shouldFixOrientation:(long long)arg1;
- (void)doViewTransition;
- (void)doIpadTransition;
- (void)viewDidTransitionToNewSize;
- (_Bool)handleFullScreen:(_Bool)arg1 targetCell:(id)arg2 targetPlayView:(id)arg3 orientation:(long long)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)breakDeepPlayingVideoMode;
- (void)deepShowPlayingVideo;
- (void)delayToShowDeepPlayingModeIfNeeded:(_Bool)arg1 delay:(double)arg2;
- (void)delayToShowDeepPlayingModeIfNeeded;
- (void)onTriggerAttachVideoView:(id)arg1 attachModel:(id)arg2;
- (void)onRealBeginPlayVideo:(id)arg1 rowIndex:(long long)arg2;
- (void)onRecordNetPauseAndPlay;
- (void)onCdnVideoDownLoadFinishForVideoModel:(id)arg1 retCode:(int)arg2 cdnTaskInfo:(id)arg3;
- (_Bool)onPlayerViewUpdateVideoUrl:(id)arg1;
- (void)onRecommendInsertVideo:(id)arg1 playTime:(long long)arg2;
- (_Bool)onVideoHasRecommend:(id)arg1;
- (void)onPlayerViewMaskPlayButtonClick:(id)arg1;
- (void)onDelayToHideControlViews:(id)arg1;
- (void)onShowControlViews:(id)arg1;
- (_Bool)isInteractiveCell:(id)arg1;
- (unsigned int)getCachedPlayTimeForVideo:(id)arg1;
- (id)onTryPlayNext:(_Bool)arg1 currentVideo:(id)arg2;
- (_Bool)canPlayNextVideo:(id)arg1;
- (_Bool)canLoadNextWithCurrent:(id)arg1;
- (_Bool)hasPlayAnyVideo;
- (void)onRealBeginPlay:(id)arg1 autoPlay:(_Bool)arg2;
- (void)onClickTag:(id)arg1 sender:(id)arg2;
- (void)onClickTitle:(id)arg1;
- (void)onClickLike:(_Bool)arg1 sender:(id)arg2;
- (void)onClickSource:(id)arg1;
- (void)onClickShare:(id)arg1;
- (_Bool)onVideoPlayEnd:(id)arg1;
- (void)didVideoFeedBackConfirmWithReasons:(id)arg1;
- (void)onClickMoreButton:(id)arg1 inView:(id)arg2 withVideoModel:(id)arg3;
- (void)onClickFeedBackButton:(id)arg1 sender:(id)arg2;
- (void)onTapSurroundings:(id)arg1;
- (void)onTapMaskView:(id)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 cell:(id)arg3 video:(id)arg4;
- (void)onTryResumeExpiredPlayer:(id)arg1;
- (void)onTryResumeExpiredPlayer:(id)arg1 withUrls:(id)arg2;
- (_Bool)onCheckCurrentVideoHandlingExpired;
- (id)onGetInteractiveVid;
- (void)onSuccessInsertVideo:(id)arg1 fromVid:(id)arg2 atPos:(long long)arg3;
- (void)onFailInsertVideo:(id)arg1 reason:(int)arg2;
- (unsigned long long)onGetCurrentCellIndex;
- (unsigned long long)onGetLastVisibleCellIndex;
- (void)onDefaultVideoMerged;
- (void)onDefaultVideoUpdated;
- (void)onSingleVideoFetchEnd:(id)arg1;
- (void)onReturnFromWebRecommendVideo:(int)arg1;
- (void)onUpdatePrefetchFlag:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isVideoCellStartPlaying:(id)arg1;
- (_Bool)decideScrollSpeed;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTitleViewScrollingLayout;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)fetchNextPage;
- (void)handleWowSuccess:(_Bool)arg1;
- (void)presentShareToGoodLookDialogWithTitle:(id)arg1 thumbImage:(id)arg2 thumbImageURL:(id)arg3;
- (id)getCurrentPlayerView;
- (void)switchToWangka:(_Bool)arg1;
- (void)showWangkaToast;
- (_Bool)hasBottomInset;
- (unsigned long long)judgeNetLogicChange;
- (void)decideNetLayer;
- (_Bool)decideInteractiveCell;
- (void)stopVideo;
- (void)playVideoForCell:(id)arg1 force:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (double)cellDistanceToPreferPoint:(id)arg1;
- (_Bool)isCellInTargetArea:(id)arg1;
- (_Bool)isCellVisible:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (double)titleViewPosY;
- (_Bool)isTagTitleVisible;
- (void)addTableHeaderView;
- (void)initView;
- (void)onLongPressNav:(id)arg1;
- (void)initNavigateItem;
- (id)getNormalTitle;
- (id)getTagTitleId;
- (_Bool)hitShowTopTagCategory;
- (id)getTagTitle;
- (void)resumeCurrentVideoPlayIfNeeded;
- (_Bool)canPlayDefaultVideo;
- (void)viewWillLayoutSubviews;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initDataLogic:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)initCustomWebSearchMgr;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)appWillResignActive:(id)arg1;
- (void)appBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initWithMinimizeData:(id)arg1 taskData:(id)arg2;
- (id)initWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

