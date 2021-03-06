/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class HKDisplayTypeValueFormatter, HKDisplayType, HKUnitPreferenceController;

@interface HKAxisLabelDimensionDisplayType : HKAxisLabelDimensionScalar {

	HKDisplayTypeValueFormatter* _valueFormatter;
	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,retain) HKDisplayTypeValueFormatter * valueFormatter;              //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                               //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;               //@synthesize unitController=_unitController - In the implementation block
-(HKUnitPreferenceController *)unitController;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKDisplayType *)displayType;
-(HKDisplayTypeValueFormatter *)valueFormatter;
-(void)setValueFormatter:(HKDisplayTypeValueFormatter *)arg1 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2 ;
@end

