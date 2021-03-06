/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDFPageLayerInterface <NSObject>
@required
-(BOOL)isVisible;
-(id)page;
-(void)clearTiles;
-(long long)displayBox;
-(void)setEnableTileUpdates:(BOOL)arg1;
-(id)renderingProperties;
-(void)setNeedsTilesUpdate;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
-(id)geometryInterface;
-(unsigned long long)visibilityDelegateIndex;
-(void)updatePageLayerEffectForID:(id)arg1;
-(id)pageLayerEffectForID:(id)arg1;
-(CGAffineTransform*)layerEffectTransform;
-(void)updatePageLayerEffects;
-(void)forceTileUpdate;
-(void)addPageLayerEffect:(id)arg1;
-(void)removePageLayerEffectForID:(id)arg1;
-(void)scalePageLayerEffects:(double)arg1;
-(BOOL)enablesTileUpdates;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1;
-(void)willStartLiveResize;
-(void)willEndStartLiveResize;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1;

@end

