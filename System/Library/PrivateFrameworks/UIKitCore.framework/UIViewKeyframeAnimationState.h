/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewAnimationState.h>

@class NSMutableSet, NSMutableDictionary;

@interface UIViewKeyframeAnimationState : UIViewAnimationState {

	double _frameDuration;
	double _frameStartTime;
	long long _calculationMode;
	NSMutableSet* _keyframeLayers;
	NSMutableDictionary* _keyframeLayersForCurrentKeyFrameDict;
	BOOL _inFrame;

}
-(id)init;
-(void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(/*^block*/id)arg3 ;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(BOOL)_isKeyframeAnimation;
-(id)_updateAnimationFrameWithAnimationProperties:(id)arg1 ;
-(void)cleanupTrackedLayers;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(id)_createDeferredAnimationForKey:(id)arg1 ;
-(void)pop;
@end

