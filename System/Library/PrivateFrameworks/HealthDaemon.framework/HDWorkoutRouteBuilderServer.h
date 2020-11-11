/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDSeriesBuilderServer.h>
#import <libobjc.A.dylib/HKWorkoutRouteBuilderServerInterface.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface> {

	HKWorkoutRoute* _route;

}

@property (nonatomic,retain) HKWorkoutRoute * route;                //@synthesize route=_route - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(HKWorkoutRoute *)route;
-(id)remoteInterface;
-(void)setRoute:(HKWorkoutRoute *)arg1 ;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)remote_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)seriesSample;
-(void)createSeriesSampleIfNeeded:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)queue_recoverBuilder;
-(void)_queue_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_validateRouteData:(id)arg1 error:(out id*)arg2 ;
-(void)server_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
