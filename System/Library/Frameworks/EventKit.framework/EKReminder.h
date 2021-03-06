/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, EKObjectID, NSTimeZone, NSDate;

@interface EKReminder : EKCalendarItem {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _dueDateComponents;
	EKObjectID* _parentID;

}

@property (nonatomic,readonly) NSTimeZone * dueDateTimeZone; 
@property (nonatomic,retain) EKObjectID * parentID;                             //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;                //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long priority; 
+(id)knownSingleValueKeysForComparison;
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
+(Class)frozenClass;
-(BOOL)validate:(id*)arg1 ;
-(EKObjectID *)parentID;
-(unsigned long long)entityType;
-(BOOL)refresh;
-(id)init;
-(void)setTimeZone:(id)arg1 ;
-(BOOL)_reset;
-(NSTimeZone *)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1 ;
-(id)startDateComponentsRaw;
-(id)startDateTimeZone;
-(void)setStartDateTimeZone:(id)arg1 ;
-(BOOL)startDateAllDay;
-(void)setStartDateAllDay:(BOOL)arg1 ;
-(id)dueDate;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(void)forceUpdateFrozenCalendar:(id)arg1 ;
-(unsigned long long)displayOrder;
-(id)initWithPersistentObject:(id)arg1 ;
-(BOOL)isCompleted;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setParentID:(EKObjectID *)arg1 ;
-(void)reset;
-(id)externalURI;
-(id)description;
-(id)timeZone;
-(void)setStartTimeZone:(id)arg1 ;
-(id)_generateNewUniqueID;
-(void)setAllDay:(BOOL)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)startDateForRecurrence;
-(BOOL)isAllDay;
-(NSDate *)completionDate;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)startDateComponents;
-(void)rollback;
-(id)reminderIdentifier;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
-(void)clearParentID;
-(id)bestDisplayAlarm;
-(id)startTimeZone;
-(void)setDueDate:(id)arg1 ;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
@end

