/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIEdgeFeedbackGenerator.h>

@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator {

	double _minimumZoomScale;
	double _maximumZoomScale;
	double _minimumTemporaryZoomScale;
	double _maximumTemporaryZoomScale;

}

@property (assign,nonatomic) double minimumZoomScale;                       //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                       //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double minimumTemporaryZoomScale;              //@synthesize minimumTemporaryZoomScale=_minimumTemporaryZoomScale - In the implementation block
@property (assign,nonatomic) double maximumTemporaryZoomScale;              //@synthesize maximumTemporaryZoomScale=_maximumTemporaryZoomScale - In the implementation block
-(void)_updateMaximumValue;
-(void)setMinimumTemporaryZoomScale:(double)arg1 ;
-(id)init;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(double)minimumZoomScale;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)minimumTemporaryZoomScale;
-(double)maximumTemporaryZoomScale;
-(double)maximumZoomScale;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2 ;
-(void)setMaximumTemporaryZoomScale:(double)arg1 ;
-(void)zoomScaleUpdated:(double)arg1 ;
@end

