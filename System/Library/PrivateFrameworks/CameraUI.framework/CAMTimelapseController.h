/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonTimelapseClientProtocol.h>

@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;
@class CAMCaptureGraphConfiguration, CAMFocusResult, CAMTimelapseState, NSObject, NSCountedSet, NSMutableSet, CUCaptureController, CAMLocationController, CAMMotionController, CAMPersistenceController, CAMStorageController, CAMNebulaDaemonProxyManager, NSDate, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol> {

	BOOL __ignoringTimerCallbacksForTearDown;
	BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
	BOOL __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
	BOOL __backendRecoveryNeeded;
	BOOL __previewStarted;
	BOOL __focusAndExposureAdjusted;
	CAMCaptureGraphConfiguration* __graphConfigurationForCurrentState;
	id<CAMTimelapseControllerDelegate> _delegate;
	CAMFocusResult* _lastFocusResult;
	CAMTimelapseState* __state;
	NSObject*<OS_dispatch_source> __captureTimer;
	NSCountedSet* __inFlightTimelapseUUIDs;
	NSMutableSet* __pendingCompletedStates;
	CUCaptureController* __captureController;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMPersistenceController* __persistenceController;
	CAMStorageController* __storageController;
	CAMNebulaDaemonProxyManager* __nebulaDaemonProxyManager;

}

@property (nonatomic,readonly) CAMTimelapseState * _state;                                                                                                                         //@synthesize _state=__state - In the implementation block
@property (getter=_graphConfigurationForCurrentState,nonatomic,readonly) CAMCaptureGraphConfiguration * _graphConfigurationForCurrentState;                                        //@synthesize _graphConfigurationForCurrentState=__graphConfigurationForCurrentState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _captureTimer;                                                                                                        //@synthesize _captureTimer=__captureTimer - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksForTearDown;                                                                                                            //@synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;                                                                                              //@synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inFlightTimelapseUUIDs;                                                                                                             //@synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingCompletedStates;                                                                                                             //@synthesize _pendingCompletedStates=__pendingCompletedStates - In the implementation block
@property (assign,setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:,nonatomic) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;              //@synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes - In the implementation block
@property (assign,setter=_setBackendRecoveryNeeded:,nonatomic) BOOL _backendRecoveryNeeded;                                                                                        //@synthesize _backendRecoveryNeeded=__backendRecoveryNeeded - In the implementation block
@property (assign,setter=_setPreviewStarted:,nonatomic) BOOL _previewStarted;                                                                                                      //@synthesize _previewStarted=__previewStarted - In the implementation block
@property (assign,setter=_setFocusAndExposureAdjusted:,getter=_isFocusAndExposureAdjusted,nonatomic) BOOL _focusAndExposureAdjusted;                                               //@synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted - In the implementation block
@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                                                           //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                        //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                            //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                                                                                                  //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMStorageController * _storageController;                                                                                                          //@synthesize _storageController=__storageController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;                                                                                            //@synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimelapseControllerDelegate> delegate;                                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCapturing,nonatomic,readonly) BOOL capturing; 
@property (nonatomic,readonly) NSDate * captureStartTime; 
@property (assign,nonatomic) CAMFocusResult * lastFocusResult;                                                                                                                     //@synthesize lastFocusResult=_lastFocusResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPlaceholderResultForTimelapseState:(id)arg1 ;
+(IOSurfaceRef)_newVideoPreviewSurfaceForTimelapseState:(id)arg1 ;
-(CAMStorageController *)_storageController;
-(CAMMotionController *)_motionController;
-(BOOL)isCapturing;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(id)_createThumbnailImageFromPlaceholderResult:(id)arg1 ;
-(CAMLocationController *)_locationController;
-(CUCaptureController *)_captureController;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(CAMTimelapseState *)_state;
-(id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 storageController:(id)arg5 nebulaDaemonProxyManager:(id)arg6 ;
-(void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(id)init;
-(BOOL)_canCapturePhoto;
-(void)_invalidateCachedGraphConfiguration;
-(NSMutableSet *)_pendingCompletedStates;
-(id<CAMTimelapseControllerDelegate>)delegate;
-(BOOL)_enqueueCaptureRequest;
-(void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 preferHEVC:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(BOOL)_previewStarted;
-(void)_setBackendRecoveryNeeded:(BOOL)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
-(BOOL)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(CAMPersistenceController *)_persistenceController;
-(void)_setPreviewStarted:(BOOL)arg1 ;
-(id)_stillImageCaptureRequestWithCurrentSettings;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2 ;
-(BOOL)stopCapturingWithReasons:(long long)arg1 ;
-(void)_captureTimerFired;
-(void)_deviceStarted:(id)arg1 ;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(void)setDelegate:(id<CAMTimelapseControllerDelegate>)arg1 ;
-(void)restoreConfiguration;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_teardownCaptureTimer;
-(BOOL)_isFocusAndExposureAdjusted;
-(BOOL)_shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
-(void)setLastFocusResult:(CAMFocusResult *)arg1 ;
-(void)_notifyAnalyticsForDidStopCapturingWithState:(id)arg1 ;
-(void)_stopCapturingWithReasons:(long long)arg1 ;
-(void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)_startCaptureTimer;
-(void)_updateFocusAndExposureForStartCapturing;
-(NSCountedSet *)_inFlightTimelapseUUIDs;
-(void)_updateLocationIfNecessary;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(CAMFocusResult *)lastFocusResult;
-(NSDate *)captureStartTime;
-(BOOL)_ignoringTimerCallbacksForTearDown;
-(void)_setFocusAndExposureAdjusted:(BOOL)arg1 ;
-(CAMNebulaDaemonProxyManager *)_nebulaDaemonProxyManager;
-(void)_saveStateToDisk:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)_captureTimer;
-(void)_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:(BOOL)arg1 ;
-(void)_restoreCaptureStateFromDisk;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(BOOL)_backendRecoveryNeeded;
-(CAMCaptureGraphConfiguration *)_graphConfigurationForCurrentState;
-(void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1 ;
-(void)dealloc;
@end

