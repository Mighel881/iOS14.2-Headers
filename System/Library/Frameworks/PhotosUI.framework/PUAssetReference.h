/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXAssetReferenceProtocol.h>

@protocol PUDisplayAsset, PUDisplayAssetCollection;
@class NSIndexPath, NSString;

@interface PUAssetReference : NSObject <NSCopying, PXAssetReferenceProtocol> {

	id<PUDisplayAsset> _asset;
	id<PUDisplayAssetCollection> _assetCollection;
	NSIndexPath* _indexPath;
	NSString* _dataSourceIdentifier;

}

@property (nonatomic,readonly) id<PUDisplayAsset> asset;                                  //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAssetCollection> assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                   //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * dataSourceIdentifier;                           //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath simpleIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUDisplayAsset>)asset;
-(id)init;
-(unsigned long long)hash;
-(PXSimpleIndexPath)simpleIndexPath;
-(NSIndexPath *)indexPath;
-(NSString *)dataSourceIdentifier;
-(NSString *)description;
-(id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PUDisplayAssetCollection>)assetCollection;
@end

