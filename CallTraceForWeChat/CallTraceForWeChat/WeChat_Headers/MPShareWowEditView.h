//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "InputControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMGrowTextView, MMUIButton, MMUILabel, MMUIViewController, NSString, UIButton, UIScrollView, WCInputController;
@protocol MPShareWowEditViewDelegate;

@interface MPShareWowEditView : UIView <MMGrowTextViewDelegate, InputControllerDelegate, UIScrollViewDelegate>
{
    unsigned int _theme;
    double _defaultHeight;
    id <MPShareWowEditViewDelegate> _delegate;
    MMUIViewController *_viewController;
    UIView *_navBarView;
    MMUILabel *_titleLabel;
    MMUIButton *_closeBtn;
    UIButton *_commitBtn;
    UIScrollView *_scrollView;
    MMGrowTextView *_textView;
    UIView *_bgMaskView;
    double _contentOffsetYWhenBeginDragging;
    double _textViewAjustHeight;
    WCInputController *_inputController;
}

@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) double textViewAjustHeight; // @synthesize textViewAjustHeight=_textViewAjustHeight;
@property(nonatomic) double contentOffsetYWhenBeginDragging; // @synthesize contentOffsetYWhenBeginDragging=_contentOffsetYWhenBeginDragging;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MPShareWowEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(nonatomic) unsigned int theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClickCloseBtn;
- (void)onClickCommitBtn;
- (void)keyboardWillShow;
- (void)clearTextView;
- (double)getVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)layoutSubviews;
- (void)initInputController;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initTextView;
- (void)initScrollView;
- (void)initNavBarView;
- (void)onTapCommentEditMaskView;
- (void)initBgMaskView;
- (void)initSubviews;
- (void)endEdit;
- (void)beginEdit;
- (void)updateHeightWhenKeyboardShowWithAnimated:(_Bool)arg1;
- (void)setHiddenWithAnimation:(_Bool)arg1;
- (id)initWithViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

