/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HRElectrocardiogramSessionScreenView;

@interface HRElectrocardiogramSessionSimulationView : UIView {

	BOOL _isLargeDevice;
	HRElectrocardiogramSessionScreenView* _screenView;

}

@property (nonatomic,readonly) HRElectrocardiogramSessionScreenView * screenView;              //@synthesize screenView=_screenView - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,readonly) BOOL isLargeDevice;                                             //@synthesize isLargeDevice=_isLargeDevice - In the implementation block
-(void)setTimeRemaining:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(void)_setUpUI;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isLargeDevice:(BOOL)arg2 ;
-(HRElectrocardiogramSessionScreenView *)screenView;
-(BOOL)isLargeDevice;
@end
