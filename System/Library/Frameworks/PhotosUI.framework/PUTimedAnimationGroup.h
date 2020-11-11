/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUAnimationGroup.h>

@interface PUTimedAnimationGroup : PUAnimationGroup {

	BOOL _areAnimationsPaused;
	double _pausedElapsedTime;
	double _beginTime;

}

@property (assign,nonatomic) double beginTime;                  //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
-(void)setElapsedTime:(double)arg1 ;
-(double)beginTime;
-(double)currentTime;
-(double)elapsedTime;
-(id)init;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(void)setBeginTime:(double)arg1 ;
-(void)updateAnimations;
-(void)_update;
@end
