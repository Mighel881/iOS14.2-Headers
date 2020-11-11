/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector
+(BOOL)supportsCollectionForProfile:(id)arg1 ;
+(BOOL)isNatalimeterAvailable;
+(BOOL)isCoreMotionCaloriePushModelEnabled;
-(id)initWithProfile:(id)arg1 ;
-(Class)coreMotionDatumClass;
-(id)persistentIdentifier;
-(id)queue_newDataSource;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(id)collectedTypes;
@end
