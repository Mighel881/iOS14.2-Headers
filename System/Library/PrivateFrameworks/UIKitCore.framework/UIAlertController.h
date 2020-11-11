/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKitCore/_UIAlertControllerTextFieldViewControllerContaining.h>
#import <UIKit/UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>

@protocol UIAlertControllerVisualStyleProviding, UIAlertControllerSystemProvidedPresentationDelegate, UIAlertControllerCoordinatedActionPerforming;
@class NSString, NSAttributedString, NSSet, UIAlertAction, NSMutableDictionary, NSMapTable, UIViewController, _UIAlertControllerTextFieldViewController, UITapGestureRecognizer, _UIAlertControllerShimPresenter, NSPointerArray, UIAlertControllerStackManager, UIImage, NSMutableArray, NSObject, _UIAnimationCoordinator, UIPreviewInteractionController, UIAlertControllerVisualStyle, NSIndexSet, UIPopoverController, UIView, UIGestureRecognizer, NSArray;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding> {

	NSString* _message;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedMessage;
	NSAttributedString* _attributedDetailMessage;
	NSSet* _linkedAlertControllers;
	UIAlertAction* _cancelAction;
	NSMutableDictionary* _actionToKeyCommandsDictionary;
	NSMapTable* _keyCommandToActionMapTable;
	long long _resolvedStyle;
	long long _preferredStyle;
	UIViewController* _contentViewController;
	_UIAlertControllerTextFieldViewController* _textFieldViewController;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	id _ownedTransitioningDelegate;
	BOOL _isInSupportedInterfaceOrientations;
	BOOL _isInRecomputePreferredContentSize;
	long long _batchActionChangesInProgressCount;
	_UIAlertControllerShimPresenter* _presenter;
	NSPointerArray* _actionsWithInvokedHandlers;
	UIAlertControllerStackManager* _alertControllerStackManager;
	UIImage* _image;
	BOOL dismissedFromShim;
	BOOL _hidden;
	BOOL _springLoaded;
	BOOL __shouldFlipFrameForShimDismissal;
	BOOL __shouldAllowNilParameters;
	BOOL _hasPreservedInputViews;
	BOOL __shouldAlignToKeyboard;
	NSMutableArray* _actions;
	UIViewController* _headerContentViewController;
	UIViewController* _separatedHeaderContentViewController;
	NSObject*<UIAlertControllerVisualStyleProviding> _styleProvider;
	UIAlertAction* _preferredAction;
	_UIAnimationCoordinator* _temporaryAnimationCoordinator;
	UIPreviewInteractionController* _previewInteractionController;
	UIAlertControllerVisualStyle* __visualStyle;
	NSIndexSet* _indexesOfActionSectionSeparators;
	NSMutableArray* __actionDelimiterIndices;
	UIPopoverController* __compatibilityPopoverController;
	UIView* __systemProvidedPresentationView;
	id<UIAlertControllerSystemProvidedPresentationDelegate> __systemProvidedPresentationDelegate;
	UIGestureRecognizer* _systemProvidedGestureRecognizer;
	id<UIAlertControllerCoordinatedActionPerforming> _coordinatedActionPerformingDelegate;
	UIView* __presentationSourceRepresentationView;
	long long _titleMaximumLineCount;
	long long _titleLineBreakMode;

}

@property (assign) BOOL _shouldFlipFrameForShimDismissal;                                                                                                                              //@synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal - In the implementation block
@property (nonatomic,retain) _UIAnimationCoordinator * temporaryAnimationCoordinator;                                                                                                  //@synthesize temporaryAnimationCoordinator=_temporaryAnimationCoordinator - In the implementation block
@property (setter=_setPreviewInteractionController:,getter=_previewInteractionController,nonatomic,retain) UIPreviewInteractionController * previewInteractionController;              //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle;                                                                                      //@synthesize _visualStyle=__visualStyle - In the implementation block
@property (readonly) NSMutableArray * _actions;                                                                                                                                        //@synthesize actions=_actions - In the implementation block
@property (setter=_setIndexesOfActionSectionSeparators:,getter=_indexesOfActionSectionSeparators,nonatomic,copy) NSIndexSet * indexesOfActionSectionSeparators;                        //@synthesize indexesOfActionSectionSeparators=_indexesOfActionSectionSeparators - In the implementation block
@property (readonly) UIAlertAction * _cancelAction;                                                                                                                                    //@synthesize cancelAction=_cancelAction - In the implementation block
@property (readonly) UIAlertAction * _focusedAction; 
@property (readonly) NSMutableArray * _actionDelimiterIndices;                                                                                                                         //@synthesize _actionDelimiterIndices=__actionDelimiterIndices - In the implementation block
@property (readonly) UIView * _foregroundView; 
@property (readonly) UIView * _dimmingView; 
@property (readonly) long long _resolvedStyle;                                                                                                                                         //@synthesize resolvedStyle=_resolvedStyle - In the implementation block
@property (readonly) BOOL _shouldProvideDimmingView; 
@property (readonly) BOOL _alignsToKeyboard; 
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL _hidden;                                                                                                         //@synthesize hidden=_hidden - In the implementation block
@property (assign,setter=_setEffectAlpha:,getter=_effectAlpha,nonatomic) double effectAlpha; 
@property (setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters;                                                                                                       //@synthesize _shouldAllowNilParameters=__shouldAllowNilParameters - In the implementation block
@property (assign,setter=_setCompatibilityPopoverController:,nonatomic) UIPopoverController * _compatibilityPopoverController;                                                         //@synthesize _compatibilityPopoverController=__compatibilityPopoverController - In the implementation block
@property (readonly) _UIAlertControllerTextFieldViewController * _textFieldViewController; 
@property (assign,setter=_setHasPreservedInputViews:,getter=_hasPreservedInputViews,nonatomic) BOOL hasPreservedInputViews;                                                            //@synthesize hasPreservedInputViews=_hasPreservedInputViews - In the implementation block
@property (setter=_setSystemProvidedPresentationView:,nonatomic,retain) UIView * _systemProvidedPresentationView;                                                                      //@synthesize _systemProvidedPresentationView=__systemProvidedPresentationView - In the implementation block
@property (setter=_setSystemProvidedPresentationDelegate:,nonatomic,retain) id<UIAlertControllerSystemProvidedPresentationDelegate> _systemProvidedPresentationDelegate;               //@synthesize _systemProvidedPresentationDelegate=__systemProvidedPresentationDelegate - In the implementation block
@property (setter=_setSystemProvidedGestureRecognizer:,getter=_systemProvidedGestureRecognizer,nonatomic,retain) UIGestureRecognizer * systemProvidedGestureRecognizer;                //@synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer - In the implementation block
@property (assign,setter=_setDismissedFromShim:,getter=_dismissedFromShim,nonatomic) BOOL dismissedFromShim; 
@property (setter=_setAttributedDetailMessage:,getter=_attributedDetailMessage,nonatomic,copy) NSAttributedString * _attributedDetailMessage; 
@property (assign,setter=_setStyleProvider:,getter=_styleProvider,nonatomic,__weak) NSObject*<UIAlertControllerVisualStyleProviding> styleProvider;                                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<UIAlertControllerCoordinatedActionPerforming> coordinatedActionPerformingDelegate;                                                              //@synthesize coordinatedActionPerformingDelegate=_coordinatedActionPerformingDelegate - In the implementation block
@property (setter=_setPresentationSourceRepresentationView:,nonatomic,retain) UIView * _presentationSourceRepresentationView;                                                          //@synthesize _presentationSourceRepresentationView=__presentationSourceRepresentationView - In the implementation block
@property (readonly) BOOL _shouldReverseActions; 
@property (setter=_setSeparatedHeaderContentViewController:,nonatomic,retain) UIViewController * _separatedHeaderContentViewController;                                                //@synthesize separatedHeaderContentViewController=_separatedHeaderContentViewController - In the implementation block
@property (setter=_setHeaderContentViewController:,nonatomic,retain) UIViewController * _headerContentViewController;                                                                  //@synthesize headerContentViewController=_headerContentViewController - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,nonatomic) long long preferredStyle; 
@property (assign,setter=_setTitleMaximumLineCount:,getter=_titleMaximumLineCount,nonatomic) long long titleMaximumLineCount;                                                          //@synthesize titleMaximumLineCount=_titleMaximumLineCount - In the implementation block
@property (assign,setter=_setTitleLineBreakMode:,getter=_titleLineBreakMode,nonatomic) long long titleLineBreakMode;                                                                   //@synthesize titleLineBreakMode=_titleLineBreakMode - In the implementation block
@property (setter=_setAttributedTitle:,getter=_attributedTitle,nonatomic,copy) NSAttributedString * attributedTitle; 
@property (setter=_setAttributedMessage:,getter=_attributedMessage,nonatomic,copy) NSAttributedString * attributedMessage; 
@property (nonatomic,retain) UIImage * image; 
@property (setter=_setActions:,nonatomic,retain) NSArray * actions; 
@property (assign,setter=_setShouldAlignToKeyboard:,nonatomic) BOOL _shouldAlignToKeyboard;                                                                                            //@synthesize _shouldAlignToKeyboard=__shouldAlignToKeyboard - In the implementation block
@property (nonatomic,retain) UIAlertAction * preferredAction;                                                                                                                          //@synthesize preferredAction=_preferredAction - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
+(id)_alertControllerContainedInViewController:(id)arg1 ;
+(id)_alertControllerWithTitle:(id)arg1 message:(id)arg2 ;
+(BOOL)_shouldUsePresentationController;
+(BOOL)_allowInteractiveSheetDismissal;
-(void)_setVisualStyle:(id)arg1 ;
-(NSArray *)textFields;
-(id)_attributedTitle;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)viewWillLayoutSubviews;
-(void)_performAction:(id)arg1 invokeActionBlock:(/*^block*/id)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(/*^block*/id)arg3 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(BOOL)arg3 dismissCompletion:(/*^block*/id)arg4 ;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)_headerContentViewControllerWillTransitionToSize:(CGSize)arg1 withAnimations:(/*^block*/id)arg2 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_styleProvider;
-(void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
-(void)_childViewController:(id)arg1 willTransitionToSize:(CGSize)arg2 withAnimations:(/*^block*/id)arg3 ;
-(void)_postWillBeginSystemProvidedDismissalOfAlertController;
-(void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)_postDidBeginSystemProvidedDismissalOfAlertController;
-(void)_contentViewControllerWillTransitionToSize:(CGSize)arg1 withAnimations:(/*^block*/id)arg2 ;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 shouldDismissHandler:(/*^block*/id)arg4 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI17*)arg1 ;
-(BOOL)_viewControllerIsPresentedInModalPresentationContext:(id)arg1 ;
-(id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2 ;
-(id)_textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(NSMutableArray *)_actions;
-(long long)preferredStyle;
-(void)_beginNoPresentingViewControllerPresentation;
-(void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_setSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1 ;
-(BOOL)_hasTitle;
-(void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1 ;
-(void)_endNoPresentingViewControllerPresentation;
-(BOOL)_shouldFitWidthToContentViewControllerWidth;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)_setSeparatedHeaderContentViewController:(id)arg1 ;
-(void)_setPresentationSourceRepresentationView:(id)arg1 ;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateProvidedStyleWithTraitCollection:(id)arg1 ;
-(void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(UIView *)_dimmingView;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)set_shouldFlipFrameForShimDismissal:(BOOL)arg1 ;
-(void)_performBatchActionChangesWithBlock:(/*^block*/id)arg1 ;
-(void)_flipFrameForShimDismissalIfNecessary;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(UIImage *)image;
-(void)addAction:(id)arg1 ;
-(NSString *)message;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_setIndexesOfActionSectionSeparators:(id)arg1 ;
-(long long)_modalPresentationStyleForResolvedStyle;
-(UIViewController *)_separatedHeaderContentViewController;
-(void)_setSystemProvidedPresentationDelegate:(id)arg1 ;
-(void)_dismissWithAction:(id)arg1 dismissCompletion:(/*^block*/id)arg2 ;
-(BOOL)_requiresCustomPresentationController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)_presentationSourceRepresentationView;
-(void)setCoordinatedActionPerformingDelegate:(id<UIAlertControllerCoordinatedActionPerforming>)arg1 ;
-(void)_handleKeyCommand:(id)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)setTemporaryAnimationCoordinator:(_UIAnimationCoordinator *)arg1 ;
-(id)_systemProvidedGestureRecognizer;
-(void)_addReturnKeyCommandIfAppropriate;
-(void)_setPreviewInteractionController:(id)arg1 ;
-(void)_didParentTextFieldViewController;
-(id)_indexesOfActionSectionSeparators;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 ;
-(long long)_buttonTypeForBackGestureForIdiom:(long long)arg1 ;
-(void)_setCompatibilityPopoverController:(id)arg1 ;
-(void)_becomeFirstResponderIfAppropriate;
-(id)cancelAction;
-(void)_setActions:(id)arg1 ;
-(void)_returnKeyPressedInLastTextField;
-(double)_effectAlpha;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_willParentTextFieldViewController;
-(NSString *)description;
-(BOOL)_canDismissWithGestureRecognizer;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_hasMessage;
-(BOOL)_isPresented;
-(BOOL)_shouldFlipFrameForShimDismissal;
-(void)_setHeaderContentViewController:(id)arg1 ;
-(id<UIAlertControllerSystemProvidedPresentationDelegate>)_systemProvidedPresentationDelegate;
-(BOOL)_shouldSupportReturnKeyPresses;
-(void)_dismissFromPopoverDimmingView;
-(void)_setSystemProvidedPresentationView:(id)arg1 ;
-(id<UIAlertControllerCoordinatedActionPerforming>)coordinatedActionPerformingDelegate;
-(BOOL)_isHidden;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setPreferredAction:(UIAlertAction *)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)_setShouldAllowNilParameters:(BOOL)arg1 ;
-(void)_recomputePreferredContentSize;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(UIPopoverController *)_compatibilityPopoverController;
-(UIView *)_systemProvidedPresentationView;
-(void)_handleReturn;
-(UIAlertAction *)_cancelAction;
-(BOOL)shouldAutorotate;
-(void)_removeKeyCommandForAction:(id)arg1 ;
-(BOOL)_shouldBecomeFirstResponder;
-(void)_setHasPreservedInputViews:(BOOL)arg1 ;
-(void)_updateModalPresentationStyle;
-(void)_installBackGestureRecognizer;
-(BOOL)_needsPreferredSizeCalculated;
-(BOOL)_shouldTreatEmptyStringsAsNil;
-(id)_previewInteractionController;
-(_UIAnimationCoordinator *)temporaryAnimationCoordinator;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)_foregroundView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(id)_alertControllerContainer;
-(id)_containedAlertController;
-(BOOL)_idiomSupportsBackGesture:(long long)arg1 ;
-(BOOL)_shouldDismissOnSizeChange;
-(BOOL)_canBePresentedAtLocation:(CGPoint)arg1 ;
-(BOOL)_shouldSizeToFillSuperview;
-(void)_setTitleMaximumLineCount:(long long)arg1 ;
-(void)_setShouldAlignToKeyboard:(BOOL)arg1 ;
-(void)_setAttributedTitle:(id)arg1 ;
-(void)_removeAllTextFields;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)_updateShouldAlignToKeyboard;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(UIViewController *)_headerContentViewController;
-(long long)_resolvedStyle;
-(UIAlertAction *)_focusedAction;
-(UIEdgeInsets)_contentInsets;
-(BOOL)_allowsShowingDimmingView;
-(id)_dismissGestureRecognizer;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_setShouldReverseActions:(BOOL)arg1 ;
-(NSAttributedString *)_attributedDetailMessage;
-(void)_invokeHandlersForAction:(id)arg1 ;
-(BOOL)_shouldProvideDimmingView;
-(BOOL)_alignsToKeyboard;
-(BOOL)_shouldAllowNilParameters;
-(BOOL)_shouldPreserveInputViews;
-(void)_reevaluateResolvedStyle;
-(void)_dismissWithCancelAction;
-(BOOL)canBecomeFirstResponder;
-(_UIAlertControllerTextFieldViewController *)_textFieldViewController;
-(void)loadView;
-(void)_removeAllActions;
-(id)_returnKeyCommand;
-(BOOL)_hasDetailMessage;
-(void)_setDismissedFromShim:(BOOL)arg1 ;
-(void)setCancelAction:(id)arg1 ;
-(id)_alertControllerView;
-(void)_setEffectAlpha:(double)arg1 ;
-(void)_updateProvidedStyle;
-(void)_clearActionHandlers;
-(BOOL)_hasContentToDisplay;
-(void)_addSectionDelimiter;
-(void)linkAlertController:(id)arg1 ;
-(void)_setHidden:(BOOL)arg1 ;
-(BOOL)_shouldReverseActions;
-(void)_dismissFromBackButton:(id)arg1 ;
-(id)_attributedMessage;
-(id)_currentDescriptor;
-(BOOL)_hasPreservedInputViews;
-(void)_setTitleLineBreakMode:(long long)arg1 ;
-(BOOL)_isPresentedAsPopover;
-(BOOL)_shouldAlignToKeyboard;
-(void)_setAttributedMessage:(id)arg1 ;
-(void)_logBeingPresented;
-(void)_resolvedStyleChanged;
-(NSMutableArray *)_actionDelimiterIndices;
-(BOOL)_hasAttributedMessage;
-(id)_actionForReturnKey;
-(BOOL)_hasAttributedTitle;
-(void)_logBeingDismissed;
-(void)_dismissWithAction:(id)arg1 ;
-(BOOL)_dismissedFromShim;
-(long long)_titleLineBreakMode;
-(CFStringRef)_powerLoggingEventName;
-(void)_setStyleProvider:(id)arg1 ;
-(void)unlinkAlertController:(id)arg1 ;
-(id)linkedAlertControllers;
-(long long)_titleMaximumLineCount;
-(UIAlertAction *)preferredAction;
-(NSArray *)actions;
-(UIViewController *)contentViewController;
-(void)dealloc;
@end
