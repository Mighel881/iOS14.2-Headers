/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HUQuickControlContainerViewControllerDelegate <NSObject>
@required
-(BOOL)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
-(double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2;
-(id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(BOOL)arg3;
-(id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
-(void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(BOOL)arg2;
-(void)quickControlViewControllerDidTapDetailsButton:(id)arg1;

@end

