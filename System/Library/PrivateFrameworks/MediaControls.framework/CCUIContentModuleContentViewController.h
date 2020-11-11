/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewPropertyAnimator;


@protocol CCUIContentModuleContentViewController <NSObject>
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@optional
-(void)displayWillTurnOff;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(BOOL)providesOwnPlatter;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(BOOL)canDismissPresentedContent;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)shouldPerformHoverInteraction;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1;
-(double)preferredExpandedContinuousCornerRadius;
-(void)controlCenterDidDismiss;
-(UIViewPropertyAnimator *)customAnimator;
-(void)willBecomeActive;
-(double)preferredExpandedContentWidth;
-(void)willResignActive;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)controlCenterWillPresent;
-(CCUIModuleLayoutSize*)moduleLayoutSizeForOrientation:(long long)arg1;
-(BOOL)shouldPerformClickInteraction;

@required
-(double)preferredExpandedContentHeight;

@end
