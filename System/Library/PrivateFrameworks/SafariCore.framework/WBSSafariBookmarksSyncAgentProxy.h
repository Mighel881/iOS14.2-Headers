/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSSafariBookmarksSyncAgentProtocol.h>

@class NSXPCConnection, NSString;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol> {

	NSXPCConnection* __connection;

}

@property (retain) NSXPCConnection * _connection;                   //@synthesize _connection=__connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProxy;
-(NSXPCConnection *)_connection;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)migrateToCloudKitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userAccountDidChange:(long long)arg1 ;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerForPushNotificationsIfNeeded;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1 ;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearLocalDataIncludingMigrationState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToDAVDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchCloudTabDevicesAndCloseRequests;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginMigrationFromDAV;
-(void)userDidUpdateBookmarkDatabase;
-(void)dealloc;
-(void)observeRemoteMigrationStateForSecondaryMigration;
@end

