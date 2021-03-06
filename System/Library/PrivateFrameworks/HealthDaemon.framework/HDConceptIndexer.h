/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class HDProfile, NSObject;

@interface HDConceptIndexer : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(BOOL)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sampleQueryDescriptionsFollowingAnchor:(id)arg1 futureMigrationEnabled:(BOOL)arg2 ;
+(id)indexSample:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_syncQueue_processDeletedSamplesWithLimit:(long long)arg1 sampleType:(id)arg2 countOfSamplesProcessed:(long long*)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)_syncQueue_processSamplesWithLimit:(long long)arg1 countOfSamplesProcessed:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)_syncQueue_processUpdatedSamplesWithLimit:(long long)arg1 countOfSamplesProcessed:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)processSamplesWithLimit:(unsigned long long)arg1 countOfSamplesProcessed:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)_syncQueue_resetWithError:(id*)arg1 ;
@end

