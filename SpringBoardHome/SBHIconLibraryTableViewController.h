//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHTableViewController.h>

#import <SpringBoardHome/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoardHome/SBHLibraryChildViewController-Protocol.h>
#import <SpringBoardHome/SBHSearchResultsUpdating-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>

@class NSSet, NSString, SBFolderIconImageCache, SBHAppLibrarySettings, SBHIconImageCache, SBHIconLibraryQuery, SBHIconModel, SBHIconTableViewDiffableDataSource, SBHLibraryCategoryMap, SBHLibrarySearchController, SBHTableViewIconLibrary, SBRootFolder, UILabel, UIView, _UILegibilitySettings;
@protocol SBHIconLibraryTableViewControllerObserver, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBHIconLibraryTableViewController : SBHTableViewController <SBIconObserver, SBIconViewObserver, PTSettingsKeyObserver, SBHLibraryChildViewController, SBHSearchResultsUpdating>
{
    UILabel *_noResultsLabel;
    _Bool _showHeaders;
    SBHAppLibrarySettings *_settings;
    _UILegibilitySettings *_legibilitySettings;
    SBHIconTableViewDiffableDataSource *_dataSource;
    SBHIconImageCache *_iconImageCache;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    SBHLibrarySearchController *_searchController;
    id <SBIconViewProviding> _iconViewProvider;
    id <SBHIconLibraryTableViewControllerObserver> _observer;
    SBHIconModel *_iconModel;
    SBRootFolder *_rootFolder;
    SBHLibraryCategoryMap *_libraryCategoryMap;
    UIView *_headerBlurView;
    SBHTableViewIconLibrary *_library;
    SBHIconLibraryQuery *_currentQuery;
}


// Remaining properties
@property(readonly, nonatomic) SBHIconLibraryQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly, nonatomic) SBHIconTableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *headerBlurView; // @synthesize headerBlurView=_headerBlurView;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(retain, nonatomic) id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBHTableViewIconLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // @synthesize libraryCategoryMap=_libraryCategoryMap;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(nonatomic) __weak id <SBHIconLibraryTableViewControllerObserver> observer; // @synthesize observer=_observer;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property(retain, nonatomic) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(nonatomic) __weak SBHLibrarySearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly) Class superclass;
@end

