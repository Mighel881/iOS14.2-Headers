/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UIProgressView, UIView, NSNumberFormatter, _UIBackdropView;

@interface PLProgressView : UIView {

	UIButton* _cancelButton;
	UILabel* _labelView;
	UIProgressView* _progressView;
	UIView* _topDivider;
	unsigned _didLayout : 1;
	unsigned _didSetPermanantTextOnLabelView : 1;
	NSNumberFormatter* _progressFormatter;
	long long _backgroundType;
	UIView* _backgroundView;
	UIView* _backgroundTintedView;
	_UIBackdropView* _backgroundBlurredView;
	BOOL _showsCancelButton;
	/*^block*/id _cancelationHandler;

}

@property (assign,nonatomic) long long backgroundType;                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTintedView;                        //@synthesize backgroundTintedView=_backgroundTintedView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backgroundBlurredView;              //@synthesize backgroundBlurredView=_backgroundBlurredView - In the implementation block
@property (assign,nonatomic) float percentComplete; 
@property (assign,nonatomic) BOOL showsCancelButton;                               //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
-(void)setBackgroundType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(float)percentComplete;
-(UIView *)backgroundView;
-(void)setLabelText:(id)arg1 ;
-(id)cancelationHandler;
-(BOOL)showsCancelButton;
-(void)_cancel:(id)arg1 ;
-(void)setCancelationHandler:(id)arg1 ;
-(long long)backgroundType;
-(void)layoutSubviews;
-(void)updateUIForPublishingAgent:(id)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)dealloc;
-(void)_syncToBackgroundType;
-(void)_installBackgroundView;
-(void)_installBackgroundBlurredView;
-(void)_removeBackgroundBlurredView;
-(void)_installBackgroundTintedView;
-(void)_removeBackgroundTintedView;
-(UIView *)backgroundTintedView;
-(void)setBackgroundTintedView:(UIView *)arg1 ;
-(_UIBackdropView *)backgroundBlurredView;
-(void)setBackgroundBlurredView:(_UIBackdropView *)arg1 ;
@end
