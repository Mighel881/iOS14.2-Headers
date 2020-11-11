/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSRTFD : NSMutableDictionary {

	NSMutableDictionary* dict;

}
+(void)initialize;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 markBusy:(BOOL)arg5 hardLinkPath:(id)arg6 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)addFile:(id)arg1 ;
-(id)addLink:(id)arg1 ;
-(BOOL)_isLink:(id)arg1 ;
-(unsigned long long)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(unsigned long long)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4 ;
-(id)init;
-(id)dataRepresentation;
-(unsigned long long)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 ;
-(unsigned long long)saveToDocument:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 ;
-(BOOL)isPackage;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithPasteboardDataRepresentation:(id)arg1 ;
-(unsigned long long)count;
-(id)uniqueKey:(id)arg1 ;
-(id)copy:(id)arg1 into:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)dataForFile:(id)arg1 ;
-(id)getDirInfo:(BOOL)arg1 ;
-(unsigned long long)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(NSZone*)arg4 plist:(id)arg5 ;
-(id)removeFile:(id)arg1 ;
-(id)setPackage:(BOOL)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)initUnixFile:(id)arg1 ;
-(id)addData:(id)arg1 name:(id)arg2 ;
-(id)keyEnumerator;
-(id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(NSZone*)arg4 ;
-(id)initFromElement:(id)arg1 ofDocument:(id)arg2 ;
-(id)tmpNameFromPath:(id)arg1 extension:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)addFileNamed:(id)arg1 fileAttributes:(id)arg2 ;
-(id)pasteboardDataRepresentation;
-(unsigned long long)addDirNamed:(id)arg1 lazy:(BOOL)arg2 ;
-(id)replaceFile:(id)arg1 path:(id)arg2 ;
-(id)replaceFile:(id)arg1 data:(id)arg2 ;
-(id)serialize:(void*)arg1 length:(unsigned long long*)arg2 ;
-(id)getDocument:(id)arg1 docInfo:(id)arg2 ;
-(long long)validatePath:(id)arg1 ignore:(id)arg2 ;
-(id)createRandomKey:(id)arg1 ;
-(id)createUniqueKey:(id)arg1 ;
-(id)tmpNameFromPath:(id)arg1 ;
-(unsigned long long)realAddDirNamed:(id)arg1 ;
-(id)nameFromPath:(id)arg1 extra:(id)arg2 ;
-(id)initFromSerialized:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)freeSerialized:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_getDocInfoForKey:(id)arg1 ;
-(id)initFromDocument:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)copy;
-(void)dealloc;
@end
