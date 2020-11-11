/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, SAWeatherCondition, NSString;

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * chanceOfPrecipitation; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * isUserRequested; 
@property (nonatomic,copy) NSNumber * timeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forecastWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)forecast;
-(SAWeatherCondition *)condition;
-(id)groupIdentifier;
-(void)setChanceOfPrecipitation:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)isUserRequested;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(NSNumber *)chanceOfPrecipitation;
-(NSNumber *)timeIndex;
-(void)setTimeIndex:(NSNumber *)arg1 ;
-(void)setIsUserRequested:(NSNumber *)arg1 ;
@end
