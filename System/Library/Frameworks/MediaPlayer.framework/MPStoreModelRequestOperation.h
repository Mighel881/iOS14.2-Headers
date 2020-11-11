/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSOperation, MPModelResponse, MPStoreModelRequest;

@interface MPStoreModelRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSOperation* _childOperation;
	MPModelResponse* _response;
	double _startExecutingTimeStamp;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;
	MPStoreModelRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) double remainingTimeInterval; 
@property (nonatomic,copy) MPStoreModelRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)execute;
-(MPStoreModelRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(id)init;
-(void)setRequest:(MPStoreModelRequest *)arg1 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)finishWithError:(id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(double)remainingTimeInterval;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)assertRunningInAccessQueue;
-(void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 requestContext:(id)arg3 ;
-(void)_executeURLLoadWithRequest:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3 ;
-(void)_executeURLLoadWithRequests:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3 ;
-(void)_tearDownTimeoutTimerSource;
-(id)_URLLoadRequestWithRequest:(id)arg1 requestContext:(id)arg2 ;
-(void)_handleTimeout;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end
