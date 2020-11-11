/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSBatteryChargingView.h>

@class UIView, _UIBackdropView, CSBatteryFillView, SBUILegibilityLabel, NSArray, NSLayoutConstraint, UIImage, UIImageView;

@interface _CSSingleBatteryChargingView : CSBatteryChargingView {

	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	CSBatteryFillView* _batteryFillView;
	SBUILegibilityLabel* _chargePercentLabel;
	NSArray* _batteryConstraints;
	NSLayoutConstraint* _batteryTopOffset;
	UIImage* _batteryImage;
	UIImage* _boltImage;
	UIImageView* _boltImageView;
	BOOL _horizontalLayoutNeeded;
	BOOL _includesBoltImage;
	CGSize _batterySize;

}

@property (assign,nonatomic) CGSize batterySize;                       //@synthesize batterySize=_batterySize - In the implementation block
@property (assign,nonatomic) BOOL horizontalLayoutNeeded;              //@synthesize horizontalLayoutNeeded=_horizontalLayoutNeeded - In the implementation block
@property (assign,nonatomic) BOOL includesBoltImage;                   //@synthesize includesBoltImage=_includesBoltImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_layoutChargePercentLabel;
-(id)_chargePercentFont;
-(long long)batteryCount;
-(void)setBatterySize:(CGSize)arg1 ;
-(void)setHorizontalLayoutNeeded:(BOOL)arg1 ;
-(void)setIncludesBoltImage:(BOOL)arg1 ;
-(void)_layoutBattery;
-(BOOL)horizontalLayoutNeeded;
-(double)_batteryNoseOffset;
-(CGSize)batterySize;
-(BOOL)includesBoltImage;
@end
