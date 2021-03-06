/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol TSUResourceRequest <NSProgressReporting>
@property (readonly) unsigned long long estimatedDownloadSize; 
@property (readonly) NSSet * tags; 
@required
-(NSSet *)tags;
-(unsigned long long)estimatedDownloadSize;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performResourceAccessUsingQueue:(id)arg1 block:(/*^block*/id)arg2;
-(void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(/*^block*/id)arg2;

@end

