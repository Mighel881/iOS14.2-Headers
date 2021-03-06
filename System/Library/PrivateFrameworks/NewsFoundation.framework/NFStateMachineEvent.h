/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet, NFStateMachineState;

@interface NFStateMachineEvent : NSObject {

	NSString* _name;
	NSSet* _states;
	NFStateMachineState* _destinationState;
	/*^block*/id _fireBlock;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSSet * states;                                      //@synthesize states=_states - In the implementation block
@property (nonatomic,retain) NFStateMachineState * destinationState;              //@synthesize destinationState=_destinationState - In the implementation block
@property (nonatomic,copy) id fireBlock;                                          //@synthesize fireBlock=_fireBlock - In the implementation block
-(void)setStates:(NSSet *)arg1 ;
-(NSSet *)states;
-(NFStateMachineState *)destinationState;
-(unsigned long long)hash;
-(void)setFireBlock:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)fireBlock;
-(id)fired:(id)arg1 withOwner:(id)arg2 ;
-(id)onFire:(/*^block*/id)arg1 ;
-(void)setDestinationState:(NFStateMachineState *)arg1 ;
-(id)initWithName:(id)arg1 transitionFromStates:(id)arg2 toState:(id)arg3 ;
-(void)setName:(NSString *)arg1 ;
@end

