/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDSleepHealthDaemonPluginServerInterface.h>

@class HDProfile, HDSHProfileExtension, HDHealthStoreClient, NSString;

@interface HDSHPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDSleepHealthDaemonPluginServerInterface> {

	HDProfile* _profile;
	HDSHProfileExtension* _profileExtension;
	HDHealthStoreClient* _client;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)diagnosticDescription;
-(void)remote_updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_startSleepTrackingSession;
-(void)remote_stopSleepTrackingSession;
-(void)remote_saveSleepTrackingSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_populateSamplesToInsert:(id)arg1 samplesToDelete:(id)arg2 forSleepSchedules:(id)arg3 error:(id*)arg4 ;
-(BOOL)_populateSamplesToInsert:(id)arg1 samplesToDelete:(id)arg2 forSleepDurationGoal:(id)arg3 error:(id*)arg4 ;
-(BOOL)_replaceSamples:(id)arg1 withSamples:(id)arg2 error:(id*)arg3 ;
-(void)_saveSleepTrackingSamplesAfterFirstUnlock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_insertSamplesWithClientSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)_deleteSamples:(id)arg1 error:(id*)arg2 ;
@end

