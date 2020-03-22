//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IWCMallControlLogicExt-Protocol.h"
#import "IWCPayControlLogicExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCMallFunctionActivityViewDelegate-Protocol.h"
#import "WCMallWalletMangeControlLogicDelegate-Protocol.h"
#import "WCPayGetGDPRInfoCgiDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"
#import "WCPayOpenECardControlLogicExt-Protocol.h"
#import "WCPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayRealNameTipsViewControllerDelegate-Protocol.h"
#import "WCPayUploadIDCardTipsViewControllerDelegate-Protocol.h"
#import "WCPayWalletUpdateExt-Protocol.h"
#import "WCPayWalletViewControllerDelegate-Protocol.h"

@class GetEUInfoResp, LocationRetriever, MMUIButton, NSDictionary, NSMutableArray, NSString, TimeoutNumber, UIButton, UIImageView, UIView, UrlLabel, WCMallControlData, WCPayControlData, WCPayGetGDPRInfoCgi, WCPayJumpRemindControlLogic, WCUIPageControl;

@interface WCBizMainViewController : WCBizBaseViewController <WCPayWalletUpdateExt, WCPayRealNameTipsViewControllerDelegate, WCPayWalletViewControllerDelegate, UITableViewDelegate, WCPayNoticeBannerDelegate, LocationRetrieveDelegate, WCPayUploadIDCardTipsViewControllerDelegate, WCPayOpenECardControlLogicExt, WCPayGetGDPRInfoCgiDelegate, MMWebViewDelegate, WCMallWalletMangeControlLogicDelegate, WCActionSheetDelegate, WCPayLogicMgrExt, WCPayPwdViewControllerDelegate, IWCPayControlLogicExt, IWCMallControlLogicExt, ILinkEventExt, WCMallFunctionActivityViewDelegate>
{
    unsigned int m_uiNewOrderCount;
    NSMutableArray *m_arrPayCardDetailView;
    WCMallControlData *m_oMallData;
    WCPayControlData *m_oPayData;
    UrlLabel *m_oBroadCastLabel;
    WCUIPageControl *_bigImagePageControl;
    UIView *m_oTipsView;
    UIView *m_oPrePageCurView;
    UIView *m_oNextPageCurView;
    _Bool m_bGetPayCardList;
    unsigned int m_uiCurrentShowedTipsActivityID;
    UIView *_topHeaderView;
    UIImageView *_redDotViewForTranslate;
    UIButton *_balanceBtn;
    UIButton *_cardListBtn;
    NSMutableArray *_activityGroups;
    NSDictionary *m_dicBanners;
    LocationRetriever *locationRetriever;
    _Bool m_hasShowUploadIdImageAlert;
    _Bool m_isTencentServiceFold;
    double m_dynamicCellHeight;
    UIView *_footerFolderView;
    unsigned int m_payCardListLogicTag;
    unsigned int m_functionActivityListLogicTag;
    WCPayGetGDPRInfoCgi *m_getGDPRCgi;
    GetEUInfoResp *m_getGDPRResponse;
    MMUIButton *enterSettingButton;
    _Bool _m_hasNewOrRedDotWhenOpen;
    _Bool _m_needUpdateOnAppear;
    _Bool _showBalanceValue;
    _Bool _hideBalanceValue;
    _Bool _shouldAutoAdjustOffsetY;
    _Bool _shouldRecordOffsetY;
    UIImageView *_reddotForPay;
    UIImageView *_reddotForBalance;
    UIImageView *_reddotForLqb;
    WCPayJumpRemindControlLogic *_jumpRemindControlLogic;
    unsigned long long _walletEntranceBalanceSwitchState;
    unsigned long long _wallet_balance;
    double _tableOffsetY;
    TimeoutNumber *_timeoutNumber;
}

@property(retain) TimeoutNumber *timeoutNumber; // @synthesize timeoutNumber=_timeoutNumber;
@property _Bool shouldRecordOffsetY; // @synthesize shouldRecordOffsetY=_shouldRecordOffsetY;
@property _Bool shouldAutoAdjustOffsetY; // @synthesize shouldAutoAdjustOffsetY=_shouldAutoAdjustOffsetY;
@property double tableOffsetY; // @synthesize tableOffsetY=_tableOffsetY;
@property unsigned long long wallet_balance; // @synthesize wallet_balance=_wallet_balance;
@property unsigned long long walletEntranceBalanceSwitchState; // @synthesize walletEntranceBalanceSwitchState=_walletEntranceBalanceSwitchState;
@property _Bool hideBalanceValue; // @synthesize hideBalanceValue=_hideBalanceValue;
@property _Bool showBalanceValue; // @synthesize showBalanceValue=_showBalanceValue;
@property _Bool m_needUpdateOnAppear; // @synthesize m_needUpdateOnAppear=_m_needUpdateOnAppear;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic; // @synthesize jumpRemindControlLogic=_jumpRemindControlLogic;
@property(retain, nonatomic) UIImageView *reddotForLqb; // @synthesize reddotForLqb=_reddotForLqb;
@property(retain, nonatomic) UIImageView *reddotForBalance; // @synthesize reddotForBalance=_reddotForBalance;
@property(retain) UIImageView *reddotForPay; // @synthesize reddotForPay=_reddotForPay;
@property(nonatomic) _Bool m_hasNewOrRedDotWhenOpen; // @synthesize m_hasNewOrRedDotWhenOpen=_m_hasNewOrRedDotWhenOpen;
@property(nonatomic) unsigned int m_uiNewOrderCount; // @synthesize m_uiNewOrderCount;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopPayCardListLogic;
- (void)onWCPayWalletUpdateDidCall;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onWCPayWalletViewControllerDidCallUpdateBalance;
- (void)onWCPayWalletViewControllerDidCallUpdate;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getBannerView;
- (void)unHighlineActivityView;
- (void)onLqbBtnClick;
- (void)onOfflinePayClick;
- (void)onOpenTouchIDAuth;
- (void)showTouchIDConfirmIfNeed;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)removeRedDotForTransferNowAndForever;
- (_Bool)needToShowRedDotForTransfer;
- (id)getActivityCellView:(id)arg1 showActivityCount:(unsigned long long)arg2;
- (id)getFolderFooterView:(_Bool)arg1 isNeedShowRedDot:(_Bool)arg2;
- (void)onClickFolder;
- (double)contentHeightWithActivityCount:(unsigned long long)arg1;
- (struct CGRect)tableViewFrame;
- (struct CGSize)tableViewContentSize;
- (void)openECardLogicDidSuccess:(id)arg1;
- (void)OnEntranceStatusChanged;
- (void)OnGetFunctionList:(id)arg1 FromLocalCache:(_Bool)arg2;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetLocalCachePayCardList:(id)arg1;
- (void)onContinuePayCardListChanged:(id)arg1;
- (void)OnPayCardListChanged:(id)arg1;
- (void)OnWCPayPwdViewControllerBack;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)didReceiveMemoryWarning;
- (void)OnTransferMoney:(id)arg1;
- (void)OnOrderHistory;
- (void)OnOrderHistoryH5;
- (void)OnWCMallFunctionActivityViewButtonDown:(id)arg1;
- (void)onClickAddCardButton:(id)arg1;
- (void)onClickCardListButton:(id)arg1;
- (void)onClickCard:(id)arg1;
- (id)makeNewOrderRecord:(struct WCTableViewSectionManager *)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openPWDViewController;
- (void)onOperate:(id)arg1;
- (void)onAddPayCardInUnregView;
- (void)onAddPayCard;
- (void)showAddCardView;
- (void)refreshViewWithMallControlData:(id)arg1;
- (void)refreshViewWithPayControlData:(id)arg1;
- (id)testMakeLabel:(id)arg1;
- (void)onCardListBtnCancel;
- (void)onCardListBtnDown;
- (void)onCardListClick;
- (void)onBalanceBtnCancel;
- (void)onBalanceBtnDown;
- (void)onBalanceClick;
- (float)headerViewPaddingTop;
- (float)headerViewHeight;
- (double)sectionHeaderViewHeight;
- (void)makeCardHeaderView:(id)arg1;
- (double)testRowHeight;
- (double)calculateRedDotOffsetWithActivityList:(id)arg1 initOffset:(double)arg2;
- (unsigned int)tencentServiceFoldedCount;
- (void)scrollToOffset:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)gdprUserKeyInfoBottomView;
- (_Bool)isWCMallWalletMangeControlLogicNeedShowLoading;
- (void)onBatchFunctionOperateDone;
- (void)onTapOnMangementBtn:(id)arg1;
- (void)refreshView;
- (void)OnStepInOfflinePay;
- (void)caluateDynamicCellHeight:(_Bool)arg1;
- (_Bool)isNeedFold:(unsigned int)arg1;
- (void)refreshViewWithContentOffSet:(struct CGPoint)arg1;
- (void)reloadNavigationItem;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)OnWCPayGetGDPRInfoCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayGetGDPRInfoCgiResponseOK:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

