/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSDictionary;


@protocol ECTransferMessageActionResultsBuilder <ECLocalMessageActionResultsBuilder>
@property (assign,nonatomic) long long phaseForResults; 
@property (nonatomic,copy) NSArray * completedItems; 
@property (nonatomic,copy) NSArray * failedItems; 
@property (nonatomic,copy) NSArray * createdServerMessages; 
@property (nonatomic,copy) NSDictionary * downloadedDataByCopyItems; 
@required
-(void)setPhaseForResults:(long long)arg1;
-(void)setFailedItems:(id)arg1;
-(void)setCreatedServerMessages:(id)arg1;
-(NSArray *)completedItems;
-(void)setCompletedItems:(id)arg1;
-(void)setDownloadedDataByCopyItems:(id)arg1;
-(long long)phaseForResults;
-(NSArray *)failedItems;
-(NSArray *)createdServerMessages;
-(NSDictionary *)downloadedDataByCopyItems;

@end

