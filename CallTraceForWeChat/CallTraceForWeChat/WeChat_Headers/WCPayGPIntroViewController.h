//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class MMScrollView;
@protocol WCPayGPIntroViewControllerDelegate;

@interface WCPayGPIntroViewController : WCPayBaseViewController
{
    id <WCPayGPIntroViewControllerDelegate> _delegate;
    MMScrollView *_contentView;
}

@property(retain, nonatomic) MMScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayGPIntroViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)historyBtnClick;
- (void)launchBtnClick;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

@end

