/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface PUTilingLayoutInvalidationContext : NSObject {

	NSMutableSet* _invalidatedTileKinds;
	BOOL _invalidatedAllTiles;
	BOOL _invalidatedContentBounds;
	BOOL _invalidatedAnyTile;
	NSMutableDictionary* __invalidatedIndexPathsByTileKind;

}

@property (nonatomic,readonly) NSMutableDictionary * _invalidatedIndexPathsByTileKind;              //@synthesize _invalidatedIndexPathsByTileKind=__invalidatedIndexPathsByTileKind - In the implementation block
@property (assign,nonatomic) BOOL invalidatedAllTiles;                                              //@synthesize invalidatedAllTiles=_invalidatedAllTiles - In the implementation block
@property (assign,nonatomic) BOOL invalidatedAnyTile;                                               //@synthesize invalidatedAnyTile=_invalidatedAnyTile - In the implementation block
@property (nonatomic,readonly) NSSet * invalidatedTileKinds;                                        //@synthesize invalidatedTileKinds=_invalidatedTileKinds - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedContentBounds;                                       //@synthesize invalidatedContentBounds=_invalidatedContentBounds - In the implementation block
-(id)init;
-(void)invalidateTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(void)enumerateInvalidatedTilesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)invalidatedTileKinds;
-(NSMutableDictionary *)_invalidatedIndexPathsByTileKind;
-(void)invalidateAllTiles;
-(void)setInvalidatedAnyTile:(BOOL)arg1 ;
-(void)invalidateContentBounds;
-(void)invalidateAllTilesWithKind:(id)arg1 ;
-(void)setInvalidatedAllTiles:(BOOL)arg1 ;
-(BOOL)invalidatedAnyTile;
-(BOOL)invalidatedAllTiles;
-(BOOL)invalidatedContentBounds;
@end

