/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {

	long long _touchInterfaceOrientationWhenGestureBegan;
	SBFluidSwitcherViewController* _switcherViewController;

}

@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
-(SBFluidSwitcherViewController *)switcherViewController;
-(long long)_touchInterfaceOrientation;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(id)viewForTouchHistory;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
@end
