/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconZoomAnimator.h>

@class SBFloatyFolderView, SBIconView, SBHFolderZoomSettings;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator {

	SBFloatyFolderView* _folderView;
	SBIconView* _folderIconView;
	CGAffineTransform _folderIconViewScaleTransform;

}

@property (nonatomic,retain) SBHFolderZoomSettings * settings; 
-(void)_applyIconCrossfadeForZoomFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(void)_calculateZoomedOffset:(CGPoint*)arg1 scale:(CGPoint*)arg2 forIcon:(id)arg3 withView:(id)arg4 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_prepareAnimation;
-(void)_applyIconTransformForZoomFraction:(double)arg1 ;
-(id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(CGPoint)arg3 ;
@end
