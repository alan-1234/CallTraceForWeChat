//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "OpenIMContactSelectViewDelegate-Protocol.h"

@class FavClickStreamHelper, NSDictionary, NSMutableDictionary, NSString, OpenIMContactSelectView;
@protocol SelectOpenIMContactsViewControllerDelegate;

@interface SelectOpenIMContactsViewController : MMUIViewController <OpenIMContactSelectViewDelegate>
{
    OpenIMContactSelectView *m_selectView;
    FavClickStreamHelper *m_clickHelper;
    _Bool _m_bMultiSelect;
    NSDictionary *m_dicExistContact;
    NSDictionary *m_dicIgnoreContact;
    NSMutableDictionary *m_dicMultiSelect;
    id <SelectOpenIMContactsViewControllerDelegate> m_delegate;
}

@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect=_m_bMultiSelect;
@property(nonatomic) __weak id <SelectOpenIMContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) NSDictionary *m_dicIgnoreContact; // @synthesize m_dicIgnoreContact;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
- (void).cxx_destruct;
- (id)getSafeSearchViewController;
- (void)onSelectOpenIMContact:(id)arg1;
- (_Bool)onShouldSelectOpenIMContact:(id)arg1;
- (_Bool)onFilterOpenIMContactCandidate:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isIgnore:(id)arg1;
- (unsigned long long)getTotalSelectCount;
- (void)selectOpenIMContactReturn;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initTitleArea;
- (void)initView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

