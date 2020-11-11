/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(id)init;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)setupServiceConnection;
-(void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendRequestWithOptions:(id)arg1 sourceURLCollection:(id)arg2 destinationURLCollection:(id)arg3 jobIdentifier:(id)arg4 attemptCount:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
@end
