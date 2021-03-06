/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariCore/WBSSQLiteStore.h>

@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore
-(void)rejectedResourceIconInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePageURLStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_migrateToSchemaVersion_2;
-(id)_setIconUUID:(id)arg1 forIconURLString:(id)arg2 size:(CGSize)arg3 hasGeneratedResolutions:(BOOL)arg4 ;
-(BOOL)_deleteRejectedResourceForPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(void)_deletePageURLs:(id)arg1 ;
-(id)_fetchPageURLStringsWithPredicate:(id)arg1 ;
-(void)removeAllDataForIconUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fetchAllPageURLStrings;
-(void)_deletePageURL:(id)arg1 ;
-(id)_fetchIconInfoForIconURLString:(id)arg1 ;
-(void)firstIconUUIDMatchingPageURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstIconInfoMatchingPageURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)iconInfoForIconURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllIconUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)iconInfoForPageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_deleteRejectedResourceForPageURLStrings:(id)arg1 ;
-(id)_fetchIconUUIDsForPageURLStrings:(id)arg1 ;
-(void)fetchPageURLStringsWithPrefixesIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setPageURL:(id)arg1 toIconUUID:(id)arg2 ;
-(BOOL)_setRejectedResourceForPageURL:(id)arg1 iconURLString:(id)arg2 ;
-(id)_fetchIconInfoForIconUUID:(id)arg1 ;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(void)_generateStatementsForQuery:(id)arg1 arguments:(id)arg2 statementCallback:(/*^block*/id)arg3 ;
-(void)firstIconInfoMatchingIconURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllKnownPageURLStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_migrateToSchemaVersion_4;
-(void)_deleteIconsWithUUIDsFromIconInfo:(id)arg1 ;
-(void)_deleteAllPageAndIconEntries;
-(int)_createFreshDatabaseSchema;
-(id)_setTimestampToNowForIconUUID:(id)arg1 ;
-(void)markRejectedIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(CGSize)arg3 iconHasGeneratedResolutions:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)linkPageURLString:(id)arg1 toExistingIconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)_currentSchemaVersion;
-(id)_fetchIconUUIDForPageURLString:(id)arg1 ;
-(void)_firstIconUUIDForPageURLStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fetchIconInfoForRejectedResourceWithPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(int)_migrateToSchemaVersion_3;
-(void)_deleteIconWithUUIDFromIconInfo:(id)arg1 ;
-(void)_deletePageURLsWithUUIDFromPageInfo:(id)arg1 ;
-(void)removeAllPageURLStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removePageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findOrphansFromIconUUIDs:(id)arg1 ;
-(void)_deleteRejectedResourceForPageURLString:(id)arg1 ;
-(void)markValidIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_hasPageURLsForIconUUID:(id)arg1 ;
@end

