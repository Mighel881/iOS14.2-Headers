/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableData, NSString, NSURLSessionDataTask;

@interface VCPDownloadManager : NSObject {

	NSObject*<OS_dispatch_semaphore> _mutex;
	NSMutableData* _buffer;
	NSString* _localIdentifier;
	unsigned long long _length;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSURLSessionDataTask* _dataTask;
	/*^block*/id _cancel;

}

@property (nonatomic,copy) id cancel;              //@synthesize cancel=_cancel - In the implementation block
+(id)sharedManager;
+(void)_reportDownload:(unsigned long long)arg1 ;
+(unsigned long long)maxSizeBytes;
-(void)flush;
-(id)init;
-(void)setCancel:(id)arg1 ;
-(id)requestDownloadOfResource:(id)arg1 ;
-(id)cancel;
@end

