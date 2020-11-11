/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject {

	long long _style;
	UIColor* _referenceColor;
	_UILegibilitySettings* _legibilitySettings;
	double _referenceContrast;
	UIColor* _highlightLimitingColor;
	UIColor* _shimmerColor;
	UIColor* _chevronShimmerColor;
	UIColor* _highlightColor;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * highlightLimitingColor;                          //@synthesize highlightLimitingColor=_highlightLimitingColor - In the implementation block
@property (nonatomic,retain) UIColor * shimmerColor;                                    //@synthesize shimmerColor=_shimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronShimmerColor;                             //@synthesize chevronShimmerColor=_chevronShimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UIColor * referenceColor;                                //@synthesize referenceColor=_referenceColor - In the implementation block
@property (nonatomic,readonly) double referenceContrast;                                //@synthesize referenceContrast=_referenceContrast - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
+(id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(long long)_style;
-(void)setTintColor:(UIColor *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(unsigned long long)hash;
-(UIColor *)referenceColor;
-(UIColor *)highlightLimitingColor;
-(UIColor *)chevronShimmerColor;
-(id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(UIColor *)shimmerColor;
-(id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2 ;
-(id)tintViewWithFrame:(CGRect)arg1 ;
-(id)highlightLimitingViewWithFrame:(CGRect)arg1 ;
-(double)referenceContrast;
-(void)setHighlightLimitingColor:(UIColor *)arg1 ;
-(void)setShimmerColor:(UIColor *)arg1 ;
-(void)setChevronShimmerColor:(UIColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(UIColor *)tintColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
@end
