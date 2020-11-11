/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GKEditAction : NSObject {

	BOOL _destructive;
	NSString* _name;
	SEL _selector;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
+(id)actionWithName:(id)arg1 selector:(SEL)arg2 ;
+(id)deleteActionWithName:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(BOOL)destructive;
-(NSString *)name;
-(void)setDestructive:(BOOL)arg1 ;
-(SEL)selector;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
@end
