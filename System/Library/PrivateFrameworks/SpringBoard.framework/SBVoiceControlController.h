/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBVoiceControlTransientOverlayViewControllerDelegate.h>

@protocol SiriAssertion;
@class NSArray, SBVoiceControlTransientOverlayViewController, SiriLongPressButtonSource, NSString;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {

	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;
	NSArray* _nextRecognitionAudioInputPaths;
	SBVoiceControlTransientOverlayViewController* _transientOverlayViewController;
	SiriLongPressButtonSource* _siriHeadsetDeviceSource;
	id<SiriAssertion> _siriPreheatAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isVisible;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_assistantActivationSettingsDidChange:(id)arg1 ;
-(id)init;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(BOOL)_shouldEnterVoiceControl;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1 ;
-(void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(id)siriBluetoothDeviceSource:(id)arg1 ;
-(void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg1 ;
-(BOOL)handleHeadsetButtonUp;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg1 ;
-(void)dismissTransientOverlay;
-(BOOL)handleHomeButtonHeld;
-(void)_cancelDelayedHeadsetAction;
-(void)headsetAvailabilityChanged;
-(void)_prepareDelayedHeadsetAction;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)configureVoiceControl;
-(void)_performDelayedHeadsetActionForAssistant;
@end

