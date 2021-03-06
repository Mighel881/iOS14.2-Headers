/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXDeviceMonitorDelegate.h>

@class AXDeviceMonitor, AXEventProcessor, NSSet, NSHashTable, NSString;

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate> {

	AXDeviceMonitor* _deviceMonitor;
	AXEventProcessor* _eventProcessor;
	os_unfair_lock_s _cachedMouseDevicesLock;
	NSSet* _cachedMouseDevices;
	os_unfair_lock_s _observerLock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL currentDevicesHaveAssistiveTouchCustomActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_mouseMatching;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_handleMouseButtonEvent:(id)arg1 ;
-(void)_finishHandlingMouseButtonEvent:(id)arg1 buttonMask:(double)arg2 creatorHIDServiceClient:(IOHIDServiceClientRef)arg3 ;
-(void)deviceMonitorDidDetectDeviceEvent:(id)arg1 ;
-(BOOL)currentDevicesHaveAssistiveTouchCustomActions;
-(void)addObserver:(id)arg1 ;
-(id)discoveredMouseDevices;
-(id)_init;
-(void)endFilteringButtonEvents;
-(void)beginFilteringButtonEvents;
-(void)dealloc;
-(void)mouseSettingsDidChange;
@end

