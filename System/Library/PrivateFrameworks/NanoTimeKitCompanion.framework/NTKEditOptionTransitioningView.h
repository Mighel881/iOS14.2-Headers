/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKEditOptionTransitioningViewDelegate;
@class UIView, UIImageView, NTKEditOption;

@interface NTKEditOptionTransitioningView : UIView {

	UIView* _transitionContainer;
	UIView* _transitionDimmingView;
	double _breathScaleModifier;
	double _rubberBandScaleModifier;
	UIImageView* _toTransitionImageView;
	UIImageView* _fromTransitionImageView;
	id<NTKEditOptionTransitioningViewDelegate> _delegate;
	NTKEditOption* _toEditOption;
	NTKEditOption* _fromEditOption;

}

@property (nonatomic,retain) NTKEditOption * toEditOption;                                            //@synthesize toEditOption=_toEditOption - In the implementation block
@property (nonatomic,retain) NTKEditOption * fromEditOption;                                          //@synthesize fromEditOption=_fromEditOption - In the implementation block
@property (assign,nonatomic,__weak) id<NTKEditOptionTransitioningViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NTKEditOptionTransitioningViewDelegate>)delegate;
-(void)didAddSubview:(id)arg1 ;
-(void)setDelegate:(id<NTKEditOptionTransitioningViewDelegate>)arg1 ;
-(void)setOption:(id)arg1 ;
-(void)setDimmingAlpha:(double)arg1 ;
-(void)_updateUnifiedScaleTransform;
-(void)setFromEditOption:(NTKEditOption *)arg1 ;
-(void)setToEditOption:(NTKEditOption *)arg1 ;
-(void)_resetTransitionImageView:(id)arg1 ;
-(void)setBreatheFraction:(double)arg1 ;
-(void)setRubberBandingFraction:(double)arg1 ;
-(void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 ;
-(NTKEditOption *)toEditOption;
-(NTKEditOption *)fromEditOption;
@end
