/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject {

	opaque_pthread_mutex_t _lock;
	unsigned long long _nextNotificationToken;
	NSMutableDictionary* _observers;

}
-(id)init;
-(BOOL)deregisterHandlerAsyncWithToken:(id)arg1 ;
-(BOOL)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(BOOL)arg2 ;
-(id)registerWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)deregisterHandlerWithToken:(id)arg1 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
@end
