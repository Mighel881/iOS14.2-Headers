/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS21 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
+(id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)_populateCatInfo:(SCD_Struct_NS22*)arg1 forURL:(id)arg2 statInfo:(stat*)arg3 error:(id*)arg4 ;
+(id)attributesWithStat:(stat*)arg1 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)fileGroupOwnerAccountName;
-(BOOL)isDirectory;
-(unsigned long long)count;
-(unsigned long long)filePosixPermissions;
-(id)keyEnumerator;
-(id)fileOwnerAccountName;
-(unsigned long long)fileSystemFileNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)fileSize;
-(id)fileModificationDate;
-(id)fileType;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileOwnerAccountNumber;
-(void)dealloc;
@end

