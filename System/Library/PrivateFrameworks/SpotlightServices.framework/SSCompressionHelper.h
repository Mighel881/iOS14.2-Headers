/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSCompressionHelper : NSObject
+(id)sharedInstance;
-(int)unpackageTarForFd:(int)arg1 size:(unsigned long long)arg2 parentDir:(const char*)arg3 ;
-(char*)getDataOutWithSize:(unsigned long long)arg1 withFlag:(unsigned long long)arg2 fd:(int*)arg3 ;
-(void)uncompressedContentsForCompressedFile:(id)arg1 outPath:(id)arg2 ;
-(int)unTarFileWithFd:(id)arg1 toPath:(id)arg2 ;
@end

