/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolygonGroup, MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolygonGroup* _vectorData;
	double _strokeStart;
	double _strokeEnd;

}

@property (nonatomic,readonly) MKPolygon * polygon; 
@property (assign,nonatomic) double strokeStart; 
@property (assign,nonatomic) double strokeEnd; 
+(Class)_mapkitLeafClass;
-(void)setFillColor:(id)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)strokeEnd;
-(MKPolygon *)polygon;
-(void)setStrokeStart:(double)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_performInitialConfiguration;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(id)initWithPolygon:(id)arg1 ;
-(void)_updateRenderColors;
-(void)setStrokeColor:(id)arg1 ;
-(id)_vectorGeometry;
-(void)setMiterLimit:(double)arg1 ;
-(void)createPath;
-(double)strokeStart;
-(void)setStrokeEnd:(double)arg1 ;
-(BOOL)_canProvideVectorGeometry;
@end
