/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WAHourlyForecastParser : NSObject
+(void)addSunEventIntoForecasts:(id)arg1 eventType:(unsigned long long)arg2 forecastDetail:(id)arg3 eventTime:(unsigned long long)arg4 currentTime:(unsigned long long)arg5 ;
+(id)parseForecasts:(id)arg1 temperature:(id)arg2 currentTime:(unsigned long long)arg3 condition:(long long)arg4 sunrise:(unsigned long long)arg5 sunset:(unsigned long long)arg6 ;
+(id)parseForecasts:(id)arg1 temperature:(id)arg2 hour:(long long)arg3 condition:(long long)arg4 sunrise:(unsigned long long)arg5 sunset:(unsigned long long)arg6 ;
@end
