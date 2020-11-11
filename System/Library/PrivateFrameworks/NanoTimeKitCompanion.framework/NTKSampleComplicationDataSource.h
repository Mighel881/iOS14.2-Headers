/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate;

@interface NTKSampleComplicationDataSource : NTKComplicationDataSource {

	CLKComplicationTemplate* _complicationTemplate;

}
+(BOOL)_isComplicationFamilyAvaialbleBeforeGlory:(long long)arg1 ;
+(BOOL)acceptsClassicComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3 ;
-(id)_city;
-(id)_dateTemplate;
-(void)_localeDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)_alarmTemplate;
-(id)_timerTemplate;
-(id)_stopwatchTemplate;
-(id)_worldClockTemplate;
-(id)_batteryTemplate;
-(id)_heartrateTemplate;
-(id)_wellnessTemplate;
-(id)_nextEventTemplate;
-(id)_moonPhaseTemplate;
-(id)_musicTemplate;
-(id)_radioTemplate;
-(id)_podcastTemplate;
-(id)_nowPlayingTemplate;
-(id)_workoutTemplate;
-(id)_breathingTemplate;
-(id)_reminderTemplate;
-(id)_newsTemplate;
-(id)_siriTemplate;
-(id)_solarTemplate;
-(id)_astronomyTemplateFromVista:(unsigned long long)arg1 ;
-(id)_wellnessStatisticsForData:(id)arg1 unit:(id)arg2 ;
-(id)_wellnessStatisticsForStandHours:(id)arg1 ;
-(id)currentSwitcherTemplate;
-(id)_currentEntryModel;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(id)sampleTemplate;
@end
