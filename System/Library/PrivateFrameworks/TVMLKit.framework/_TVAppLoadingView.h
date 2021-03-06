/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWindow, UIImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface _TVAppLoadingView : UIView {

	UIView* _wallpaperView;
	UIWindow* _overlayWindow;
	BOOL _hiding;
	double _timeout;
	double _delay;
	UIImageView* _maskView;
	UIVisualEffectView* _visualEffectView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
+(id)loadingScreen;
-(BOOL)isVisible;
-(UIActivityIndicatorView *)spinner;
-(void)didRotate:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)hide;
-(void)timeout;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingDelay:(double)arg1 ;
-(void)showOverKeyWindowWithSpinnerOnly:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2 ;
-(void)showOverKeyWindow;
-(double)hideAnimationDuration;
@end

