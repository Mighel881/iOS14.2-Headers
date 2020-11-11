/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIStateMachine : NSObject {

	const SCD_Struct_UI119* _spec;
	BOOL _externalSpec;
	unsigned long long _state;

}

@property (nonatomic,readonly) void* spec; 
@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 ;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 postTransitionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)state;
-(void*)spec;
-(void)handleEvent:(unsigned long long)arg1 withContext:(_UIStateContext*)arg2 ;
-(void)setStateChangeObserver:(unsigned long long)arg1 observer:(/*^block*/id)arg2 ;
-(void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(id)initWithSpec:(void*)arg1 initialState:(unsigned long long)arg2 ;
-(id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3 ;
-(void)dealloc;
@end
