/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIContentModuleContainerTransition.h>

@class UIWindow, UIView;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition {

	UIWindow* _snapshotHostWindow;
	UIView* _snapshotView;
	CGAffineTransform _snapshotCorrectiveTransform;

}

@property (assign,nonatomic,__weak) UIWindow * snapshotHostWindow;                       //@synthesize snapshotHostWindow=_snapshotHostWindow - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                      //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) CGAffineTransform snapshotCorrectiveTransform;              //@synthesize snapshotCorrectiveTransform=_snapshotCorrectiveTransform - In the implementation block
-(UIView *)snapshotView;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id)customAnimator;
-(void)setSnapshotHostWindow:(UIWindow *)arg1 ;
-(void)setSnapshotCorrectiveTransform:(CGAffineTransform)arg1 ;
-(UIWindow *)snapshotHostWindow;
-(CGAffineTransform)snapshotCorrectiveTransform;
@end

