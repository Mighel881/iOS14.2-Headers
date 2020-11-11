/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppExposeGridSwitcherModifier* _appExposeModifier;
	BOOL _isTransitioningOutOfAppExpose;

}

@property (assign,nonatomic) BOOL reversesFloatingCardDirection; 
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(long long)plusButtonStyle;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(id)scrollViewAttributes;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 appExposeModifier:(id)arg2 ;
-(BOOL)reversesFloatingCardDirection;
-(void)setReversesFloatingCardDirection:(BOOL)arg1 ;
@end
