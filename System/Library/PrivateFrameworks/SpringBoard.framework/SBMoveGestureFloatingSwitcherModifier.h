/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {

	long long _initialFloatingConfiguration;
	long long _interfaceOrientation;
	CGPoint _translation;

}

@property (assign,nonatomic) long long initialFloatingConfiguration;              //@synthesize initialFloatingConfiguration=_initialFloatingConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                      //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) CGPoint translation;                                 //@synthesize translation=_translation - In the implementation block
-(id)visibleAppLayouts;
-(id)topMostLayoutElements;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToCacheSnapshots;
-(long long)interfaceOrientation;
-(CGPoint)translation;
-(CGRect)containerViewBounds;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(void)setTranslation:(CGPoint)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(long long)initialFloatingConfiguration;
-(void)setInitialFloatingConfiguration:(long long)arg1 ;
@end

