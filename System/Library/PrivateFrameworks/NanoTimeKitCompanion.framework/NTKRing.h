/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NTKRing : NSObject {

	double _fillFraction;
	double _strokeWidth;
	double _backgroundRingAlpha;
	double _radius;
	long long _ringStyle;

}

@property (assign) double fillFraction;                     //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign) double strokeWidth;                      //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign) double backgroundRingAlpha;              //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign) long long ringStyle;                     //@synthesize ringStyle=_ringStyle - In the implementation block
+(id)fillFractionStringForFillFraction:(float)arg1 ;
+(id)fillFractionStringWithSymbolForFillFraction:(float)arg1 ;
+(id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2 ;
-(void)setRadius:(double)arg1 ;
-(id)init;
-(double)radius;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeWidth;
-(void)setFillFraction:(double)arg1 ;
-(double)_validFillFraction:(double)arg1 ;
-(id)ringImage;
-(id)fillFractionString;
-(double)fillFraction;
-(double)backgroundRingAlpha;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(id)initWithFillFraction:(double)arg1 style:(long long)arg2 ;
-(long long)ringStyle;
-(id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4 ;
-(void)fillFraction:(double)arg1 ;
-(id)fillFractionStringWithSymbol;
-(void)setRingStyle:(long long)arg1 ;
@end

