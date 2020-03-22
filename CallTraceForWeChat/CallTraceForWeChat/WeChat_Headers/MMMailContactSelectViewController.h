//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCSearcher;
@protocol MMMailContactSelectViewDelegate;

@interface MMMailContactSelectViewController : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *arrMailContact;
    NSMutableArray *arrKeys;
    NSMutableDictionary *dicContacts;
    NSMutableArray *arrSelection;
    _Bool m_bSearching;
    MMTableView *m_tableView;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableSet *setSelectedContacts;
    id <MMMailContactSelectViewDelegate> _delegate;
    id _userInfo;
    WCSearcher *_searcher;
}

@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <MMMailContactSelectViewDelegate> m_delegate; // @synthesize m_delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *setSelectedContacts; // @synthesize setSelectedContacts;
- (void).cxx_destruct;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithMailContacts:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
