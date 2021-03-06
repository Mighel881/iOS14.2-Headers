/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEvent.h>

@class NSDate, NSString;

@interface HMIVideoTimelineEntry : HMFObject <HMIVideoEvent> {

	NSDate* _date;
	SCD_Struct_HM3 _time;

}

@property (readonly) SCD_Struct_HM3 time;                           //@synthesize time=_time - In the implementation block
@property (readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)date;
-(NSString *)description;
-(SCD_Struct_HM3)time;
-(id)initWithTime:(SCD_Struct_HM3)arg1 date:(id)arg2 ;
@end

