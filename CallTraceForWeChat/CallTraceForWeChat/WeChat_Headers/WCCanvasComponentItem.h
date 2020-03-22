//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"
#import "WCCanvasIfAbility-Protocol.h"

@class NSMutableArray, NSString, WCAdSphereCardInfo, WCCanvasAbilitySliderInfo, WCCanvasComponentButtonInfo, WCCanvasComponentFloatActionButtonInfo, WCCanvasComponentFullScreenImageInfo, WCCanvasComponentLocationInfo, WCCanvasComponentNewScrollInfo, WCCanvasComponentOverLongImageInfo, WCCanvasComponentPreloadWebViewInfo, WCCanvasComponentPureImageInfo, WCCanvasComponentSightVideoInfo, WCCanvasComponentStreamVideoInfo, WCCanvasComponentTelephoneInfo, WCCanvasComponentTextAreaInfo, WCCanvasComponentTurnImagesInfo, WCCanvasComponentWebViewInfo, WCCanvasFrameLayoutInfo, WCCanvasLinearLayoutInfo, WCCanvasRadarChartInfo, WCCanvsComponentPanoramaInfo, WCCanvsComponentScrollGroupListInfo;

@interface WCCanvasComponentItem : MMObject <NSCoding, WCCanvasIfAbility>
{
    _Bool _hasUpdateDynamicData;
    int canvasIf;
    int hasIf;
    int _type;
    int _subType;
    int _verticalAlignment;
    int _horizontalAlignment;
    int _noReport;
    int _downloadScene;
    NSMutableArray *dynamicsInfo;
    NSString *_cid;
    NSString *_bgColor;
    WCCanvasComponentTextAreaInfo *_textAreaInfo;
    WCCanvasComponentButtonInfo *_buttonInfo;
    WCCanvasComponentPureImageInfo *_pureImageInfo;
    WCCanvasComponentTurnImagesInfo *_turnImagesInfo;
    WCCanvasComponentOverLongImageInfo *_overLongImageInfo;
    WCCanvasComponentSightVideoInfo *_sightVideoInfo;
    WCCanvasComponentStreamVideoInfo *_streamVideoInfo;
    WCCanvasComponentWebViewInfo *_webViewInfo;
    WCCanvasComponentPreloadWebViewInfo *_preloadWebViewInfo;
    WCCanvsComponentPanoramaInfo *_panoramaInfo;
    WCCanvasComponentFullScreenImageInfo *_fullScreenImageInfo;
    WCCanvsComponentScrollGroupListInfo *_scrollGroupListInfo;
    WCCanvasComponentNewScrollInfo *_oNewScrollInfo;
    WCCanvasComponentLocationInfo *_locationInfo;
    WCCanvasComponentTelephoneInfo *_telephoneInfo;
    WCCanvasAbilitySliderInfo *_abilitySliderInfo;
    WCCanvasRadarChartInfo *_radarChartInfo;
    WCCanvasLinearLayoutInfo *_linearLayoutInfo;
    WCCanvasFrameLayoutInfo *_frameLayoutInfo;
    WCAdSphereCardInfo *_sphereInfo;
    WCCanvasComponentFloatActionButtonInfo *_floatActionButtonInfo;
    double _paddingTop;
    double _paddingBottom;
    double _paddingLeft;
    double _paddingRight;
    double _layoutWidth;
    double _layoutHeight;
    double _paddingBottomSupplemental;
    double _floatStartTime;
    NSString *_floatComponentId;
}

@property(retain, nonatomic) NSString *floatComponentId; // @synthesize floatComponentId=_floatComponentId;
@property(nonatomic) double floatStartTime; // @synthesize floatStartTime=_floatStartTime;
@property(nonatomic) int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) double paddingBottomSupplemental; // @synthesize paddingBottomSupplemental=_paddingBottomSupplemental;
@property(nonatomic) int noReport; // @synthesize noReport=_noReport;
@property(nonatomic) _Bool hasUpdateDynamicData; // @synthesize hasUpdateDynamicData=_hasUpdateDynamicData;
@property(nonatomic) int horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) WCCanvasComponentFloatActionButtonInfo *floatActionButtonInfo; // @synthesize floatActionButtonInfo=_floatActionButtonInfo;
@property(retain, nonatomic) WCAdSphereCardInfo *sphereInfo; // @synthesize sphereInfo=_sphereInfo;
@property(retain, nonatomic) WCCanvasFrameLayoutInfo *frameLayoutInfo; // @synthesize frameLayoutInfo=_frameLayoutInfo;
@property(retain, nonatomic) WCCanvasLinearLayoutInfo *linearLayoutInfo; // @synthesize linearLayoutInfo=_linearLayoutInfo;
@property(retain, nonatomic) WCCanvasRadarChartInfo *radarChartInfo; // @synthesize radarChartInfo=_radarChartInfo;
@property(retain, nonatomic) WCCanvasAbilitySliderInfo *abilitySliderInfo; // @synthesize abilitySliderInfo=_abilitySliderInfo;
@property(retain, nonatomic) WCCanvasComponentTelephoneInfo *telephoneInfo; // @synthesize telephoneInfo=_telephoneInfo;
@property(retain, nonatomic) WCCanvasComponentLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) WCCanvasComponentNewScrollInfo *oNewScrollInfo; // @synthesize oNewScrollInfo=_oNewScrollInfo;
@property(retain, nonatomic) WCCanvsComponentScrollGroupListInfo *scrollGroupListInfo; // @synthesize scrollGroupListInfo=_scrollGroupListInfo;
@property(retain, nonatomic) WCCanvasComponentFullScreenImageInfo *fullScreenImageInfo; // @synthesize fullScreenImageInfo=_fullScreenImageInfo;
@property(retain, nonatomic) WCCanvsComponentPanoramaInfo *panoramaInfo; // @synthesize panoramaInfo=_panoramaInfo;
@property(retain, nonatomic) WCCanvasComponentPreloadWebViewInfo *preloadWebViewInfo; // @synthesize preloadWebViewInfo=_preloadWebViewInfo;
@property(retain, nonatomic) WCCanvasComponentWebViewInfo *webViewInfo; // @synthesize webViewInfo=_webViewInfo;
@property(retain, nonatomic) WCCanvasComponentStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo=_streamVideoInfo;
@property(retain, nonatomic) WCCanvasComponentSightVideoInfo *sightVideoInfo; // @synthesize sightVideoInfo=_sightVideoInfo;
@property(retain, nonatomic) WCCanvasComponentOverLongImageInfo *overLongImageInfo; // @synthesize overLongImageInfo=_overLongImageInfo;
@property(retain, nonatomic) WCCanvasComponentTurnImagesInfo *turnImagesInfo; // @synthesize turnImagesInfo=_turnImagesInfo;
@property(retain, nonatomic) WCCanvasComponentPureImageInfo *pureImageInfo; // @synthesize pureImageInfo=_pureImageInfo;
@property(retain, nonatomic) WCCanvasComponentButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(retain, nonatomic) WCCanvasComponentTextAreaInfo *textAreaInfo; // @synthesize textAreaInfo=_textAreaInfo;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) int hasIf; // @synthesize hasIf;
@property(nonatomic) int canvasIf; // @synthesize canvasIf;
@property(retain, nonatomic) NSMutableArray *dynamicsInfo; // @synthesize dynamicsInfo;
- (void).cxx_destruct;
- (double)jumpStreamVideoTextHeight;
- (_Bool)isNeedShowStreamVideoBtn;
- (void)allowAllVideoComponentsMakingVoice:(_Bool)arg1;
- (id)getInnerFirstVideoComponentItem;
- (_Bool)updateUsingDynamicInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

