/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TPSOperationQueue;

@interface TPSOperationQueueCountObserver : NSObject {

	/*^block*/id _completionBlock;
	unsigned long long _lastOperationCount;
	TPSOperationQueue* _operationQueue;

}

@property (assign,nonatomic) unsigned long long lastOperationCount;                  //@synthesize lastOperationCount=_lastOperationCount - In the implementation block
@property (assign,nonatomic,__weak) TPSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOperationQueue:(TPSOperationQueue *)arg1 ;
-(TPSOperationQueue *)operationQueue;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)lastOperationCount;
-(void)setLastOperationCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end

