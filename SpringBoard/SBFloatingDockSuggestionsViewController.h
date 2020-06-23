//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBFloatingDockSuggestionsModelDelegate-Protocol.h>
#import <SpringBoard/SBFloatingDockSuggestionsViewProviding-Protocol.h>
#import <SpringBoard/SBIconViewProviding-Protocol.h>
#import <SpringBoard/SBIconViewQuerying-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class NSMutableArray, NSSet, NSString, SBAppSuggestionManager, SBApplicationController, SBDockIconListView, SBFloatingDockSuggestionsModel, SBFloatingDockViewController, SBIconController, SBIconListModel, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults;
@protocol SBFloatingDockSuggestionsViewControllerDelegate, SBIconViewProviding;

@interface SBFloatingDockSuggestionsViewController : UIViewController <SBFloatingDockSuggestionsModelDelegate, SBLayoutStateTransitionObserver, SBIconViewProviding, SBFloatingDockSuggestionsViewProviding, SBIconViewQuerying>
{
    _Bool _visible;
    SBFloatingDockViewController *_floatingDockViewController;
    id <SBFloatingDockSuggestionsViewControllerDelegate> _delegate;
    unsigned long long _numberOfRecents;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    SBRecentDisplayItemsDefaults *_recentsDefaults;
    SBAppSuggestionManager *_appSuggestionManager;
    SBIconListModel *_suggestionsIconListModel;
    SBFloatingDockSuggestionsModel *_suggestionsModel;
    NSMutableArray *_deferredIconUpdates;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    long long _effectiveEnvironmentMode;
    id <SBIconViewProviding> _iconViewProvider;
}


// Remaining properties
@property(readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // @synthesize appSuggestionManager=_appSuggestionManager;
@property(readonly, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSMutableArray *deferredIconUpdates; // @synthesize deferredIconUpdates=_deferredIconUpdates;
@property(nonatomic) __weak id <SBFloatingDockSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long effectiveEnvironmentMode; // @synthesize effectiveEnvironmentMode=_effectiveEnvironmentMode;
@property(nonatomic) __weak SBFloatingDockViewController *floatingDockViewController; // @synthesize floatingDockViewController=_floatingDockViewController;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(readonly, nonatomic) id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // @synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator;
@property(retain, nonatomic) SBDockIconListView *listView;
@property(readonly, nonatomic) unsigned long long numberOfRecents; // @synthesize numberOfRecents=_numberOfRecents;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property(readonly, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // @synthesize recentsDataStore=_recentsDataStore;
@property(readonly, nonatomic) SBRecentDisplayItemsDefaults *recentsDefaults; // @synthesize recentsDefaults=_recentsDefaults;
@property(readonly, nonatomic) SBIconListModel *suggestionsIconListModel; // @synthesize suggestionsIconListModel=_suggestionsIconListModel;
@property(readonly, nonatomic) SBFloatingDockSuggestionsModel *suggestionsModel; // @synthesize suggestionsModel=_suggestionsModel;
@property(readonly) Class superclass;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@end
