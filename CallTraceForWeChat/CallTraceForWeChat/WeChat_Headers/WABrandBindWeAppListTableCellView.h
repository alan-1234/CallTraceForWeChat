//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface WABrandBindWeAppListTableCellView : UITableViewCell
{
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIView *_sepreateLine;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initSeperateLine;
- (void)initTitleLabel;
- (void)initHeadImgeView;
- (void)initView;
- (void)updateDataWithHeadImageURL:(id)arg1 title:(id)arg2 isShowSeperateLine:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

