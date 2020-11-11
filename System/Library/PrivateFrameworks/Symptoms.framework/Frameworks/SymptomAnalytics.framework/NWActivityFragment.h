/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NWActivityMetricData, NSNumber;

@interface NWActivityFragment : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,retain) NWActivityMetricData * metricData; 
@property (nonatomic,copy) NSNumber * type; 
+(id)entityName;
@end
