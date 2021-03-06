/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKUnit, NSString;

@interface HKInteractiveChartMinMaxData : NSObject <HKGraphSeriesChartData> {

	double _minValue;
	double _maxValue;
	HKUnit* _unit;

}

@property (assign,nonatomic) double minValue;                       //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                       //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                         //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUnit:(HKUnit *)arg1 ;
-(double)minValue;
-(HKUnit *)unit;
-(double)maxValue;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
@end

