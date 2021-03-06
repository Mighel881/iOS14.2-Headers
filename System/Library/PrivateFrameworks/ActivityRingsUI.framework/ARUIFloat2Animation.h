/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ARUIRingGroupAnimation.h>

@protocol ARUIRingGroupAnimationDelegate;
@class CAMediaTimingFunction, NSString;

@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation> {

	double _percent;
	/*^block*/id _applier;
	BOOL _completed;
	id<ARUIRingGroupAnimationDelegate> _delegate;
	double _duration;
	 _startValue;
	 _currentValue;
	 _endValue;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic,__weak) id<ARUIRingGroupAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly)  startValue;                                                   //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly)  currentValue;                                                 //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly)  endValue;                                                     //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction;                        //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationWithDuration:(double)arg1 startValue:(id)arg2 endValue:(/*^block*/id)arg3 ;
-(id<ARUIRingGroupAnimationDelegate>)delegate;
-()currentValue;
-(void)setDelegate:(id<ARUIRingGroupAnimationDelegate>)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)update:(double)arg1 ;
-()endValue;
-(void)completeAnimation;
-(double)duration;
-(BOOL)isAnimating;
-()startValue;
-(void)dealloc;
-(id)initWithDuration:(double)arg1 startValue:(id)arg2 endValue:(/*^block*/id)arg3 ;
@end

