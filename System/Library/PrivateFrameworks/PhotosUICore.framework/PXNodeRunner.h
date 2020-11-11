/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue;

@interface PXNodeRunner : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (assign) long long maxConcurrentRunNodeCount; 
@property (assign) long long qualityOfService; 
-(void)processGraphForRunNode:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(long long)qualityOfService;
-(long long)maxConcurrentRunNodeCount;
-(void)setMaxConcurrentRunNodeCount:(long long)arg1 ;
-(void)_processRunGraph:(id)arg1 ;
@end
