/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutElementViewControlling.h>

@class SBInlineAppExposeContainerViewController, NSMutableSet, BSCornerRadiusConfiguration, NSString;

@interface SBInlineAppExposeLayoutElementViewController : SBLayoutElementViewController <SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutElementViewControlling> {

	SBInlineAppExposeContainerViewController* _inlineContainerViewController;
	NSMutableSet* _maskDisplayCornersReasons;

}

@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowOffset:(double)arg1 ;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(id)relinquishInlineContainerViewController;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)prepareForReuse;
-(void)invalidate;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
@end

