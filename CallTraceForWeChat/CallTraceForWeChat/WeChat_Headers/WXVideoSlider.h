//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSString, UIImage;

@interface WXVideoSlider : UISlider
{
    UIImage *_dotImage;
    NSString *_frontgroundImageName;
    NSString *_backgroundImageName;
    double _cornerRadius;
    double _dotImgOverScrollMode;
}

@property(nonatomic) double dotImgOverScrollMode; // @synthesize dotImgOverScrollMode=_dotImgOverScrollMode;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(retain, nonatomic) NSString *frontgroundImageName; // @synthesize frontgroundImageName=_frontgroundImageName;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
- (void).cxx_destruct;
- (id)getFrontgroundImage;
- (id)getBackgroundImage;
- (void)initView;

@end

