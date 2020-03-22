//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@protocol WCCanvasFloatViewDelegate;

@interface WCCanvasFloatView : MMUIView
{
    _Bool _forbiddenLayoutComponent;
    id <WCCanvasFloatViewDelegate> _delegate;
}

@property(nonatomic) _Bool forbiddenLayoutComponent; // @synthesize forbiddenLayoutComponent=_forbiddenLayoutComponent;
@property(nonatomic) __weak id <WCCanvasFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)showBGView;
- (id)getComponent;
- (void)dealloc;
- (void)notifyViewDidAppear;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)closeFloatView:(id)arg1 forEvent:(id)arg2;
- (id)initWithComponent:(id)arg1;

@end

