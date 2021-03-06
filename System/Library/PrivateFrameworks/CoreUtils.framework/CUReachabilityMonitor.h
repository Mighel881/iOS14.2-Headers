/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSURLSession, NSURL, NSString;

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {

	int _downloadStatus;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSURLSession* _urlSession;
	/*^block*/id _completionHandler;
	NSURL* _destinationURL;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _timeout;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                                    //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_complete:(id)arg1 ;
-(void)_activate;
-(id)init;
-(void)activate;
-(void)setTimeout:(double)arg1 ;
-(id)completionHandler;
-(void)_startDownload;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeout;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)invalidate;
@end

