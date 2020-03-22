//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController, WAContact, WAH5ViewControllerParameter, WAProfileViewControllerParameter, WAReportWebViewErrorPageItem;
@protocol IWCBaseWebViewControllerProtocol;

@protocol IWABusinessService <NSObject>
+ (NSDictionary *)getLoginUsrInfo;
+ (_Bool)isLogin;
+ (UIViewController *)genAppAuthSettingWithWeAppContact:(WAContact *)arg1;
+ (UIViewController *)genProfileWithParameter:(WAProfileViewControllerParameter *)arg1;
+ (UIViewController<IWCBaseWebViewControllerProtocol> *)genWebViewController:(WAH5ViewControllerParameter *)arg1;
+ (UIViewController *)genCommentWithWeAppContact:(WAContact *)arg1;
+ (void)onScanMsgNodePkgQRCodeWithAppId:(NSString *)arg1 debugMode:(int)arg2 url:(NSString *)arg3 checkSum:(NSString *)arg4;
+ (void)onReportWAWebViewPageError:(WAReportWebViewErrorPageItem *)arg1;
+ (void)onWeAppDidPresentWithPresentingViewController:(UIViewController *)arg1;
+ (void)onWeAppTaskCancelledWithAppId:(NSString *)arg1;
+ (void)showUserGuide;
+ (void)checkShowFirstQuitEducationWhenExit;
+ (_Bool)showShareToWX;
@end

