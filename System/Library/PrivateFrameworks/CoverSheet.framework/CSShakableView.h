/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class SBFTouchPassThroughView, NSArray, NSString;

@interface CSShakableView : SBFTouchPassThroughView <CAAnimationDelegate> {

	/*^block*/id _shakeCompletionBlock;
	SBFTouchPassThroughView* _containerView;
	NSArray* _prototypeSpringAnimations;
	double _shakeDistance;

}

@property (nonatomic,readonly) SBFTouchPassThroughView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * prototypeSpringAnimations;                    //@synthesize prototypeSpringAnimations=_prototypeSpringAnimations - In the implementation block
@property (assign,nonatomic) double shakeDistance;                                   //@synthesize shakeDistance=_shakeDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShakeDistance:(double)arg1 ;
-(NSArray *)prototypeSpringAnimations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)_defaultSpringAnimations;
-(void)_invokeCompletionBlockIfNecessary;
-(SBFTouchPassThroughView *)containerView;
-(void)layoutSubviews;
-(double)shakeDistance;
-(void)beginShakingWithCompletion:(/*^block*/id)arg1 ;
-(void)setPrototypeSpringAnimations:(NSArray *)arg1 ;
-(void)dealloc;
@end

