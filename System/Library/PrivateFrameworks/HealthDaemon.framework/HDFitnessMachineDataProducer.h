/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDWorkoutDataAccumulatorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HKQuantity, _HDFTMProducerMetricTracker, HDEurotasData, HDProfile, HDHealthServiceManager, NSString;

@interface HDFitnessMachineDataProducer : NSObject <HDWorkoutDataAccumulatorObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _sessionIdentifier;
	HKQuantity* _totalActiveEnergy;
	HKQuantity* _totalBasalEnergy;
	HKQuantity* _latestHeartRate;
	HKQuantity* _averageHeartRate;
	_HDFTMProducerMetricTracker* _heartRateTracker;
	BOOL _heartRateEnabled;
	HDEurotasData* _previousEurotasData;
	HDProfile* _profile;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDHealthServiceManager * healthServiceManager; 
@property (nonatomic,readonly) BOOL attached; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)_queue_sendEurotasData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)attached;
-(HDHealthServiceManager *)healthServiceManager;
-(void)_queue_updateFitnessMachineWithCompletion:(/*^block*/id)arg1 forcing:(BOOL)arg2 ;
-(void)detachHealthServiceSession;
-(HDProfile *)profile;
-(void)deliverFinalValuesAndDetachWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2 ;
-(void)_queue_updateFitnessMachine;
-(void)_readHeartRateEnabledPreference;
-(id)_queue_generateEurotasData;
-(void)sendInitialValues;
-(void)pauseCurrentSession;
-(void)workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2 ;
-(void)resumeCurrentSession;
-(void)dealloc;
-(void)attachHealthServiceSession:(unsigned long long)arg1 ;
-(void)_queue_detachHealthServiceSession;
@end
