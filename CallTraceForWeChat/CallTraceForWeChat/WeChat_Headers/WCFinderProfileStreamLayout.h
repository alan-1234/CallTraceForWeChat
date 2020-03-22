//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol WCFinderProfileStreamLayoutDelegate;

@interface WCFinderProfileStreamLayout : UICollectionViewLayout
{
    id <WCFinderProfileStreamLayoutDelegate> _delegate;
    double _cellStartTop;
    NSMutableArray *_attrsArr;
    NSMutableArray *_columnHeights;
    double _maxContentHeight;
    double _headerTopOffset;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
}

@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) double headerTopOffset; // @synthesize headerTopOffset=_headerTopOffset;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) double maxContentHeight; // @synthesize maxContentHeight=_maxContentHeight;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSMutableArray *attrsArr; // @synthesize attrsArr=_attrsArr;
@property(nonatomic) double cellStartTop; // @synthesize cellStartTop=_cellStartTop;
@property(nonatomic) __weak id <WCFinderProfileStreamLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)setupDecorationViewatIndexPath:(id)arg1 top:(double)arg2;
- (double)maxYWithColumnHeightsArray:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setupAttrsArray;
- (void)setupColumnHeightsArray;
- (void)setupSectionFooter;
- (void)setupSectionHeader;
- (void)clearData;
- (void)prepareLayout;
- (struct UIEdgeInsets)edgeInsets;
- (double)rowMargin;
- (double)columnMargin;
- (unsigned long long)columnCount;

@end

