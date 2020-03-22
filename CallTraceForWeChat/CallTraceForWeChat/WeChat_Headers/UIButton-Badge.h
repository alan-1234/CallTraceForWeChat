//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UIFont, UILabel;

@interface UIButton (Badge)
@property _Bool shouldAnimateBadge; // @dynamic shouldAnimateBadge;
@property _Bool shouldHideBadgeAtZero; // @dynamic shouldHideBadgeAtZero;
@property(nonatomic) double badgeOriginY; // @dynamic badgeOriginY;
@property(nonatomic) double badgeOriginX; // @dynamic badgeOriginX;
@property(nonatomic) double badgeMinSize; // @dynamic badgeMinSize;
@property(nonatomic) double badgePadding; // @dynamic badgePadding;
@property(retain, nonatomic) UIFont *badgeFont; // @dynamic badgeFont;
@property(retain, nonatomic) UIColor *badgeTextColor; // @dynamic badgeTextColor;
@property(retain, nonatomic) UIColor *badgeBGColor; // @dynamic badgeBGColor;
@property(retain, nonatomic) NSString *badgeValue; // @dynamic badgeValue;
@property(retain, nonatomic) UILabel *badge;
- (void)removeBadge;
- (id)duplicateLabel:(id)arg1;
- (void)updateBadgeValueAnimated:(_Bool)arg1;
- (void)updateBadgeFrame;
- (struct CGSize)badgeExpectedSize;
- (void)refreshBadge;
- (void)badgeInit;
@end

