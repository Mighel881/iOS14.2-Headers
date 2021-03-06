/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSArray, NSDictionary;


@protocol MTSleepSession <NSSecureCoding,NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSArray * intervals; 
@property (nonatomic,readonly) long long sampleType; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) unsigned long long endReason; 
@property (nonatomic,readonly) BOOL needsAdditionalProcessing; 
@required
-(NSDate *)endDate;
-(NSDictionary *)metadata;
-(NSDate *)startDate;
-(unsigned long long)endReason;
-(long long)sampleType;
-(NSArray *)intervals;
-(BOOL)needsAdditionalProcessing;

@end

