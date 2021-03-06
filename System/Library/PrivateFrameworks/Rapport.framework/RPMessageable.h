/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RPMessageable
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@required
-(void)deregisterRequestID:(id)arg1;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5;
-(void)deregisterEventID:(id)arg1;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;

@end

