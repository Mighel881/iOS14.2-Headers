/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLTaggedPointerDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : PLResourceDataStoreKey <PLTaggedPointerDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(unsigned)strategyFromExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)keyData;
-(BOOL)isEqual:(id)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)_init;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)_initWithKeyStruct:(const void*)arg1 ;
-(id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)uniformTypeIdentifier;
@end
