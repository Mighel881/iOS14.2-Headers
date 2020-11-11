/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout, SBFluidSwitcherAnimationSettings;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBSwitcherModifier* _multitaskingModifier;
	SBAppLayout* _selectedAppLayout;
	SBFluidSwitcherAnimationSettings* _animationSettings;

}

@property (nonatomic,retain) SBSwitcherModifier * multitaskingModifier;                         //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
@property (nonatomic,retain) SBAppLayout * selectedAppLayout;                                   //@synthesize selectedAppLayout=_selectedAppLayout - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)visibleAppLayouts;
-(id)_layoutSettings;
-(void)setAnimationSettings:(SBFluidSwitcherAnimationSettings *)arg1 ;
-(SBFluidSwitcherAnimationSettings *)animationSettings;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(SBSwitcherModifier *)multitaskingModifier;
-(SBAppLayout *)selectedAppLayout;
-(void)setSelectedAppLayout:(SBAppLayout *)arg1 ;
-(id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 ;
-(void)setMultitaskingModifier:(SBSwitcherModifier *)arg1 ;
@end
