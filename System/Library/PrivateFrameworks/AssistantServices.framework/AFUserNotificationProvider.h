/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFUserNotificationServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _responseHandlersByNotificationID;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_connection;
-(id)init;
-(void)receivedNotificationResponse:(id)arg1 ;
-(void)withdrawNotificationRequestWithIdentifier:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end
