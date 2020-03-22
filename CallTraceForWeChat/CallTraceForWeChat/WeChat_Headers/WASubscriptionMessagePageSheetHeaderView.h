//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, MMWebImageView, UIButton, WASubscriptionMessagePageSheetViewModel;
@protocol WASubscriptionMessagePageSheetHeaderViewDelegate;

@interface WASubscriptionMessagePageSheetHeaderView : MMUIView
{
    id <WASubscriptionMessagePageSheetHeaderViewDelegate> _delegate;
    MMWebImageView *_iconView;
    MMUILabel *_appNameLabel;
    MMUILabel *_applyLabel;
    UIButton *_infoButton;
    MMUILabel *_mainDescriptionLabel;
    MMUILabel *_subDescriptionLabel;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
}

@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUILabel *subDescriptionLabel; // @synthesize subDescriptionLabel=_subDescriptionLabel;
@property(retain, nonatomic) MMUILabel *mainDescriptionLabel; // @synthesize mainDescriptionLabel=_mainDescriptionLabel;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) MMUILabel *applyLabel; // @synthesize applyLabel=_applyLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WASubscriptionMessagePageSheetHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onInfoButtonClicked:(id)arg1;
- (_Bool)showInfoButton;
- (_Bool)showSubDescriptionLabel;
- (double)subDescriptionHeight:(double)arg1;
- (void)layoutSubviews;
- (double)calculateHeight:(double)arg1;
- (void)addSubviews:(id)arg1;
- (void)loadAllSubviews;
- (id)initWithViewModel:(id)arg1;

@end

