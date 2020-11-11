/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MBFileManager : NSObject
+(id)defaultManager;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(BOOL)copyPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)movePath:(id)arg1 toPath:(id)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
@end
