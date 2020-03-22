//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrandMpVideoItem, CContact, CMessageWrap, NSData, UIImage;

@interface BrandMPVideoOpenParams : NSObject
{
    CMessageWrap *_wrapMsg;
    double _videoCurrTime;
    UIImage *_currFrameImage;
    NSData *_videoThumbData;
    CContact *_contact;
    struct CGRect _originRect;
}

@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSData *videoThumbData; // @synthesize videoThumbData=_videoThumbData;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) UIImage *currFrameImage; // @synthesize currFrameImage=_currFrameImage;
@property(nonatomic) double videoCurrTime; // @synthesize videoCurrTime=_videoCurrTime;
- (void).cxx_destruct;
- (id)description;
- (id)genEmptyMpVideoMsg;
@property(readonly, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;
@property(readonly, nonatomic) BrandMpVideoItem *videoItem;
- (id)initWithFavData:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
