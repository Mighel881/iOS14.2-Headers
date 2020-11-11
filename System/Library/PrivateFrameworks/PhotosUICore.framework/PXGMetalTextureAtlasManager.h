/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGMetalTextureAtlasDelegate.h>
#import <libobjc.A.dylib/PXGTextureAtlasManager.h>

@protocol MTLDevice, OS_dispatch_queue, PXGTextureAtlasManagerDelegate, PXGTextureConverter;
@class NSIndexSet, NSArray, NSObject, PXGColorProgram, NSString;

@interface PXGMetalTextureAtlasManager : NSObject <PXGMetalTextureAtlasDelegate, PXGTextureAtlasManager> {

	id<MTLDevice> _device;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	unsigned _capacityPerAtlas;
	unsigned long long _pixelFormat;
	NSIndexSet* _skipRenderSpriteIndexes;
	id<PXGTextureAtlasManagerDelegate> _delegate;
	id<PXGTextureConverter> _textureConverter;
	PXGColorProgram* _colorProgram;
	NSArray* _atlasTextures;
	CGSize _thumbnailSize;

}

@property (copy) NSArray * atlasTextures;                                                     //@synthesize atlasTextures=_atlasTextures - In the implementation block
@property (nonatomic,readonly) PXGColorProgram * colorProgram;                                //@synthesize colorProgram=_colorProgram - In the implementation block
@property (nonatomic,readonly) unsigned capacityPerAtlas;                                     //@synthesize capacityPerAtlas=_capacityPerAtlas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXGTextureConverter> textureConverter;                 //@synthesize textureConverter=_textureConverter - In the implementation block
@property (assign,nonatomic,__weak) id<PXGTextureAtlasManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize thumbnailSize;                                          //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;                                //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,retain) NSIndexSet * skipRenderSpriteIndexes;                            //@synthesize skipRenderSpriteIndexes=_skipRenderSpriteIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textures; 
-(PXGColorProgram *)colorProgram;
-(NSArray *)textures;
-(CGSize)thumbnailSize;
-(void)_updateAtlasSpriteIndexSkips;
-(id)init;
-(id<PXGTextureAtlasManagerDelegate>)delegate;
-(unsigned long long)pixelFormat;
-(id)initWithThumbnailSize:(CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacityPerAtlas:(unsigned)arg3 requestQueue:(id)arg4 colorProgram:(id)arg5 device:(id)arg6 ;
-(void)setAtlasTextures:(NSArray *)arg1 ;
-(void)textureAtlasDidBecomeUnused:(id)arg1 ;
-(void)removeSpriteIndex:(unsigned)arg1 atThumbnailIndex:(unsigned)arg2 ;
-(void)applyChangeDetails:(id)arg1 ;
-(void)setDelegate:(id<PXGTextureAtlasManagerDelegate>)arg1 ;
-(NSString *)description;
-(void)processPendingThumbnailRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(NSIndexSet *)skipRenderSpriteIndexes;
-(void)setTextureConverter:(id<PXGTextureConverter>)arg1 ;
-(id<PXGTextureConverter>)textureConverter;
-(void)pruneUnusedTextures;
-(void)_getAtlas:(id*)arg1 localThumbnailIndex:(unsigned*)arg2 forGlobalThumbnailIndex:(unsigned)arg3 ;
-(NSArray *)atlasTextures;
-(unsigned)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(CGRect)arg4 ;
-(void)_requestQueue_getNextAvailableAtlas:(id*)arg1 thumbnailOffset:(unsigned*)arg2 ;
-(void)setSkipRenderSpriteIndexes:(NSIndexSet *)arg1 ;
-(unsigned)capacityPerAtlas;
@end
