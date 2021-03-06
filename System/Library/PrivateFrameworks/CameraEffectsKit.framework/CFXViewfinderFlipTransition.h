/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView, CAMSnapshotView;

@interface CFXViewfinderFlipTransition : NSObject {

	UIView* _viewfinderView;
	CAMSnapshotView* __frontSnapshotView;
	CAMSnapshotView* __backSnapshotView;
	CAMSnapshotView* __targetSnapshotView;
	unsigned long long __currentAnimationID;

}

@property (assign,nonatomic,__weak) UIView * viewfinderView;                                                     //@synthesize viewfinderView=_viewfinderView - In the implementation block
@property (setter=_setFrontSnapshotView:,nonatomic,retain) CAMSnapshotView * _frontSnapshotView;                 //@synthesize _frontSnapshotView=__frontSnapshotView - In the implementation block
@property (setter=_setBackSnapshotView:,nonatomic,retain) CAMSnapshotView * _backSnapshotView;                   //@synthesize _backSnapshotView=__backSnapshotView - In the implementation block
@property (setter=_setTargetSnapshotView:,nonatomic,retain) CAMSnapshotView * _targetSnapshotView;               //@synthesize _targetSnapshotView=__targetSnapshotView - In the implementation block
@property (assign,setter=_setCurrentAnimationID:,nonatomic) unsigned long long _currentAnimationID;              //@synthesize _currentAnimationID=__currentAnimationID - In the implementation block
-(UIView *)viewfinderView;
-(void)_setBackSnapshotView:(id)arg1 ;
-(CAMSnapshotView *)_backSnapshotView;
-(CAMSnapshotView *)_frontSnapshotView;
-(void)_setCurrentAnimationID:(unsigned long long)arg1 ;
-(double)_backSnapshotTargetRadiansForDirection:(long long)arg1 frontSnapshotRadians:(double)arg2 ;
-(CAMSnapshotView *)_targetSnapshotView;
-(void)_getCurrentRadians:(out double*)arg1 targetRadians:(out double*)arg2 forDirection:(long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5 ;
-(void)_setTargetSnapshotView:(id)arg1 ;
-(void)completeTransitionToLivePreviewWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_currentAnimationID;
-(id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2 ;
-(void)_setFrontSnapshotView:(id)arg1 ;
-(double)_frontSnapshotTargetRadiansForDirection:(long long)arg1 fromRadians:(double)arg2 ;
-(void)performFlipTransitionWithDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cleanupFromFlipTransition;
-(void)setViewfinderView:(UIView *)arg1 ;
-(id)initWithViewfinderView:(id)arg1 ;
@end

