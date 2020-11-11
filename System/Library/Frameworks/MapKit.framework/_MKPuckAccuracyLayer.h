/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>

@class UIColor, UITraitCollection;

@interface _MKPuckAccuracyLayer : CALayer {

	unsigned long long _mapType;
	UIColor* _tintColor;
	BOOL _stale;
	double _minimumRadius;
	BOOL _externallyHidden;
	BOOL _internallyHidden;
	BOOL _shouldShowAnimationsIfAvailable;
	UIColor* _fullOpacityFillColor;
	double _baseOpacity;
	double _additionalOpacityMultiplier;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) double minimumRadius;                             //@synthesize minimumRadius=_minimumRadius - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                       //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,getter=isStale,nonatomic) BOOL stale;                        //@synthesize stale=_stale - In the implementation block
@property (nonatomic,readonly) double presentationFillOpacity; 
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)stopAnimations;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_updateColors;
-(UITraitCollection *)traitCollection;
-(id)init;
-(void)setFillOpacity:(double)arg1 duration:(double)arg2 ;
-(void)updateLegacyConfiguration;
-(void)setStale:(BOOL)arg1 ;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(double)minimumRadius;
-(void)setMinimumRadius:(double)arg1 ;
-(BOOL)isStale;
-(void)startAnimationsIfNecessary;
-(void)setHidden:(BOOL)arg1 ;
-(UIColor *)tintColor;
-(void)setAccuracy:(double)arg1 duration:(double)arg2 ;
-(double)presentationFillOpacity;
@end
