/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACHEarnedInstanceAwarding.h>

@protocol OS_dispatch_queue, ASCompetitionAwardingSourceDataProvider;
@class NSString, NSObject, NSSet;

@interface ASCompetitionAwardingSource : NSObject <ACHEarnedInstanceAwarding> {

	unsigned char _creatorDevice;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSSet* _awardedCompetitionUUIDs;
	id<ASCompetitionAwardingSourceDataProvider> _dataProvider;

}

@property (assign,nonatomic,__weak) id<ASCompetitionAwardingSourceDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataProvider:(id<ASCompetitionAwardingSourceDataProvider>)arg1 ;
-(NSString *)uniqueName;
-(id<ASCompetitionAwardingSourceDataProvider>)dataProvider;
-(id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2 ;
-(id)_queue_earnedInstancesForInterval:(id)arg1 selectingCompetitionsUsingFilter:(/*^block*/id)arg2 ;
-(id)_allCompetitionsOrderedByEndDate;
-(id)initForCreatorDevice:(unsigned char)arg1 ;
-(id)earnedInstancesForIncrementalInterval:(id)arg1 ;
@end

