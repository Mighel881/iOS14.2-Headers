/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMTimeZoneSpec : FATObject {

	NSString* _id;
	NSNumber* _rawUTCOffsetMillis;
	NSNumber* _dstSavingsAdjustmentMillis;
	NSNumber* _nextEnterDaylightSavings;
	NSNumber* _nextLeaveDaylightSavings;

}

@property (nonatomic,retain) NSString * id;                                      //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * rawUTCOffsetMillis;                      //@synthesize rawUTCOffsetMillis=_rawUTCOffsetMillis - In the implementation block
@property (nonatomic,retain) NSNumber * dstSavingsAdjustmentMillis;              //@synthesize dstSavingsAdjustmentMillis=_dstSavingsAdjustmentMillis - In the implementation block
@property (nonatomic,retain) NSNumber * nextEnterDaylightSavings;                //@synthesize nextEnterDaylightSavings=_nextEnterDaylightSavings - In the implementation block
@property (nonatomic,retain) NSNumber * nextLeaveDaylightSavings;                //@synthesize nextLeaveDaylightSavings=_nextLeaveDaylightSavings - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setId:(NSString *)arg1 ;
-(NSString *)id;
-(NSNumber *)rawUTCOffsetMillis;
-(void)setRawUTCOffsetMillis:(NSNumber *)arg1 ;
-(NSNumber *)dstSavingsAdjustmentMillis;
-(void)setDstSavingsAdjustmentMillis:(NSNumber *)arg1 ;
-(NSNumber *)nextEnterDaylightSavings;
-(void)setNextEnterDaylightSavings:(NSNumber *)arg1 ;
-(NSNumber *)nextLeaveDaylightSavings;
-(void)setNextLeaveDaylightSavings:(NSNumber *)arg1 ;
@end

