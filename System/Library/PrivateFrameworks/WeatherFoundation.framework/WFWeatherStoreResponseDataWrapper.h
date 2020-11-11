/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFParsedForecastData, WFAQIScale;

@interface WFWeatherStoreResponseDataWrapper : NSObject {

	unsigned long long _requestType;
	WFParsedForecastData* _forecastData;
	WFAQIScale* _aqiScale;

}

@property (assign,nonatomic) unsigned long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) WFParsedForecastData * forecastData;              //@synthesize forecastData=_forecastData - In the implementation block
@property (nonatomic,retain) WFAQIScale * aqiScale;                            //@synthesize aqiScale=_aqiScale - In the implementation block
-(void)setRequestType:(unsigned long long)arg1 ;
-(WFParsedForecastData *)forecastData;
-(void)setAqiScale:(WFAQIScale *)arg1 ;
-(unsigned long long)requestType;
-(void)setForecastData:(WFParsedForecastData *)arg1 ;
-(id)initWithForecastData:(id)arg1 ;
-(id)initWithAQIScale:(id)arg1 ;
-(WFAQIScale *)aqiScale;
@end
