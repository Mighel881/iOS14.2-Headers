/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HDQuantitySampleValueEnumerator : NSObject
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(id)_propertiesForEnumeration;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 ;
+(long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end

