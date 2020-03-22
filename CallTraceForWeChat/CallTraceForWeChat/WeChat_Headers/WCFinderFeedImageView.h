//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderFeedImageViewProtocol;

@interface WCFinderFeedImageView : UIView
{
    id <WCFinderFeedImageViewProtocol> _delegate;
    UIImageView *_imageView;
    WCFinderAnimationLoadingView *_loadingView;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
}

@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WCFinderFeedImageViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)resumeLoadingAnimationIfNeeded;
- (void)hiddenLoadingAnimationIfNeeded;
- (void)onClickRetry:(id)arg1;
- (_Bool)isExistImage;
- (void)onStateOfError;
- (void)onStateOfNormal:(id)arg1;
- (void)onStateOfLoading;
- (void)layoutSubviews;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

