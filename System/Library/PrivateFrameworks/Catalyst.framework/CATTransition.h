/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CATState;

@interface CATTransition : NSObject {

	CATState* _state;
	SEL _action;

}

@property (nonatomic,__weak,readonly) CATState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
+(id)new;
-(id)init;
-(id)initWithState:(id)arg1 action:(SEL)arg2 ;
-(CATState *)state;
-(id)description;
-(SEL)action;
@end
