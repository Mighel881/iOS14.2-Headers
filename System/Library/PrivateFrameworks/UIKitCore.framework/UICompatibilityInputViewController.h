/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIInputViewController.h>
#import <UIKitCore/_UIKBDelegateAwareInputController.h>

@protocol UITextCursorAssertion;
@class UIKeyboardInputMode, UIKeyboard, UILayoutGuide, UIViewController, NSArray, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	double _lastSuspendedTime;
	double _currentResumeTime;
	BOOL _shouldRegenerateSizingConstraints;
	BOOL _shouldSuppressRemoteInputController;
	BOOL _tearingDownInputController;
	double _resetInputModeTime;
	unsigned long long _latestDelayTime;
	UILayoutGuide* _focusSafeAreaLayoutGuide;
	UIViewController* _inputController;
	NSArray* _internalEdgeMatchConstraints;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (nonatomic,retain) UIViewController * inputController;                      //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) NSArray * internalEdgeMatchConstraints;                  //@synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints - In the implementation block
@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;                //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * focusSafeAreaLayoutGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
+(BOOL)_requiresProxyInterface;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(id)inputViewControllerWithView:(id)arg1 ;
+(id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2 ;
-(void)willResume:(id)arg1 ;
-(void)didFinishTranslation;
-(void)setInputMode:(id)arg1 ;
-(id)_compatView;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)addSnapshotViewForInputMode:(id)arg1 ;
-(void)killIncomingExtension;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)internalEdgeMatchConstraints;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)_initAsDeferredController;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(UIViewController *)inputController;
-(id)_keyboardForThisViewController;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)rebuildChildConstraints;
-(void)resetInputMode;
-(void)removeSnapshotView;
-(BOOL)_canShowWhileLocked;
-(void)assertCurrentInputModeIfNecessary;
-(void)setInputController:(UIViewController *)arg1 ;
-(id)preferredFocusedView;
-(void)validateInputModeIsDisplayed;
-(void)tearDownInputController;
-(id)_compatibilityController;
-(void)setTearingDownInputController;
-(id)_keyboard;
-(void)isHosted:(id)arg1 ;
-(id<UITextCursorAssertion>)blinkAssertion;
-(UILayoutGuide *)focusSafeAreaLayoutGuide;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)childCompatibilityController;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(void)didSuspend:(id)arg1 ;
-(void)resetInputModeInMainThread;
-(void)loadView;
-(void)takeSnapshotView;
-(void)setInternalEdgeMatchConstraints:(NSArray *)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)willBeginTranslation;
-(void)setDeferredSystemView:(id)arg1 ;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(void)dealloc;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
@end

