/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AVTArchiverBasedStorePersistence : NSObject
+(id)readContentFromDiskAtLocation:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
+(BOOL)writeContent:(id)arg1 toDiskAtLocation:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
+(id)dbLocationForStoreLocation:(id)arg1 ;
+(BOOL)_createStoreIfNeededAtLocation:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
+(id)_readContentFromDiskAtLocation:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
+(BOOL)_createStoreFolderIfNeededAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_writeContent:(id)arg1 toDiskAtLocation:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
+(BOOL)writeVersion:(id)arg1 toDiskAtLocation:(id)arg2 error:(id*)arg3 ;
+(BOOL)_performMigrationIfNeededForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_createStoreEmptyFileIfNeededAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(id)readVersionForStoreAtLocation:(id)arg1 error:(id*)arg2 ;
+(BOOL)contentExistsAtLocation:(id)arg1 ;
+(BOOL)_migrateFromPre0_5ToCurrentForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_migrateFromPre0_6ToCurrentForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(id)_migrateDifferentAvatarKitVersionsForContent:(id)arg1 logger:(id)arg2 ;
+(BOOL)removeFilesAtLocation:(id)arg1 error:(id*)arg2 ;
+(id)currentVersion;
+(BOOL)isFileNotFoundError:(id)arg1 ;
@end
