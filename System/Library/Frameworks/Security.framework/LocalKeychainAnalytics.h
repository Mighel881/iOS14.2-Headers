/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Security/SFAnalytics.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDate;

@interface LocalKeychainAnalytics : SFAnalytics {

	BOOL _probablyInClassD;
	NSMutableArray* _pendingReports;
	NSObject*<OS_dispatch_queue> _queue;
	int _notificationToken;
	NSDate* _backupStartTime;
	int _backupType;

}
+(id)databasePath;
-(id)init;
-(BOOL)canPersistMetrics;
-(void)processPendingMessages;
-(void)reportKeychainUpgradeFrom:(int)arg1 to:(int)arg2 outcome:(int)arg3 error:(id)arg4 ;
-(void)reportKeychainUpgradeOutcome:(int)arg1 attributes:(id)arg2 ;
-(void)reportKeychainBackupStartWithType:(int)arg1 ;
-(void)reportKeychainBackupEnd:(BOOL)arg1 error:(id)arg2 ;
@end
