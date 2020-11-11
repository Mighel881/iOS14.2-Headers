/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSIndexSet, NSArray;


@protocol PXGTextureAtlasManager <NSObject>
@property (assign,nonatomic,__weak) id<PXGTextureConverter> textureConverter; 
@property (assign,nonatomic,__weak) id<PXGTextureAtlasManagerDelegate> delegate; 
@property (nonatomic,readonly) CGSize thumbnailSize; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,retain) NSIndexSet * skipRenderSpriteIndexes; 
@property (nonatomic,copy,readonly) NSArray * textures; 
@required
-(NSArray *)textures;
-(CGSize)thumbnailSize;
-(id<PXGTextureAtlasManagerDelegate>)delegate;
-(unsigned long long)pixelFormat;
-(void)removeSpriteIndex:(unsigned)arg1 atThumbnailIndex:(unsigned)arg2;
-(void)applyChangeDetails:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)processPendingThumbnailRequestIDsWithHandler:(/*^block*/id)arg1;
-(NSIndexSet *)skipRenderSpriteIndexes;
-(void)setTextureConverter:(id)arg1;
-(id<PXGTextureConverter>)textureConverter;
-(void)pruneUnusedTextures;
-(unsigned)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(CGRect)arg4;
-(void)setSkipRenderSpriteIndexes:(id)arg1;

@end
