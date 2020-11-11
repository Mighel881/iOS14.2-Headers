/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUStorageFactory.h>

@class NUPurgeableStoragePool, NSString;

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory> {

	Class _storageClass;
	NUPurgeableStoragePool* _storagePool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)initWithStorageClass:(Class)arg1 ;
-(id)newStorageWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(void)returnStorage:(id)arg1 ;
-(id)initWithStoragePool:(id)arg1 ;
-(id)initWithStorageClass:(Class)arg1 storagePool:(id)arg2 ;
@end
