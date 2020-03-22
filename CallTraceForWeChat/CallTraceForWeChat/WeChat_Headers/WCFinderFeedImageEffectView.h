//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView, WCFinderAnimationLoadingView;
@protocol WCFinderFeedImageViewProtocol;

@interface WCFinderFeedImageEffectView : UIView
{
    id <WCFinderFeedImageViewProtocol> _delegate;
    UIVisualEffectView *_visualView;
    WCFinderAnimationLoadingView *_loadingView;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
}

@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIVisualEffectView *visualView; // @synthesize visualView=_visualView;
@property(nonatomic) __weak id <WCFinderFeedImageViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickRetry:(id)arg1;
- (void)onStateOfError;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)layoutSubviews;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

