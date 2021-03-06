/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIViewFloatAnimatableProperty.h>
#import <UIKit/UIViewSpringAnimationBehaviorDescribing.h>

@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {

	double _dampingRatio;
	double _response;
	double _trackingDampingRatio;
	double _trackingResponse;
	BOOL _primed;
	BOOL _tracking;

}

@property (assign,nonatomic) BOOL primed;                //@synthesize primed=_primed - In the implementation block
@property (assign,nonatomic) double input; 
@property (assign,nonatomic) double output; 
@property (assign,nonatomic) BOOL tracking;              //@synthesize tracking=_tracking - In the implementation block
+(void)_withoutAnimation:(/*^block*/id)arg1 ;
-(double)output;
-(void)setInput:(double)arg1 ;
-(void)setPrimed:(BOOL)arg1 ;
-(BOOL)primed;
-(id)init;
-(double)input;
-(BOOL)tracking;
-(SCD_Struct_SF3)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)setOutput:(double)arg1 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 ;
-(double)projectForDeceleration:(double)arg1 ;
-(double)projectForTime:(double)arg1 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 ;
@end

