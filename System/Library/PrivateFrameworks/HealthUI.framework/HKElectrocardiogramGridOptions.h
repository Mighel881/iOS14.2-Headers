/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthUI/HealthUI-Structs.h>
@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject {

	unsigned long long _unitMultiple;
	unsigned long long _axis;
	UIColor* _lineColor;
	double _lineWidth;

}

@property (assign,nonatomic) unsigned long long unitMultiple;              //@synthesize unitMultiple=_unitMultiple - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                      //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                          //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                             //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) CGAffineTransform scale; 
-(void)setLineWidth:(double)arg1 ;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(UIColor *)lineColor;
-(double)lineWidth;
-(void)setLineColor:(UIColor *)arg1 ;
-(CGAffineTransform)scale;
-(unsigned long long)unitMultiple;
-(id)initWithUnitMultiple:(long long)arg1 axis:(unsigned long long)arg2 lineColor:(id)arg3 lineWidth:(double)arg4 ;
-(void)setUnitMultiple:(unsigned long long)arg1 ;
@end

