/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libMobileGestaltExtensions.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MGNotificationRegistration : NSObject {

	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	BOOL _deliverNotifications;
	NSMutableDictionary* _requestedRegistrations;

}
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)start;
-(BOOL)registerForNotification:(int)arg1 argument:(const char*)arg2 question:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
@end

