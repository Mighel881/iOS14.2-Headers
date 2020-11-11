/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKActivityCacheComparisonFilter : _HKComparisonFilter {

	long long _cacheIndex;

}

@property (nonatomic,readonly) long long cacheIndex;              //@synthesize cacheIndex=_cacheIndex - In the implementation block
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 cacheIndex:(long long)arg2 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
-(long long)cacheIndex;
-(void)configureInMemoryFilter;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end
