/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFMyriadEmergencyDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject;

@interface AFMyriadEmergencyManager : NSObject {

	id<AFMyriadEmergencyDelegate> _delegate;
	CFNotificationCenterRef _center;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _handled;
	BOOL _informed;

}
+(id)currentManager;
-(void)informDelegateEmergencyHandled;
-(void)informDelegateEmergencyNotHandled;
-(void)_createDispatchTimerFor:(double)arg1 toExecute:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)initiateEmergencyCallMyriad;
@end
