/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, STKAlertSessionEventQueue;

@interface STKAlertSessionManager : NSObject {

	NSObject*<OS_os_log> _log;
	STKAlertSessionEventQueue* _eventQueue;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;                            //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) STKAlertSessionEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
-(STKAlertSessionEventQueue *)eventQueue;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)_willPresentAlertHandle:(id)arg1 ;
-(id)initWithEventQueue:(id)arg1 logger:(id)arg2 ;
-(void)enqueuePresentationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
