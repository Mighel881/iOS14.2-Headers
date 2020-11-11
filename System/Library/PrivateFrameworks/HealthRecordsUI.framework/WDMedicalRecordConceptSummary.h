/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WDMedicalRecordSummarizable.h>

@protocol WDMedicalRecordSummaryDelegate, OS_dispatch_queue;
@class HKHealthRecordsStore, HKConceptStore, NSMutableOrderedSet, NSArray, NSObject, NSString;

@interface WDMedicalRecordConceptSummary : NSObject <WDMedicalRecordSummarizable> {

	BOOL _dirty;
	id<WDMedicalRecordSummaryDelegate> _delegate;
	HKHealthRecordsStore* _healthRecordsStore;
	HKConceptStore* _conceptStore;
	NSMutableOrderedSet* _allRecords;
	NSArray* _allDisplayItems;
	NSObject*<OS_dispatch_queue> _summaryQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (assign,nonatomic,__weak) id<WDMedicalRecordSummaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;                       //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,retain) HKConceptStore * conceptStore;                                   //@synthesize conceptStore=_conceptStore - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * allRecords;                                //@synthesize allRecords=_allRecords - In the implementation block
@property (nonatomic,retain) NSArray * allDisplayItems;                                       //@synthesize allDisplayItems=_allDisplayItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> summaryQueue;                       //@synthesize summaryQueue=_summaryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                      //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                                      //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,copy,readonly) NSArray * displayItems; 
@property (nonatomic,copy,readonly) NSString * summarySortString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)dirty;
-(void)setDirty:(BOOL)arg1 ;
-(NSArray *)displayItems;
-(id<WDMedicalRecordSummaryDelegate>)delegate;
-(void)setConceptStore:(HKConceptStore *)arg1 ;
-(void)_displayItemsForRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayItemsForObservation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayItemsForGenericMedicalRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updatePlacementForDisplayItems:(id)arg1 ofRecord:(id)arg2 ;
-(NSMutableOrderedSet *)allRecords;
-(void)addMedicalRecord:(id)arg1 ;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(void)recomputeIfNeeded;
-(void)setDelegate:(id<WDMedicalRecordSummaryDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(NSString *)summarySortString;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_rqueue_setNeedsCompute;
-(void)_rqueue_recomputeIfNeeded;
-(NSObject*<OS_dispatch_queue>)summaryQueue;
-(void)setAllDisplayItems:(NSArray *)arg1 ;
-(void)showTruncatedRecords;
-(void)setNeedsRecompute;
-(void)setAllRecords:(NSMutableOrderedSet *)arg1 ;
-(NSArray *)allDisplayItems;
-(void)setSummaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HKConceptStore *)conceptStore;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
@end
