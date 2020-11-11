/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDDaemon;

@interface HDAutoBugCaptureReporter : NSObject {

	HDDaemon* _daemon;
	/*^block*/id _unitTesting_didReportHandler;

}

@property (nonatomic,copy) id unitTesting_didReportHandler;              //@synthesize unitTesting_didReportHandler=_unitTesting_didReportHandler - In the implementation block
@property (nonatomic,__weak,readonly) HDDaemon * daemon;                 //@synthesize daemon=_daemon - In the implementation block
+(void)reportNotFinalSeriesSampleWithClass:(Class)arg1 count:(long long)arg2 datumCount:(long long)arg3 reason:(id)arg4 ;
-(HDDaemon *)daemon;
-(id)initWithDaemon:(id)arg1 ;
-(void)reportDataCollectionSeriesProblem:(id)arg1 quantityType:(id)arg2 ;
-(void)reportDatabaseMigrationFailureWithContext:(id)arg1 ;
-(void)reportQueryDurationWithServer:(id)arg1 dataCount:(long long)arg2 duration:(double)arg3 ;
-(void)_reportSnapshotWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(id)arg4 thresholdValues:(id)arg5 ;
-(id)unitTesting_didReportHandler;
-(void)setUnitTesting_didReportHandler:(id)arg1 ;
@end
