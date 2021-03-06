/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBOrientationTransformWrapperView.h>

@class SBIconView, UIView, UIViewFloatAnimatableProperty, CAMediaTimingFunction;

@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView {

	SBIconView* _iconOverlayView;
	UIView* _iconCrossfadeView;
	UIView* _iconOverlayContainerView;
	CGRect _initialIconOverlayViewBounds;
	UIView* _crossfadeView;
	CGRect _crossfadeViewFrame;
	UIViewFloatAnimatableProperty* _iconCrossfadeAnimatableProperty;
	CAMediaTimingFunction* _iconCrossfadeTimingFunction;
	double _cornerRadius;

}

@property (nonatomic,readonly) CGRect crossfadeViewFrame; 
@property (nonatomic,readonly) SBIconView * iconView; 
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(SBIconView *)iconView;
-(id)initWithIconView:(id)arg1 crossfadeView:(id)arg2 crossfadeViewFrame:(CGRect)arg3 contentOrientation:(long long)arg4 containerOrientation:(long long)arg5 ;
-(void)_applyIconOverlayViewOverlayScaleProperties;
-(void)layoutSubviews;
-(void)_setUpIconCrossfadeView;
-(double)cornerRadius;
-(CGRect)crossfadeViewFrame;
-(void)setCornerRadius:(double)arg1 ;
-(double)_iconOverlayScale;
-(void)_setUpIconCrossfadeAnimatableProperty;
-(void)invalidate;
-(double)_currentFadeValue;
-(void)dealloc;
@end

