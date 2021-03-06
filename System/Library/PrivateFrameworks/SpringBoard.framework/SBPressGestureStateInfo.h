/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBPressGestureStateInfo : NSObject {

	BOOL _isCoalescing;
	long long _state;
	double _expirationTime;
	long long _stateUponExpiration;

}

@property (assign,nonatomic) long long state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isCoalescing;                          //@synthesize isCoalescing=_isCoalescing - In the implementation block
@property (assign,nonatomic) double expirationTime;                      //@synthesize expirationTime=_expirationTime - In the implementation block
@property (assign,nonatomic) long long stateUponExpiration;              //@synthesize stateUponExpiration=_stateUponExpiration - In the implementation block
-(id)init;
-(void)setState:(long long)arg1 ;
-(void)setStateUponExpiration:(long long)arg1 ;
-(void)setIsCoalescing:(BOOL)arg1 ;
-(long long)state;
-(long long)stateUponExpiration;
-(void)setExpirationTime:(double)arg1 ;
-(BOOL)isCoalescing;
-(double)expirationTime;
@end

