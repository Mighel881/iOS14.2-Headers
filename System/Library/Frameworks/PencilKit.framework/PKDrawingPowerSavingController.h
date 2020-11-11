/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PencilKit/PencilKit-Structs.h>
@interface PKDrawingPowerSavingController : NSObject {

	vector<double, std::__1::allocator<double> >* _movementDistanceHistoryBuffer;
	CGPoint _previousDrawingLocation;
	double _currentMovement;
	double _accumulatedMovement;
	double _previousRenderTimestamp;
	BOOL _valid;
	double _minimumMovementDistancePencil;
	double _minimumMovementDistanceFinger;
	double _minimumMovementDistanceTimeout;
	BOOL _isDrawingWithPencil;
	BOOL _isDrawingWithMarkerOrEraser;

}

@property (assign,nonatomic) BOOL isDrawingWithPencil;                      //@synthesize isDrawingWithPencil=_isDrawingWithPencil - In the implementation block
@property (assign,nonatomic) BOOL isDrawingWithMarkerOrEraser;              //@synthesize isDrawingWithMarkerOrEraser=_isDrawingWithMarkerOrEraser - In the implementation block
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(void)accumulateMovementForCurrentFrame;
-(BOOL)shouldSkipFrameWithFrameStartTimestamp:(double)arg1 framesAfterStart:(unsigned long long)arg2 ;
-(void)registerFrameStartTimestamp:(double)arg1 ;
-(void)setIsDrawingWithPencil:(BOOL)arg1 ;
-(void)setIsDrawingWithMarkerOrEraser:(BOOL)arg1 ;
-(void)drawingBeganAtLocation:(CGPoint)arg1 ;
-(void)drawingMovedToLocation:(CGPoint)arg1 ;
-(BOOL)isDrawingWithPencil;
-(BOOL)isDrawingWithMarkerOrEraser;
-(double)averageMovementDistance;
@end
