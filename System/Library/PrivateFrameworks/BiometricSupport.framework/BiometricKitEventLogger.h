/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, BKEvent;

@interface BiometricKitEventLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned _eventList[200];
	int _eventListLength;
	BOOL _terminalFlushPending;
	BOOL _startEventFound;
	BKEvent* _lastSmartKeyboardEvent;

}
+(id)logger;
-(id)init;
-(void)logEventOrCode:(unsigned long long)arg1 ;
-(void)appendEvent:(id)arg1 ;
-(void)appendEventValue:(unsigned)arg1 isMetadata:(BOOL)arg2 ;
-(void)flushEvents;
-(void)logSmartKeyboardStatus;
-(void)logDeviceMetadata;
@end

