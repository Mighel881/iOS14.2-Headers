/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>
#import <libobjc.A.dylib/PKAccessoryDeviceMonitorDelegate.h>

@protocol BSInvalidatable;
@class NSString, SBSAssertion, PKAssertion, CLInUseAssertion, NSMutableDictionary, PKAccessoryDeviceView, PKAccessoryDevice, PKAccessoryDeviceMonitor, PKFieldProperties, NSArray;

@interface PKAccessoryDeviceExpressAlertViewController : SBUIRemoteAlertServiceViewController <SBSHardwareButtonEventConsuming, PKAccessoryDeviceMonitorDelegate> {

	BOOL _deviceUILocked;
	long long _presentationSource;
	NSString* _passUniqueIdentifier;
	id _staticGlyphResources;
	id<BSInvalidatable> _lockButtonObserver;
	SBSAssertion* _lockButtonAssertion;
	PKAssertion* _notificationSuppressionAssertion;
	BOOL _brightnessRampingAllowed;
	BOOL _backlightActive;
	BOOL _processHomeButtonEvents;
	CLInUseAssertion* _passbookForegroundAssertion;
	BOOL _appeared;
	NSMutableDictionary* _registeredExpressObservers;
	BOOL _hasMultiple;
	long long _accessoryDeviceViewState;
	BOOL _presentedOnView;
	PKAccessoryDeviceView* _accessoryDeviceView;
	PKAccessoryDevice* _accessoryDevice;
	PKAccessoryDeviceMonitor* _accessoryDeviceMonitor;
	CGRect _windowedAccessoryCutoutFrameInScreen;
	PKFieldProperties* _fieldProperties;
	NSArray* _fieldPassUniqueIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)_dismiss;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didAttachSleeveAccessory:(id)arg1 ;
-(void)didDetachSleeveAccessory;
-(id)childViewControllerForStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg1 ;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg1 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg1 ;
-(void)_appearIfNecessary;
-(void)_dismissIfRestricted;
-(void)_handleExpressNotification:(id)arg1 ;
-(id)_expressNotificationNames;
-(void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_changeStateIfNecessaryTo:(long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_invalidate;
-(void)loadView;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2 ;
-(void)dealloc;
@end

