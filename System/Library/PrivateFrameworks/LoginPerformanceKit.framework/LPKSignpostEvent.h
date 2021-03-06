/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString;

@interface LPKSignpostEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
	NSString* _name;
	NSString* _processName;

}

@property (nonatomic,retain) NSDate * startDate;                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                  //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSDate *)endDate;
-(NSString *)processName;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSString *)name;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)_calculateDurationIfNeeded;
@end

