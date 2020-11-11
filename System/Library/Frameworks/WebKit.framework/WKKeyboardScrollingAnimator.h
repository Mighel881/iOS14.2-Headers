/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WKKeyboardScrollableInternal;
#import <WebKit/WebKit-Structs.h>
@interface WKKeyboardScrollingAnimator : NSObject {

	id<WKKeyboardScrollableInternal> _scrollable;
	RetainPtr<CADisplayLink>* _displayLink;
	Optional<WebKit::KeyboardScroll> _currentScroll;
	BOOL _scrollTriggeringKeyIsPressed;
	FloatSize _velocity;
	FloatPoint _idealPosition;
	FloatPoint _currentPosition;
	FloatPoint _idealPositionForMinimumTravel;

}
-(void)handleKeyEvent:(id)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(const KeyboardScrollParameters*)parameters;
-(void)willStartInteractiveScroll;
-(id)init;
-(void)stopDisplayLink;
-(void)startDisplayLinkIfNeeded;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)stopAnimatedScroll;
-(id)initWithScrollable:(id)arg1 ;
-(Optional<WebKit::KeyboardScroll>)keyboardScrollForEvent:(id)arg1 ;
-(void)invalidate;
-(BOOL)beginWithEvent:(id)arg1 ;
@end
