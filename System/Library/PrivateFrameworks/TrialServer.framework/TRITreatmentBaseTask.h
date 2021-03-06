/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIExperimentBaseTask.h>

@protocol TRITaskAttributing;
@class NSString;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask {

	NSString* _treatmentId;
	id<TRITaskAttributing> _taskAttributing;

}

@property (nonatomic,readonly) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) id<TRITaskAttributing> taskAttributing;              //@synthesize taskAttributing=_taskAttributing - In the implementation block
-(NSString *)treatmentId;
-(id)metrics;
-(id)dimensions;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 ;
-(id<TRITaskAttributing>)taskAttributing;
@end

