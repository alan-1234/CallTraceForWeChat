//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCUserComment;

@interface WCUserCommentUICache : NSObject
{
    WCUserComment *m_userComment;
    map_a50a422b m_contentHeight;
    map_729765ba m_userCommentLayoutStyles;
    map_a50a422b m_transContentHeight;
    map_729765ba m_userTransCommentLayoutStyles;
    _Bool _userHasStory;
    _Bool _refHasStory;
    _Bool _isEmotionComment;
}

@property(nonatomic) _Bool isEmotionComment; // @synthesize isEmotionComment=_isEmotionComment;
@property(nonatomic) _Bool refHasStory; // @synthesize refHasStory=_refHasStory;
@property(nonatomic) _Bool userHasStory; // @synthesize userHasStory=_userHasStory;
@property(retain, nonatomic) WCUserComment *userComment; // @synthesize userComment=m_userComment;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEmpty;
- (map_729765ba *)userTransCommentLayoutStyles;
- (map_a50a422b *)transContentHeight;
- (map_729765ba *)userCommentLayoutStyles;
- (map_a50a422b *)contentHeight;

@end

