/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCStreaming;
#import <NewsCore/NewsCore-Structs.h>
@class NSHashTable, NSMutableArray, FCAsyncSerialQueue;

@interface FCStreamingResults : NSObject {

	NSHashTable* _observers;
	id<FCStreaming> _underlyingStream;
	NSMutableArray* _results;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<FCStreaming> underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSRange range; 
-(FCAsyncSerialQueue *)serialQueue;
-(NSMutableArray *)results;
-(id)initWithStream:(id)arg1 ;
-(id)array;
-(NSRange)range;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<FCStreaming>)underlyingStream;
-(id)initWithResults:(id)arg1 followedByStream:(id)arg2 ;
-(id)init;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isFinished;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)objectsInRange:(NSRange)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

