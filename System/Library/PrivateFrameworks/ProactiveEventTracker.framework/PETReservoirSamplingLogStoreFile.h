/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <libobjc.A.dylib/PETReservoirSamplingLogStore.h>

@class NSString;

@interface PETReservoirSamplingLogStoreFile : NSObject <PETReservoirSamplingLogStore> {

	NSString* _path;
	void* _ptr;
	unsigned long long _mapLen;
	int _fd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)lock;
-(id)initWithPath:(id)arg1 ;
-(void)unlock;
-(SCD_Struct_PE8*)remap:(unsigned long long*)arg1 ;
-(void)_unmap;
-(unsigned long long)currentLength;
-(SCD_Struct_PE8*)headerMap:(unsigned long long*)arg1 ;
-(BOOL)changeLength:(unsigned long long)arg1 ;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(/*function pointer*/void**)arg2 ;
-(BOOL)attemptToRecreate;
-(void)dealloc;
@end
