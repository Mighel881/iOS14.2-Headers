/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLiPhotoMigrationSupport : NSObject {

	Ai _inFlightMigrationCount;

}

@property (nonatomic,readonly) BOOL migrationWasInterrupted; 
+(id)sharedInstance;
-(id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1 ;
-(BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg1 ;
-(BOOL)migrationWasInterrupted;
-(void)_migrateiPhotoLibraryWorkerWithProgressHandler:(/*^block*/id)arg1 iPhotoLibraryDir:(id)arg2 ;
-(id)_inFlightMigrationMarkerFilePath;
-(void)_migrateiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2 ;
-(void)_incrementInFlightMigrationCount;
-(id)_iPhotoToPhotosUuidMapTable;
-(void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3 ;
-(BOOL)_validateUuid:(id)arg1 ;
-(id)_migratediPhotoDir;
-(id)_preMigratediPhotoDir;
-(void)fireMigrationOfiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(void)checkForUnmigratediPhotoContentWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateEachPreMigratediPhotoLibrary:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_decrementInFlightMigrationCount;
-(id)_displayableUuidWithUuid:(id)arg1 ;
-(BOOL)_isMigrating;
@end
