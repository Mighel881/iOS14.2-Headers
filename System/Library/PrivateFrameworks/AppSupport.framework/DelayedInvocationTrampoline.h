/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupport/InvocationTrampoline.h>

@interface DelayedInvocationTrampoline : InvocationTrampoline {

	double _delay;

}
-(id)initWithTarget:(id)arg1 delay:(double)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end

