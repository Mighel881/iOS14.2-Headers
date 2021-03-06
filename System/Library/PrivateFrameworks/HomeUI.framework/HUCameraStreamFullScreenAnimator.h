/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HomeUI/HomeUI-Structs.h>
@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject {

	HUGridCameraCell* _sourceCameraCell;

}

@property (nonatomic,readonly) HUGridCameraCell * sourceCameraCell;              //@synthesize sourceCameraCell=_sourceCameraCell - In the implementation block
-(double)transitionDuration:(id)arg1 ;
-(id)initWithSourceCameraCell:(id)arg1 ;
-(CGRect)_toViewFinalFrame:(id)arg1 ;
-(CGRect)_adjustPresentedViewFrame:(CGRect)arg1 forTransitionContext:(id)arg2 ;
-(HUGridCameraCell *)sourceCameraCell;
@end

