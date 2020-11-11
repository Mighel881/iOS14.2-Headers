/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSHeartbeatMetricsRecord.h>

@class NSNumber;

@interface DNDSDailyHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord {

	NSNumber* _dayOfWeek;

}

@property (nonatomic,copy,readonly) NSNumber * dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)dayOfWeek;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(id)_initWithEnabled:(BOOL)arg1 manuallyEnabled:(BOOL)arg2 numberOfSessions:(id)arg3 numberOfManualSessions:(id)arg4 enabledFromControlCenterPhone:(BOOL)arg5 enabledFromControlCenterWatch:(BOOL)arg6 enabledForOneHour:(BOOL)arg7 enabledUntilEvening:(BOOL)arg8 enabledUntilMorning:(BOOL)arg9 enabledAtLocation:(BOOL)arg10 enabledDuringEvent:(BOOL)arg11 enabledDrivingMode:(BOOL)arg12 enabledSleepMode:(BOOL)arg13 dayOfWeek:(id)arg14 ;
@end
