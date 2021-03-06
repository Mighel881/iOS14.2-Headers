/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, HDApplicationStateMonitorProvider;
@class NSMutableDictionary, NSHashTable, BKSApplicationStateMonitor, NSObject, NSString;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {

	NSMutableDictionary* _processObserversByBundleID;
	NSHashTable* _foregroundClientProcessObservers;
	BKSApplicationStateMonitor* _applicationMonitor;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSMutableDictionary* _processInfoByBundleID;
	id<HDApplicationStateMonitorProvider> _applicationStateMonitorProvider;

}

@property (nonatomic,__weak,readonly) id<HDApplicationStateMonitorProvider> applicationStateMonitorProvider;              //@synthesize applicationStateMonitorProvider=_applicationStateMonitorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)applicationStateForBundleIdentifier:(id)arg1 ;
-(void)_lock_unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)init;
-(void)registerForegroundClientProcessObserver:(id)arg1 ;
-(BOOL)_lock_registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)initWithApplicationStateMonitorProvider:(id)arg1 ;
-(id<HDApplicationStateMonitorProvider>)applicationStateMonitorProvider;
-(void)unregisterForegroundClientProcessObserver:(id)arg1 ;
-(void)_lock_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(void)_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(int)processIdentifierForApplicationIdentifier:(id)arg1 ;
-(void)_lock_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned)arg3 previousApplicationState:(unsigned)arg4 ;
-(void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_lock_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1 ;
-(BOOL)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)isApplicationStateForegroundForBundleIdentifier:(id)arg1 ;
-(BOOL)applicationIsForeground:(id)arg1 ;
-(BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)arg1 ;
-(id)diagnosticDescription;
-(BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
@end

