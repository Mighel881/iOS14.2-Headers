/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
-(NSDateComponents *)endDateComponents;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(NSDateComponents *)startDateComponents;
-(BOOL)containsDateComponents:(id)arg1 inCalendar:(id)arg2 ;
-(unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1 ;
@end

