//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderCommentDatailHeaderViewDelegate-Protocol.h"
#import "WCFinderCommentDetailViewModelDelegate-Protocol.h"
#import "WCFinderFeedDetailCommentCellActionDelegate-Protocol.h"
#import "WCFinderFeedDetailRootCommentCellDelegate-Protocol.h"

@class EmoticonBoardView, MMGrowTextView, NSIndexPath, NSString, UIButton, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderCommentDatailHeaderView, WCFinderCommentDetailViewModel, WCFinderCommentListHeaderRefreshView, WCFinderCreateCoordinator, WCFinderRefreshTableFooterView, WCInputController;

@interface WCFinderCommentDatailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MMGrowTextViewDelegate, WCFinderCommentDatailHeaderViewDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, WCFinderFeedDetailCommentCellActionDelegate, WCFinderCommentDetailViewModelDelegate, WCFinderFeedDetailRootCommentCellDelegate, EGORefreshTableHeaderDelegate>
{
    _Bool _isCurrentRepaly;
    _Bool _isCurrentRepalySubComment;
    _Bool _isLoadingComment;
    unsigned int _createTime;
    UITableView *_tableView;
    MMGrowTextView *_growTextView;
    UIView *_textViewBackGroundView;
    UIView *_inputView;
    UITapGestureRecognizer *_tapGesture;
    NSIndexPath *_currentRepalyIndexPath;
    WCFinderCommentDatailHeaderView *_headerView;
    UIView *_containerView;
    WCFinderRefreshTableFooterView *_footerView;
    UIButton *_expressionButton;
    UIButton *_backgroundButton;
    EmoticonBoardView *_emoticonBoardView;
    WCInputController *_inputController;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderCommentDetailViewModel *_viewModel;
    UIView *_commentBackgroundView;
    UIPanGestureRecognizer *_panGesture;
    WCFinderCommentListHeaderRefreshView *_headerRefreshView;
    UIView *_emptyHeaderView;
    UIView *_inputBottomView;
    UIView *_authenticationErrorHeaderView;
    UILabel *_commentCloseTips;
    UIView *_lastTipHeaderView;
    unsigned long long _lastTipHeaderType;
    WCFinderCreateCoordinator *_createCoordinator;
    unsigned long long _commentTextMaxLimit;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
}

@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) unsigned long long lastTipHeaderType; // @synthesize lastTipHeaderType=_lastTipHeaderType;
@property(nonatomic) __weak UIView *lastTipHeaderView; // @synthesize lastTipHeaderView=_lastTipHeaderView;
@property(retain, nonatomic) UILabel *commentCloseTips; // @synthesize commentCloseTips=_commentCloseTips;
@property(retain, nonatomic) UIView *authenticationErrorHeaderView; // @synthesize authenticationErrorHeaderView=_authenticationErrorHeaderView;
@property(nonatomic) __weak UIView *inputBottomView; // @synthesize inputBottomView=_inputBottomView;
@property(retain, nonatomic) UIView *emptyHeaderView; // @synthesize emptyHeaderView=_emptyHeaderView;
@property(retain, nonatomic) WCFinderCommentListHeaderRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) UIView *commentBackgroundView; // @synthesize commentBackgroundView=_commentBackgroundView;
@property(retain, nonatomic) WCFinderCommentDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isLoadingComment; // @synthesize isLoadingComment=_isLoadingComment;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderCommentDatailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isCurrentRepalySubComment; // @synthesize isCurrentRepalySubComment=_isCurrentRepalySubComment;
@property(retain, nonatomic) NSIndexPath *currentRepalyIndexPath; // @synthesize currentRepalyIndexPath=_currentRepalyIndexPath;
@property(nonatomic) _Bool isCurrentRepaly; // @synthesize isCurrentRepaly=_isCurrentRepaly;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)clickToToast;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)reportUserComment:(id)arg1;
- (_Bool)isSelfPostComment:(id)arg1;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)feedDetailCommentCellOnLongPress:(id)arg1;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(_Bool)arg2;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)retryFetchNextPage;
- (void)showRetryNextPageFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showEmptyRetryFetchView;
- (void)finderFeedCommentFetchByRefCommentWithTid:(id)arg1 refCommentID:(unsigned long long)arg2 refCommentIndex:(unsigned long long)arg3;
- (void)showEmptyTipsView;
- (void)stopLoadingView;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(id)arg2 comment:(id)arg3;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(id)arg2 direction:(unsigned long long)arg3;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)finderFeedCommentClickRefcontentFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentPostTid:(id)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentDataChange:(id)arg1;
- (void)finderFeedCommentIsEmpty:(id)arg1;
- (void)finderFeedCommentNoMoreData:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 likeCommentSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePopGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)keyboardWillHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)onClickCloseCommentDatailHeaderBtn;
- (void)hideErrorTips;
- (void)showErrorTipsWithType:(unsigned long long)arg1;
- (void)clickErrorHeaderViewAction;
- (void)exitEnterComment;
- (void)scrollCommentToTop;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)reloadExpressionButtonImage:(int)arg1;
- (_Bool)commentFunctionIsSpam;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)requestInitDataWithAnimation;
- (void)updateCommentSpamState;
- (void)addGrowTextView;
- (void)setupInputView;
- (void)setUpTextView;
- (void)initEmoticonView;
- (void)configureTableView;
- (void)updateCommentCountTitle;
- (void)activeInput;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

