/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordZoneIDs;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSDictionary* _resultRecordZonesByZoneID;

}

@property (nonatomic,retain) NSDictionary * resultRecordZonesByZoneID;              //@synthesize resultRecordZonesByZoneID=_resultRecordZonesByZoneID - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                 //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                      //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultRecordZonesByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordZonesByZoneID;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
@end

