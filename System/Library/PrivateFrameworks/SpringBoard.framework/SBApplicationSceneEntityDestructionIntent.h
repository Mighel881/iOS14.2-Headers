/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBApplicationSceneEntityDestructionIntent : NSObject {

	BOOL _shouldRemoveFromHistory;
	unsigned long long _animation;

}

@property (assign,nonatomic) unsigned long long animation;              //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveFromHistory;              //@synthesize shouldRemoveFromHistory=_shouldRemoveFromHistory - In the implementation block
-(unsigned long long)animation;
-(void)setAnimation:(unsigned long long)arg1 ;
-(BOOL)shouldRemoveFromHistory;
-(void)setShouldRemoveFromHistory:(BOOL)arg1 ;
@end

