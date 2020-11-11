/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFMeasurementUnit : NSObject
+(id)unitFromString:(id)arg1 ;
+(id)unitTypeForUnitClass:(Class)arg1 ;
+(id)defaultUnitForUnitType:(id)arg1 ;
+(id)availableUnitsForUnitType:(id)arg1 ;
+(id)unitFromString:(id)arg1 unitType:(id)arg2 caseSensitive:(BOOL)arg3 ;
+(id)availableUnitTypes;
+(Class)unitClassForUnitType:(id)arg1 ;
+(id)localizedStringForUnitType:(id)arg1 ;
+(id)unitTypeMap;
+(id)availableUnitsForUnitType:(id)arg1 cacheResult:(BOOL)arg2 ;
+(BOOL)usesMetricSystemForUnitType:(id)arg1 ;
@end
