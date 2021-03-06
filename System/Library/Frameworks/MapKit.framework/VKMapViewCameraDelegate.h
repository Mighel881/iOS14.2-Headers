/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VKMapViewCameraDelegate <NSObject>
@optional
-(void)mapLayerNavigationCameraHasStoppedPanning;
-(void)mapLayerNavigationCameraDidLeaveDefaultZoom;
-(void)mapLayerWillAnimateToLocation:(CGSize)arg1;
-(void)mapLayerCanEnter3DModeDidChange:(BOOL)arg1;
-(void)mapLayerDidBecomePitched:(BOOL)arg1;
-(void)mapLayerNavigationCameraHasStartedPanning;
-(void)mapLayerCanZoomOutDidChange:(BOOL)arg1;
-(void)mapLayerWasUnableToAnimate;
-(void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
-(void)mapLayerCanZoomInDidChange:(BOOL)arg1;
-(void)mapLayerWillChangeRegionAnimated:(BOOL)arg1;
-(id)mapLayerPresentationForAnnotation:(id)arg1;
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerNavigationCameraDidReturnToDefaultZoom;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerDidFinishInitialTrackingAnimation;

@end

