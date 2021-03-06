/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Photos/Photos-Structs.h>
@class PHAssetCollection, PHCollectionList, NSSortDescriptor, NSMutableDictionary, NSString, PHImportSource, PHPhotoLibrary;

@interface PHImportOptions : NSObject {

	options_bits _options_bits;
	PHAssetCollection* _destinationAlbum;
	PHCollectionList* _destinationFolder;
	NSSortDescriptor* _sortDescriptor;
	NSMutableDictionary* _userIptcMetadata;
	NSString* _personId;
	PHImportSource* _importSource;
	PHPhotoLibrary* _library;

}

@property (nonatomic,retain) NSString * personId;                                 //@synthesize personId=_personId - In the implementation block
@property (nonatomic,retain) PHImportSource * importSource;                       //@synthesize importSource=_importSource - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) PHAssetCollection * destinationAlbum;                //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (nonatomic,retain) PHCollectionList * destinationFolder;                //@synthesize destinationFolder=_destinationFolder - In the implementation block
@property (assign,nonatomic) BOOL preserveFolderStructure; 
@property (assign,nonatomic) BOOL hideProgress; 
@property (assign,nonatomic) BOOL skipAlertWhenFinished; 
@property (assign,nonatomic) BOOL shouldImportAsReferenced; 
@property (assign,nonatomic) BOOL allowDuplicates; 
@property (assign,nonatomic) BOOL skipDiskSpaceCheck; 
@property (assign,nonatomic) BOOL deleteAfterImport; 
@property (assign,nonatomic) unsigned char fileOperation; 
@property (nonatomic,retain) NSSortDescriptor * sortDescriptor;                   //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
@property (assign,nonatomic) unsigned char metadataAddMode; 
@property (nonatomic,retain) NSMutableDictionary * userIptcMetadata;              //@synthesize userIptcMetadata=_userIptcMetadata - In the implementation block
-(id)init;
-(PHPhotoLibrary *)library;
-(void)setLibrary:(PHPhotoLibrary *)arg1 ;
-(PHImportSource *)importSource;
-(BOOL)preserveFolderStructure;
-(BOOL)hideProgress;
-(void)setHideProgress:(BOOL)arg1 ;
-(void)setPreserveFolderStructure:(BOOL)arg1 ;
-(BOOL)skipAlertWhenFinished;
-(void)setSkipAlertWhenFinished:(BOOL)arg1 ;
-(unsigned char)fileOperation;
-(void)setFileOperation:(unsigned char)arg1 ;
-(BOOL)shouldImportAsReferenced;
-(void)setShouldImportAsReferenced:(BOOL)arg1 ;
-(BOOL)allowDuplicates;
-(void)setAllowDuplicates:(BOOL)arg1 ;
-(BOOL)skipDiskSpaceCheck;
-(void)setSkipDiskSpaceCheck:(BOOL)arg1 ;
-(BOOL)deleteAfterImport;
-(void)setDeleteAfterImport:(BOOL)arg1 ;
-(unsigned char)metadataAddMode;
-(void)setMetadataAddMode:(unsigned char)arg1 ;
-(BOOL)omitImportComplete;
-(void)setOmitImportComplete:(BOOL)arg1 ;
-(BOOL)allowUnsupported;
-(void)setAllowUnsupported:(BOOL)arg1 ;
-(PHAssetCollection *)destinationAlbum;
-(void)setDestinationAlbum:(PHAssetCollection *)arg1 ;
-(PHCollectionList *)destinationFolder;
-(void)setDestinationFolder:(PHCollectionList *)arg1 ;
-(NSMutableDictionary *)userIptcMetadata;
-(void)setUserIptcMetadata:(NSMutableDictionary *)arg1 ;
-(void)setImportSource:(PHImportSource *)arg1 ;
-(NSSortDescriptor *)sortDescriptor;
-(void)setSortDescriptor:(NSSortDescriptor *)arg1 ;
-(void)setImportedBy:(short)arg1 ;
-(short)importedBy;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
@end

