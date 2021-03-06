/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/WBSSiteMetadataImageCacheSettingsSQLiteStore.h>

@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore
+(long long)databaseSchemaVersion;
+(Class)cacheSettingsEntryClass;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_statementsForMigrationToSchemaVersion:(long long)arg1 ;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_selectAllEntriesSQLiteStatement;
-(id)_createNewDatabaseSQLiteStatement;
-(id)_deleteAllEntriesSQLiteStatement;
@end

