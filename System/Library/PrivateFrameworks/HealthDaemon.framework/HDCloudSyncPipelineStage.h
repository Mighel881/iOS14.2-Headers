/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncPipelineStage : HDCloudSyncOperation {

	BOOL _criticalFailureOnError;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (assign,nonatomic) BOOL criticalFailureOnError;                //@synthesize criticalFailureOnError=_criticalFailureOnError - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                 //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;              //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
+(BOOL)shouldLogAtOperationEnd;
-(void)setExpectedSendSize:(long long)arg1 ;
-(long long)expectedReceiveSize;
-(long long)expectedSendSize;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(BOOL)criticalFailureOnError;
-(void)setCriticalFailureOnError:(BOOL)arg1 ;
@end
