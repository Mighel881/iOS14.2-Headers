/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLocale, NSTimeZone, NSDateFormatter;

@interface PLDateRangeFormatter : NSObject {

	os_unfair_lock_s _lock;
	long long _preset;
	NSLocale* _locale;
	BOOL _useLocalDates;
	NSTimeZone* _timeZone;
	BOOL _includeDayNumbers;
	BOOL _includeDayNumbersWhenMonthsDiffer;
	BOOL _useRelativeDayFormatting;
	BOOL _useShortMonths;
	BOOL _useShortDaysInRanges;
	BOOL _useTime;
	BOOL _yearOnly;
	BOOL _monthOnly;
	BOOL _timeOnly;
	BOOL _omitYear;
	BOOL _monthWithDelimiterAndYear;
	NSDateFormatter* _sameDayDateFormatter;
	NSDateFormatter* _sameDayNoYearDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	NSDateFormatter* _yearDateFormatter;
	NSDateFormatter* _monthDateFormatter;
	NSDateFormatter* _monthYearDateFormatter;
	NSDateFormatter* _relativeDateFormatter;
	UDateIntervalFormatRef _monthDayIntervalFormat;
	UDateIntervalFormatRef _monthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _dayOfTheWeekIntervalFormat;
	UDateIntervalFormatRef _timeIntervalFormat;
	UDateIntervalFormatRef _monthIntervalFormat;
	UDateIntervalFormatRef _monthYearIntervalFormat;
	UDateIntervalFormatRef _yearIntervalFormat;

}

@property (assign,nonatomic) long long preset; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL useLocalDates; 
+(id)autoupdatingFormatterWithPreset:(long long)arg1 ;
-(id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
-(NSLocale *)locale;
-(id)_monthYearDateFormatter;
-(id)_sameDayNoYearDateFormatter;
-(id)_monthDateFormatter;
-(UDateIntervalFormatRef)_differentMonthDayIntervalFormat;
-(id)init;
-(id)_dayOfTheWeekDateFormatter;
-(id)_dayTemplate;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)initWithPreset:(long long)arg1 ;
-(UDateIntervalFormatRef)_monthYearIntervalFormat;
-(id)_relativeDateFormatter;
-(UDateIntervalFormatRef)_monthIntervalFormat;
-(void)setUseLocalDates:(BOOL)arg1 ;
-(long long)preset;
-(id)localTimeZone;
-(void)setPreset:(long long)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(UDateIntervalFormatRef)_timeIntervalFormat;
-(id)_sameDayDateFormatter;
-(void)_handleUseLocalDatesDidChange;
-(id)stringFromDate:(id)arg1 ;
-(void)_systemTimeZoneDidChange:(id)arg1 ;
-(BOOL)useLocalDates;
-(UDateIntervalFormatRef)_yearIntervalFormat;
-(void)_resetFormatters;
-(UDateIntervalFormatRef)_monthDayNoYearIntervalFormat;
-(void)_handlePresetDidChange;
-(id)_yearDateFormatter;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
-(UDateIntervalFormatRef)_monthDayIntervalFormat;
-(UDateIntervalFormatRef)_dayOfTheWeekIntervalFormat;
-(id)_sameMonthTemplate;
-(id)_dayDifferentMonthsTemplate;
-(UDateIntervalFormatRef)_differentMonthDayNoYearIntervalFormat;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)dealloc;
@end
