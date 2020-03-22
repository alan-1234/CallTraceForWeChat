//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderContactExt-Protocol.h"

@class MMWebImageView, NSString;
@protocol WCFinderHeadImageViewDelegate;

@interface WCFinderHeadImageView : UIView <WCFinderContactExt>
{
    _Bool _autoUpdateImage;
    id <WCFinderHeadImageViewDelegate> _delegate;
    MMWebImageView *_headImageView;
    NSString *_finderKey;
}

+ (id)getDefaultImage;
+ (void)saveImageData:(id)arg1 URLString:(id)arg2;
+ (id)getLocalImageWithURLString:(id)arg1;
+ (id)getLocalImageWithContact:(id)arg1;
+ (_Bool)isCacheImageWithURLString:(id)arg1;
+ (_Bool)isCacheImageWithContact:(id)arg1;
@property(nonatomic, getter=isAutoUpdateImage) _Bool autoUpdateImage; // @synthesize autoUpdateImage=_autoUpdateImage;
@property(copy, nonatomic) NSString *finderKey; // @synthesize finderKey=_finderKey;
@property(nonatomic) __weak MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WCFinderHeadImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFinderContactUpdate:(id)arg1;
- (void)dealloc;
- (void)headImageViewDidClick;
- (void)resetDefaultImage;
- (void)updateImageWithHeadURLString:(id)arg1;
- (void)updateImageWithContact:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupUI;
- (id)initWithAutoUpdateImage:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
