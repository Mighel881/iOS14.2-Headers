/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UILabel.h>

@class HKValueRange;

@interface HKUIDateLabel : UILabel {

	BOOL _useUppercase;
	HKValueRange* _dateRange;

}

@property (nonatomic,readonly) HKValueRange * dateRange;              //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) BOOL useUppercase;                       //@synthesize useUppercase=_useUppercase - In the implementation block
+(id)dateStringForDateRange:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(BOOL)arg3 ;
+(id)_formattedTextFromDate:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(BOOL)arg3 ;
-(HKValueRange *)dateRange;
-(id)init;
-(void)setDateRange:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)_setDateRange:(id)arg1 ;
-(void)setDate:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)useUppercase;
-(void)setUseUppercase:(BOOL)arg1 ;
@end
