//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBDisplayLayoutContext-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionSceneEntityFrameProvider-Protocol.h>
#import <SpringBoard/SBSceneViewPresentationConfiguring-Protocol.h>

@class FBDisplayLayoutElement, FBDisplayLayoutTransition, FBSDisplayIdentity, NSArray, NSMutableDictionary, NSMutableSet, NSString, SBLayoutState, SBSceneManager, SBWorkspaceApplicationSceneTransitionContext, UIView;
@protocol SBSceneLayoutViewControllerDelegate;

@interface SBSceneLayoutViewController : UIViewController <SBSceneViewPresentationConfiguring, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, BSDescriptionProviding, SBDisplayLayoutContext>
{
    FBDisplayLayoutElement *_homescreenLayoutElement;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    NSMutableDictionary *_layoutElementControllersByRole;
    NSMutableDictionary *_previousLayoutElementControllersByRole;
    NSMutableDictionary *_reusableLayoutElementControllers;
    NSMutableSet *_elementViewControllerUpdatesSuspensionReasons;
    _Bool _userResizing;
    _Bool _elementViewControllerUpdatesSuspended;
    SBLayoutState *_transitioningFromLayoutState;
    SBLayoutState *_transitioningToLayoutState;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext;
    SBSceneManager *_sceneManager;
    id <SBSceneLayoutViewControllerDelegate> _delegate;
    UIView *_sceneContainerView;
}


// Remaining properties
@property(readonly, nonatomic, getter=_isCurrentlyRotating) _Bool _currentlyRotating;
@property(readonly, nonatomic, getter=_isCurrentlyTransitioning) _Bool _currentlyTransitioning;
@property(readonly, nonatomic) long long _layoutOrientation;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext; // @synthesize _previousSuccessfulTransitionContext;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *_transitionContext; // @synthesize _transitionContext;
@property(readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property(readonly, nonatomic) long long _transitioningFromLayoutOrientation;
@property(readonly, nonatomic) SBLayoutState *_transitioningFromLayoutState; // @synthesize _transitioningFromLayoutState;
@property(readonly, copy, nonatomic) NSArray *_transitioningLayoutElementControllers;
@property(readonly, nonatomic) long long _transitioningToLayoutOrientation;
@property(readonly, nonatomic) SBLayoutState *_transitioningToLayoutState; // @synthesize _transitioningToLayoutState;
@property(readonly, nonatomic) NSArray *appViewControllers;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBSceneLayoutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property(nonatomic, getter=_areElementViewControllerUpdatesSuspended, setter=_setElementViewControllerUpdatesSuspended:) _Bool elementViewControllerUpdatesSuspended; // @synthesize elementViewControllerUpdatesSuspended=_elementViewControllerUpdatesSuspended;
@property(readonly, nonatomic) _Bool hasVisibleElements;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *layoutElementControllers;
@property(readonly, nonatomic) SBLayoutState *layoutState;
@property(readonly, nonatomic) UIView *sceneContainerView; // @synthesize sceneContainerView=_sceneContainerView;
@property(readonly, nonatomic) __weak SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly) Class superclass;
@property(nonatomic, getter=isUserResizing) _Bool userResizing; // @synthesize userResizing=_userResizing;
@end

