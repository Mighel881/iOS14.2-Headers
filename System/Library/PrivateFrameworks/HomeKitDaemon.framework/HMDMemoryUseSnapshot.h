/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString, NSNumber;

@interface HMDMemoryUseSnapshot : NSObject {

	NSDate* _date;
	NSString* _reason;
	NSNumber* _memoryUsage;
	NSNumber* _maxMemoryUsage;

}

@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSNumber * memoryUsage;                 //@synthesize memoryUsage=_memoryUsage - In the implementation block
@property (nonatomic,readonly) NSNumber * maxMemoryUsage;              //@synthesize maxMemoryUsage=_maxMemoryUsage - In the implementation block
+(id)memoryUseSnapshotWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)init;
-(NSDate *)date;
-(id)description;
-(NSNumber *)memoryUsage;
-(NSNumber *)maxMemoryUsage;
-(id)__initWithReason:(id)arg1 memoryUsage:(id)arg2 maxMemoryUsage:(id)arg3 ;
@end

