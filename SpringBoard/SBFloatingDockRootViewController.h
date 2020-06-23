//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBFloatingDockViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBIconLocationPresenting-Protocol.h>
#import <SpringBoard/SBIconViewQuerying-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class FBDisplayLayoutElement, NSSet, NSString, SBAppSuggestionManager, SBApplication, SBApplicationController, SBFAnalyticsClient, SBFloatingDockSuggestionsModel, SBFloatingDockViewController, SBFolderController, SBIconController, SBIconListView, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBWorkspaceApplicationSceneTransitionContext, _UILegibilitySettings;
@protocol SBFloatingDockRootViewControllerDelegate, SBIconViewProviding;

@interface SBFloatingDockRootViewController : SBFTouchPassThroughViewController <SBFloatingDockViewControllerDelegate, UIGestureRecognizerDelegate, SBIconViewQuerying, SBIconLocationPresenting>
{
    struct {
        unsigned int floatingDockRootViewControllerShouldHandlePanGestureRecognizer:1;
    } _delegateRespondsTo;
    double _presentedProgress;
    _Bool _supressingKeyboard;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _transitioningPresentation;
    _Bool _useDismissHitTestPadding;
    SBFloatingDockSuggestionsModel *_suggestionsModel;
    id <SBFloatingDockRootViewControllerDelegate> _delegate;
    SBApplication *_requestedSuggestedApplication;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBFloatingDockViewController *_floatingDockViewController;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBAppSuggestionManager *_appSuggestionManager;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    SBRecentDisplayItemsController *_recentsController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    SBFAnalyticsClient *_analyticsClient;
    SBWorkspaceApplicationSceneTransitionContext *_currentTransitionContext;
    id <SBIconViewProviding> _iconViewProvider;
}


// Remaining properties
@property(retain, nonatomic) SBFAnalyticsClient *analyticsClient; // @synthesize analyticsClient=_analyticsClient;
@property(readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // @synthesize appSuggestionManager=_appSuggestionManager;
@property(readonly, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *currentTransitionContext; // @synthesize currentTransitionContext=_currentTransitionContext;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBFloatingDockRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, nonatomic) double effectiveFloatingDockHeight;
@property(readonly, nonatomic, getter=isFloatingDockFullyPresented) _Bool floatingDockFullyPresented;
@property(readonly, nonatomic) double floatingDockHeight;
@property(readonly, nonatomic, getter=isFloatingDockPresented) _Bool floatingDockPresented;
@property(readonly, nonatomic) struct CGRect floatingDockScreenFrame;
@property(readonly, nonatomic) struct CGRect floatingDockScreenPresentationFrame;
@property(retain, nonatomic) SBFloatingDockViewController *floatingDockViewController; // @synthesize floatingDockViewController=_floatingDockViewController;
@property(readonly, nonatomic) double floatingDockViewTopMargin;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // @synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) double maximumDockContinuousCornerRadius;
@property(readonly, nonatomic) double maximumFloatingDockHeight;
@property(readonly, nonatomic) double preferredVerticalMargin;
@property(readonly, nonatomic) SBFolderController *presentedFolderController;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property(readonly, nonatomic) double presentedProgress;
@property(readonly, nonatomic, getter=isPresentingFolder) _Bool presentingFolder;
@property(retain, nonatomic) SBRecentDisplayItemsController *recentsController; // @synthesize recentsController=_recentsController;
@property(retain, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // @synthesize recentsDataStore=_recentsDataStore;
@property(retain, nonatomic) SBApplication *requestedSuggestedApplication; // @synthesize requestedSuggestedApplication=_requestedSuggestedApplication;
@property(readonly, nonatomic) SBIconListView *suggestionsIconListView;
@property(retain, nonatomic) SBFloatingDockSuggestionsModel *suggestionsModel; // @synthesize suggestionsModel=_suggestionsModel;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioningPresentation) _Bool transitioningPresentation; // @synthesize transitioningPresentation=_transitioningPresentation;
@property(readonly, nonatomic) double translationFromFullyPresentedFrame;
@property(nonatomic) _Bool useDismissHitTestPadding; // @synthesize useDismissHitTestPadding=_useDismissHitTestPadding;
@property(readonly, nonatomic) SBIconListView *userIconListView;
@end

