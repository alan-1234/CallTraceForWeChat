//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageInitialViewDelegate-Protocol.h"
#import "EditVideoLogicItemDelegate-Protocol.h"
#import "MMImageCropperDelegate-Protocol.h"
#import "MonoServiceLogicExt-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCEditImageViewControllerDelegate-Protocol.h"
#import "WCEditVideoViewControllerDelegate-Protocol.h"

@class EditImageAttr, EditImageIntialView, EditVideoAttr, EditVideoLogicItem, MMCircularProgressView, MMImageCropperViewController, MMLoadingView, MMSightRecordView, NSMutableArray, NSString, ShortVideoToolbarPreviewView, SightCameraTopToolView, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol ShortVideoBarDelegate, SightPreviewView;

@interface ShortVideoToolbar : MMUIView <MonoServiceLogicExt, EditVideoLogicItemDelegate, MMImageCropperDelegate, WCEditVideoViewControllerDelegate, WCEditImageViewControllerDelegate, UITextFieldDelegate, EditImageInitialViewDelegate>
{
    _Bool m_isActive;
    double m_topPositon;
    double m_dragDeltaFix;
    int m_cameraState;
    _Bool m_dragZoomTrigger;
    _Bool m_inCombolMode;
    NSMutableArray *m_recordIDAry;
    UIButton *m_captureBtn;
    MMSightRecordView *m_recordButtonView;
    UILabel *m_tipsLabel;
    UIImageView *m_tipsLabelBG;
    UILabel *m_zoomTipsLabel;
    unsigned long long m_cameraMode;
    UIView *m_topBar;
    UIView *m_topBarIcon;
    UIView *m_topBarIconActive;
    _Bool m_requestAuthAccess;
    UIView *m_motionTipsView;
    _Bool m_motionDetected;
    UIButton *m_toolbarCancelButton;
    _Bool m_lightBoostStat;
    _Bool m_lightBoostOpenStat;
    unsigned int m_validReshowLightBoostCmd;
    UIButton *m_lightBoostButton;
    long long m_currentOrientation;
    _Bool m_hasRealStartedForPreStartRecording;
    double m_zoomScaleAtLastPanGesture;
    _Bool m_isPinching;
    float _videoDuration;
    _Bool _draggable;
    _Bool _isShowingPreview;
    _Bool _m_writerTimeout;
    _Bool _m_cameraOpened;
    _Bool _m_shouldContinueRecording;
    _Bool _m_isTakingPicture;
    _Bool _isShortVideoToolbarUIStyleDefault;
    _Bool _isShortVideoToolbarUIStyleFullScreen;
    _Bool _isShortVideoToolbarUIStyleSmallScreen;
    _Bool _showTipsReady;
    int _recordState;
    int _btnState;
    unsigned int _m_currWriterID;
    unsigned int _m_tipsCounter;
    unsigned long long _toolItems;
    id <ShortVideoBarDelegate> _delegate;
    UIView<SightPreviewView> *_m_cameraPreviewView;
    EditVideoAttr *_editVideoAttr;
    unsigned long long _camSwitchTiming;
    UIView *_m_tipsView;
    UIView *_m_cancelTips;
    MMCircularProgressView *_m_circleProgress;
    UIView *_m_maskWindow;
    ShortVideoToolbarPreviewView *_m_resultPreviewView;
    UIButton *_m_hideBarBtn;
    UIButton *_m_albumBtn;
    double _m_lastZoomScale;
    SightCameraTopToolView *_m_sightCameraTopToolView;
    UIView *_m_toolBar;
    UIImageView *_m_senterAnimView;
    UIView *_m_contentView;
    UIImage *_m_originalImage;
    UIImage *_m_waitingSendImage;
    EditImageAttr *_m_editImageAttr;
    EditImageIntialView *_m_editImageInitialView;
    MMLoadingView *_m_loadingView;
    unsigned long long _m_scene;
    NSString *_m_statChatUserName;
    EditVideoLogicItem *_m_editVideoLogicItem;
    NSString *_m_videoPath;
    NSString *_m_waitingSendVideoPath;
    UIImage *_m_thumbImage;
    MMImageCropperViewController *_m_cropperVC;
}

@property(nonatomic) _Bool showTipsReady; // @synthesize showTipsReady=_showTipsReady;
@property(nonatomic) _Bool isShortVideoToolbarUIStyleSmallScreen; // @synthesize isShortVideoToolbarUIStyleSmallScreen=_isShortVideoToolbarUIStyleSmallScreen;
@property(nonatomic) _Bool isShortVideoToolbarUIStyleFullScreen; // @synthesize isShortVideoToolbarUIStyleFullScreen=_isShortVideoToolbarUIStyleFullScreen;
@property(nonatomic) _Bool isShortVideoToolbarUIStyleDefault; // @synthesize isShortVideoToolbarUIStyleDefault=_isShortVideoToolbarUIStyleDefault;
@property(retain, nonatomic) MMImageCropperViewController *m_cropperVC; // @synthesize m_cropperVC=_m_cropperVC;
@property(retain, nonatomic) UIImage *m_thumbImage; // @synthesize m_thumbImage=_m_thumbImage;
@property(copy, nonatomic) NSString *m_waitingSendVideoPath; // @synthesize m_waitingSendVideoPath=_m_waitingSendVideoPath;
@property(copy, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(retain, nonatomic) EditVideoLogicItem *m_editVideoLogicItem; // @synthesize m_editVideoLogicItem=_m_editVideoLogicItem;
@property(copy, nonatomic) NSString *m_statChatUserName; // @synthesize m_statChatUserName=_m_statChatUserName;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView=_m_loadingView;
@property(retain, nonatomic) EditImageIntialView *m_editImageInitialView; // @synthesize m_editImageInitialView=_m_editImageInitialView;
@property(retain, nonatomic) EditImageAttr *m_editImageAttr; // @synthesize m_editImageAttr=_m_editImageAttr;
@property(retain, nonatomic) UIImage *m_waitingSendImage; // @synthesize m_waitingSendImage=_m_waitingSendImage;
@property(retain, nonatomic) UIImage *m_originalImage; // @synthesize m_originalImage=_m_originalImage;
@property(nonatomic) _Bool m_isTakingPicture; // @synthesize m_isTakingPicture=_m_isTakingPicture;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIImageView *m_senterAnimView; // @synthesize m_senterAnimView=_m_senterAnimView;
@property(nonatomic) _Bool m_shouldContinueRecording; // @synthesize m_shouldContinueRecording=_m_shouldContinueRecording;
@property(retain, nonatomic) UIView *m_toolBar; // @synthesize m_toolBar=_m_toolBar;
@property(retain, nonatomic) SightCameraTopToolView *m_sightCameraTopToolView; // @synthesize m_sightCameraTopToolView=_m_sightCameraTopToolView;
@property(nonatomic) double m_lastZoomScale; // @synthesize m_lastZoomScale=_m_lastZoomScale;
@property(retain, nonatomic) UIButton *m_albumBtn; // @synthesize m_albumBtn=_m_albumBtn;
@property(retain, nonatomic) UIButton *m_hideBarBtn; // @synthesize m_hideBarBtn=_m_hideBarBtn;
@property(retain, nonatomic) ShortVideoToolbarPreviewView *m_resultPreviewView; // @synthesize m_resultPreviewView=_m_resultPreviewView;
@property(retain, nonatomic) UIView *m_maskWindow; // @synthesize m_maskWindow=_m_maskWindow;
@property(nonatomic) unsigned int m_tipsCounter; // @synthesize m_tipsCounter=_m_tipsCounter;
@property(retain, nonatomic) MMCircularProgressView *m_circleProgress; // @synthesize m_circleProgress=_m_circleProgress;
@property(retain, nonatomic) UIView *m_cancelTips; // @synthesize m_cancelTips=_m_cancelTips;
@property(retain, nonatomic) UIView *m_tipsView; // @synthesize m_tipsView=_m_tipsView;
@property(nonatomic) _Bool m_cameraOpened; // @synthesize m_cameraOpened=_m_cameraOpened;
@property(nonatomic) _Bool m_writerTimeout; // @synthesize m_writerTimeout=_m_writerTimeout;
@property(nonatomic) unsigned int m_currWriterID; // @synthesize m_currWriterID=_m_currWriterID;
@property(nonatomic) unsigned long long camSwitchTiming; // @synthesize camSwitchTiming=_camSwitchTiming;
@property(nonatomic) int btnState; // @synthesize btnState=_btnState;
@property(nonatomic) int recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) UIView<SightPreviewView> *m_cameraPreviewView; // @synthesize m_cameraPreviewView=_m_cameraPreviewView;
@property(nonatomic) __weak id <ShortVideoBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long toolItems; // @synthesize toolItems=_toolItems;
@property(nonatomic) _Bool isShowingPreview; // @synthesize isShowingPreview=_isShowingPreview;
@property(nonatomic) _Bool draggable; // @synthesize draggable=_draggable;
@property(nonatomic) double topPosition; // @synthesize topPosition=m_topPositon;
@property(nonatomic) _Bool active; // @synthesize active=m_isActive;
@property(nonatomic) int cameraState; // @synthesize cameraState=m_cameraState;
- (void).cxx_destruct;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)onClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;
- (id)currentViewController;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)onPreviewImageClickCancel;
- (unsigned long long)sightCaptureScene2EditVideoEntrance;
- (int)sightCaptureScene2ImagePickerScene;
- (unsigned long long)sightCaptureScene2EditImageEnterScene;
- (void)showPreviewViewWithImage:(id)arg1 imageData:(id)arg2;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3;
- (void)stopPreview;
- (void)didTapRetakeButton;
- (id)cameraSwitchTimingLogString;
- (id)cameraModeLogStringWithIsVideo:(_Bool)arg1;
- (_Bool)isChatRoomUserName:(id)arg1;
- (void)hideToolBar;
- (void)showTopBar;
- (void)hideTopBar;
- (void)showMaskWindow;
- (void)startDeactiveAnimation;
- (void)startActiveAnimation:(_Bool)arg1;
- (void)setActive:(_Bool)arg1 fromShake:(_Bool)arg2;
- (void)deActiveWithoutAnimation;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanPreview:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleFocusTap:(id)arg1 inView:(id)arg2;
- (void)focusCenter;
- (void)onShaky;
- (void)resetMotionTipsView;
- (void)setupMotionDetector;
- (void)onDragEnd:(double)arg1;
- (void)onDrag:(struct CGPoint)arg1;
- (void)onBtnClick:(id)arg1;
- (void)onMovieCompressFinished:(id)arg1;
- (void)onWriterResign;
- (void)onWriterFailed:(id)arg1;
- (void)onTakenPicture:(id)arg1 imageData:(id)arg2;
- (void)btnRelease;
- (void)btnDragging:(id)arg1;
- (void)btnDragInside;
- (void)btnDragOutSide;
- (void)showFlashingEffect;
- (void)btnPress;
- (void)tryCancelPreStartRecording;
- (void)cancelWriterWithoutReprepare;
- (void)cancelWriter;
- (void)finishWriter;
- (void)startWriter;
- (id)getShineAnim;
- (void)turnBarNormalize;
- (void)turnBarCanceling;
- (void)turnBarRecording:(_Bool)arg1;
- (void)turnBarRecording;
- (void)turnBarRecordingLongAnim;
- (void)logicCheckState:(int)arg1;
- (void)takePicture;
- (void)hideCancelTips;
- (void)showCancelTips;
- (void)hideTips;
- (void)fadeInTips;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3 fontSize:(double)arg4;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3;
- (void)pauseCamera;
- (void)resumeCamera;
- (void)onCameraStop:(id)arg1;
- (void)onCameraAudioOK:(id)arg1;
- (void)onCameraPreviewOK:(id)arg1;
- (void)switchCamera;
- (float)sightCaptureMaxDuration;
- (void)releasePreview;
- (void)tryCreatePreview;
- (void)dealloc;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)initTipsLabel;
- (void)setupAlbumBtn;
- (void)setupToolBar;
- (void)setupPreView;
- (void)setupTopBar;
- (void)updateBlurImage;
- (id)makeBGMaskView;
- (void)setupBackgroundView;
- (void)setupView;
- (unsigned long long)getShortVideoToolbarUIStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 toolItems:(unsigned long long)arg2 cameraMode:(unsigned long long)arg3 scene:(unsigned long long)arg4;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)dismissForVOIPEvents;
- (void)rotateToOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

