//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSFavSearchItem, NSMutableArray, UIView;

@interface FTSFavCell : MMTableViewCell
{
    FTSFavSearchItem *_searchItem;
    NSMutableArray *_arrKeyword;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    AttributeLabel *_detailLabel;
    UIView *_thumbImageView;
}

- (void).cxx_destruct;
- (void)setLineSpaceForLabel:(id)arg1;
- (void)updateStatus:(_Bool)arg1;
- (void)updateFavSearchItem:(id)arg1 arrKeyword:(id)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

