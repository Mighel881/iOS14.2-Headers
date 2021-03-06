/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICSuzeLeaseSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface MPCSuzeLeaseSessionController : NSObject <ICSuzeLeaseSessionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMapTable* _leaseIDToLeaseSessionInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)suzeLeaseSession:(id)arg1 leaseRenewalDidFailWithError:(id)arg2 ;
-(id)_init;
-(void)stopLeaseSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startLeaseSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

