/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {

	_UIBackdropView* _fullScreenBlurView;

}

@property (assign,nonatomic) unsigned long long blurStyle; 
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(unsigned long long)blurStyle;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3 ;
-(void)_stageViewsForFadeIn;
@end
