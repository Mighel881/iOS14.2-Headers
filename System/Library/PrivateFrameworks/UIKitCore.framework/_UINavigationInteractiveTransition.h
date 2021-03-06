/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UINavigationInteractiveTransitionBase.h>

@class _UIParallaxTransitionPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	_UIParallaxTransitionPanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_configureNavigationGesture;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)startInteractiveTransition;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(void)setNotInteractiveTransition;
-(id)gestureRecognizerView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
@end

