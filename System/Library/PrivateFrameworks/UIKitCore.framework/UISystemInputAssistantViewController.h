/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIInputViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIKeyboardAutocorrectionObserver.h>
#import <libobjc.A.dylib/TUISystemInputAssistantViewDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchInputViewControllerDelegate.h>

@protocol UIKeyInput, UIPredictiveViewController;
@class NSTimer, UIViewController, UIView, UITextInputAssistantItem, NSMutableDictionary, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayoutSplit, TUIEmojiSearchInputViewController, TUISystemInputAssistantView, NSString;

@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate, UIKeyboardAutocorrectionObserver, TUISystemInputAssistantViewDelegate, TUIEmojiSearchInputViewControllerDelegate> {

	id<UIKeyInput> _pendingResponderForChangedNotification;
	NSTimer* _pendingResponderChangedTimer;
	BOOL _postedSwitchFromEmojiNotification;
	BOOL _assistantEnabledPreference;
	BOOL _assistantOniPhonePreference;
	BOOL _hasCheckedPreferences;
	BOOL _currentlyCheckingPreferences;
	UIViewController*<UIPredictiveViewController> _centerViewController;
	UIView* _popoverSourceView;
	UITextInputAssistantItem* _observedInputAssistantItem;
	NSMutableDictionary* _cachedPredictiveViewControllers;
	TUISystemInputAssistantLayoutStandard* _standardAssistantViewLayout;
	TUISystemInputAssistantLayoutSplit* _splitAssistantViewLayout;
	TUIEmojiSearchInputViewController* _emojiSearchViewController;
	UIViewController*<UIPredictiveViewController> _predictiveViewController;
	UIViewController* _expandedItemsController;

}

@property (assign,nonatomic,__weak) UIView * popoverSourceView;                                                   //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (assign,nonatomic,__weak) UITextInputAssistantItem * observedInputAssistantItem;                        //@synthesize observedInputAssistantItem=_observedInputAssistantItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPredictiveViewControllers;                               //@synthesize cachedPredictiveViewControllers=_cachedPredictiveViewControllers - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutStandard * standardAssistantViewLayout;                 //@synthesize standardAssistantViewLayout=_standardAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutSplit * splitAssistantViewLayout;                       //@synthesize splitAssistantViewLayout=_splitAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUIEmojiSearchInputViewController * emojiSearchViewController;                       //@synthesize emojiSearchViewController=_emojiSearchViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> predictiveViewController;              //@synthesize predictiveViewController=_predictiveViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * expandedItemsController;                                   //@synthesize expandedItemsController=_expandedItemsController - In the implementation block
@property (assign) BOOL assistantEnabledPreference;                                                               //@synthesize assistantEnabledPreference=_assistantEnabledPreference - In the implementation block
@property (assign) BOOL assistantOniPhonePreference;                                                              //@synthesize assistantOniPhonePreference=_assistantOniPhonePreference - In the implementation block
@property (assign) BOOL hasCheckedPreferences;                                                                    //@synthesize hasCheckedPreferences=_hasCheckedPreferences - In the implementation block
@property (assign) BOOL currentlyCheckingPreferences;                                                             //@synthesize currentlyCheckingPreferences=_currentlyCheckingPreferences - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> centerViewController;                  //@synthesize centerViewController=_centerViewController - In the implementation block
@property (nonatomic,readonly) TUISystemInputAssistantView * systemInputAssistantView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(double)_defaultPreferredHeightForTraitCollection:(id)arg1 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg1 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg1 ;
-(void)setCurrentlyCheckingPreferences:(BOOL)arg1 ;
-(TUISystemInputAssistantLayoutSplit *)splitAssistantViewLayout;
-(BOOL)_canShowCenterBarButtonItem;
-(TUISystemInputAssistantLayoutStandard *)standardAssistantViewLayout;
-(id)predictionViewController;
-(void)setAssistantEnabledPreference:(BOOL)arg1 ;
-(id)init;
-(id)_defaultTintColor;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)emojiSearchWillInsertEmoji:(id)arg1 forSearchQuery:(id)arg2 ;
-(TUIEmojiSearchInputViewController *)emojiSearchViewController;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(id)candidateViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)layoutHasBuiltinAssistantView;
-(UIViewController*<UIPredictiveViewController>)predictiveViewController;
-(BOOL)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1 ;
-(void)setAssistantOniPhonePreference:(BOOL)arg1 ;
-(BOOL)assistantEnabledPreference;
-(BOOL)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(BOOL)isEmojiSearchResultsVisible;
-(void)_showCandidates;
-(id)_inputDelegateAsResponder:(id)arg1 ;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(void)_keyboardDictationAvailabilityDidChangeNotification:(id)arg1 ;
-(void)setPredictiveViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(double)_centerViewWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(NSMutableDictionary *)cachedPredictiveViewControllers;
-(BOOL)_isEmojiInputMode;
-(void)_expandBarItems;
-(void)setCenterViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)updateAssistantPreferences;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(BOOL)_assistantItemsVisibleForResponder:(id)arg1 ;
-(void)setEmojiSearchViewController:(TUIEmojiSearchInputViewController *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_allowedToShowBarButtonItemsInline:(id)arg1 ;
-(BOOL)_shouldShowEmojiSearchViewControllerForInputDelegate:(id)arg1 ;
-(BOOL)_shouldShowExpandableButtonBarItemsForResponder:(id)arg1 ;
-(double)_buttonBarWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg1 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg1 ;
-(void)setObservedInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(void)_collapseBarItems;
-(void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg1 ;
-(UITextInputAssistantItem *)observedInputAssistantItem;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg1 ;
-(void)setStandardAssistantViewLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
-(void)_queueResponderChangedForNewResponder:(id)arg1 ;
-(void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2 ;
-(void)_candidatesChanged;
-(void)_didChangePlacementOrInputSourceNotification:(id)arg1 ;
-(void)_updateCenterViewWidthForInterfaceOrientation:(long long)arg1 ;
-(void)_willChangePlacementNotification:(id)arg1 ;
-(void)setCachedPredictiveViewControllers:(NSMutableDictionary *)arg1 ;
-(void)setExpandedItemsController:(UIViewController *)arg1 ;
-(void)systemInputAssistantView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromView:(id)arg3 ;
-(void)_registerForAssistantViewNotifications;
-(BOOL)hasCheckedPreferences;
-(BOOL)_shouldCollapseEmojiSearchView;
-(BOOL)currentlyCheckingPreferences;
-(void)loadView;
-(void)setSplitAssistantViewLayout:(TUISystemInputAssistantLayoutSplit *)arg1 ;
-(void)_inputModeChanged:(id)arg1 ;
-(void)_responderCapabilitiesChangedNotification:(id)arg1 ;
-(UIView *)popoverSourceView;
-(BOOL)assistantOniPhonePreference;
-(void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1 ;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg1 ;
-(id)_currentInputDelegate;
-(BOOL)_isAssistantPreferenceEnabled;
-(id)_popoverViewControllerForBarButtonItemGroup:(id)arg1 ;
-(void)_responderChangedNotification:(id)arg1 ;
-(UIViewController *)expandedItemsController;
-(UIViewController*<UIPredictiveViewController>)centerViewController;
-(void)_didReceiveTextEffectsRotationNotification:(id)arg1 ;
-(void)dealloc;
-(void)setHasCheckedPreferences:(BOOL)arg1 ;
@end
