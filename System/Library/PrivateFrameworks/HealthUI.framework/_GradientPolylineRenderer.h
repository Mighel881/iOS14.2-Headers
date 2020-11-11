/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {

	HKRouteMapGenerator* _generator;

}
-(void)drawMapRect:(SCD_Struct_Gr17)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(CGPoint)_originMapPoint;
-(BOOL)canDrawMapRect:(SCD_Struct_Gr17)arg1 zoomScale:(double)arg2 ;
-(id)initWithOverlay:(id)arg1 locationReadings:(id)arg2 ;
@end
