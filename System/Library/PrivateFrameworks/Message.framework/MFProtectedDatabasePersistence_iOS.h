/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence
+(id)protectedDatabaseName;
+(id)journalDatabaseName;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg1 ;
-(BOOL)protectedDataAvailable;
-(void)finishJournalReconciliation:(unsigned long long)arg1 ;
-(BOOL)supportsJournaling;
@end
