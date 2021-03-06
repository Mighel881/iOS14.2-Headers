/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SGJournalRemindersObserver <SGJournalBaseObserver>
@required
-(void)addReminder:(id)arg1;
-(void)confirmReminderFromThisDevice:(id)arg1;
-(void)rejectReminderFromThisDevice:(id)arg1;
-(void)reminderAlarmTriggeredFromThisDevice:(id)arg1;
-(void)confirmReminderFromOtherDevice:(id)arg1;
-(void)rejectReminderFromOtherDevice:(id)arg1;
-(void)orphanReminder:(id)arg1;

@end

