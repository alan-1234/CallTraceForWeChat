//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCPayPwdCtrlPanelView;
@protocol WCPayPayPwdViewControllerDelegate;

@interface WCPayPayPwdViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id <WCPayPayPwdViewControllerDelegate> m_delegate;
    long long _vcTag;
}

@property(nonatomic) long long vcTag; // @synthesize vcTag=_vcTag;
- (void).cxx_destruct;
- (void)setNavigationBarTitle:(id)arg1 Stype:(unsigned long long)arg2;
- (void)becomeInputViewFirstResponse;
- (void)resignInputViewFirstResponse;
- (void)clearPwdInput;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setFooterBtnTitle:(id)arg1;
- (void)showSecondPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(_Bool)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 fromError:(_Bool)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 WithTip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(_Bool)arg3;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (void)leftBarButtonClick;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)dealloc;
- (id)init;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setTitle:(id)arg1;

@end

