/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CalReminderMigrationBackup : NSObject
+(BOOL)removeExistingBackupInCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(id)_backupFileInCalendarDirectory:(id)arg1 ;
+(BOOL)backupCalendarDirectory:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldBackupCalendarDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2 reminderMigrationDefaultsProvider:(id)arg3 ;
@end
