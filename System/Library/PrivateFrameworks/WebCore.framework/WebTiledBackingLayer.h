/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(void)setNeedsDisplay;
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(double)contentsScale;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)isOpaque;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)drawsAsynchronously;
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(TiledBacking*)tiledBacking;
-(void)setWantsDeepColorBackingStore:(BOOL)arg1 ;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg1 ;
-(BOOL)wantsDeepColorBackingStore;
-(BOOL)supportsSubpixelAntialiasedText;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

