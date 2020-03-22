//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCProductDiscountInfo, WCProductInfo;

@protocol IWCProductExt <NSObject>

@optional
- (void)onGotProuductDiscountInfoFail:(NSString *)arg1;
- (void)onGotProuductDiscountInfoSuccess:(NSString *)arg1 discountInfo:(WCProductDiscountInfo *)arg2;
- (void)onGotLastestExpressInfoFail:(NSString *)arg1 lockID:(NSString *)arg2;
- (void)onGotLastestExpressInfoSuccess:(NSString *)arg1 lockID:(NSString *)arg2 expressAry:(NSArray *)arg3 retCode:(int)arg4;
- (void)onSubmitMallFreeOrderFail:(NSString *)arg1;
- (void)onSubmitMallFreeOrderSuccess:(NSString *)arg1 retCode:(int)arg2;
- (void)onSubmitMallOrdFail:(NSString *)arg1 skuID:(NSString *)arg2;
- (void)onSubmitMallOrdSuccess:(NSString *)arg1 skuID:(NSString *)arg2 prepardID:(NSString *)arg3 retCode:(int)arg4 retMsg:(NSString *)arg5;
- (void)onCancelPreOrderFail:(NSString *)arg1 skuID:(NSString *)arg2;
- (void)onCancelPreOrderSuccess:(NSString *)arg1 skuID:(NSString *)arg2;
- (void)onPreSubmitOrderFail:(NSString *)arg1 skuID:(NSString *)arg2;
- (void)onPreSubmitOrderSuccess:(NSString *)arg1 skuID:(NSString *)arg2 lockID:(NSString *)arg3 expressList:(NSArray *)arg4 discountInfoList:(NSArray *)arg5 lockStaus:(int)arg6 errMsg:(NSString *)arg7;
- (void)onGotProductDetailFail:(NSString *)arg1;
- (void)onGotProductDetailSuccess:(WCProductInfo *)arg1 productID:(NSString *)arg2 retCode:(int)arg3;
@end

