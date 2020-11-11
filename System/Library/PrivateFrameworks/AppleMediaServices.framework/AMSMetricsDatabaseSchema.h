/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSMetricsDatabaseSchema : NSObject
+(id)_containerURLForContainerId:(id)arg1 ;
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
+(id)databasePathForContainerId:(id)arg1 ;
+(void)migrateVersion3to4WithMigration:(id)arg1 ;
+(BOOL)removeDatabaseForContainerId:(id)arg1 ;
+(void)migrateVersion0to1WithMigration:(id)arg1 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg1 ;
+(void)migrateVersion2to3WithMigration:(id)arg1 ;
+(void)migrateVersion1to2WithMigration:(id)arg1 ;
@end
