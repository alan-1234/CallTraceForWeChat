//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterGameBriefInfo, MMWebImageView, NSArray, UIButton, UIImageView, UILabel;
@protocol GameCenterGameInfoCellDelegate;

@interface GameCenterGameInfoCell : MMTableViewCell
{
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UILabel *_remarkLabel;
    UIImageView *_trendIconView;
    UIButton *_downloadButton;
    UILabel *_buttonCommentLabel;
    unsigned long long _type;
    int _index;
    NSArray *_trendIconNameMap;
    id <GameCenterGameInfoCellDelegate> _delegate;
    GameCenterGameBriefInfo *_gameInfo;
    unsigned long long _actionStyle;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) unsigned long long actionStyle; // @synthesize actionStyle=_actionStyle;
@property(retain, nonatomic) GameCenterGameBriefInfo *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(nonatomic) __weak id <GameCenterGameInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSArray *trendIconNameMap; // @synthesize trendIconNameMap=_trendIconNameMap;
- (void).cxx_destruct;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)layoutContent;
- (void)reloadData;
- (void)setButtonCommentText:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 type:(unsigned long long)arg3;

@end

