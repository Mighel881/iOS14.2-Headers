/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSData, NSURL;

@interface NSFileWrapper : NSObject <NSSecureCoding> {

	NSDictionary* _fileAttributes;
	NSString* _preferredFileName;
	NSString* _fileName;
	id _contents;
	id _icon;
	id _moreVars;

}

@property (getter=isDirectory,readonly) BOOL directory; 
@property (getter=isRegularFile,readonly) BOOL regularFile; 
@property (getter=isSymbolicLink,readonly) BOOL symbolicLink; 
@property (copy) NSString * preferredFilename; 
@property (copy) NSString * filename; 
@property (copy) NSDictionary * fileAttributes; 
@property (copy,readonly) NSData * serializedRepresentation; 
@property (copy,readonly) NSDictionary * fileWrappers; 
@property (copy,readonly) NSData * regularFileContents; 
@property (copy,readonly) NSURL * symbolicLinkDestinationURL; 
+(BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6 ;
+(id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)initialize;
+(id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
+(BOOL)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(id)_pathForURL:(id)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)_canSafelyMapFilesAtPath:(id)arg1 ;
+(void)_writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(BOOL)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(BOOL)arg4 didHardLinking:(BOOL*)arg5 error:(id*)arg6 ;
-(id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5 ;
-(id)_newImpl;
-(BOOL)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)init;
-(BOOL)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(BOOL)isDirectory;
-(BOOL)_matchesItemKind:(id)arg1 modificationDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_observePreferredFileNameOfChild:(id)arg1 ;
-(NSDictionary *)fileWrappers;
-(NSData *)serializedRepresentation;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(void)_addParent:(id)arg1 ;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(BOOL)isRegularFile;
-(NSString *)filename;
-(void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSURL *)symbolicLinkDestinationURL;
-(void)_updateDescendantFileNames;
-(void)_resetFileModificationDate;
-(id)_addChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(BOOL)isSymbolicLink;
-(void)setFilename:(NSString *)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(void)_removeParent:(id)arg1 ;
-(NSString *)preferredFilename;
-(id)_fullDescription:(BOOL)arg1 ;
-(NSData *)regularFileContents;
-(void)setPreferredFilename:(NSString *)arg1 ;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_initDirectoryContents;
-(void)removeFileWrapper:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(id)_attributesToWrite;
-(id)_uniqueFileNameOfChild:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)_init;
-(NSDictionary *)fileAttributes;
-(void)dealloc;
@end

