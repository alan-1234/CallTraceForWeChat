//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface BrandChannelVideoGroupView : UIView
{
    NSMutableArray *_arrCellView;
    NSArray *_arrCellParams;
    double _cellViewSize;
}

@property(nonatomic) double cellViewSize; // @synthesize cellViewSize=_cellViewSize;
@property(retain, nonatomic) NSArray *arrCellParams; // @synthesize arrCellParams=_arrCellParams;
@property(retain, nonatomic) NSMutableArray *arrCellView; // @synthesize arrCellView=_arrCellView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)fillWithCellParamsArr:(id)arg1;
- (id)initWithCellViewSize:(double)arg1;
- (id)init;

@end
