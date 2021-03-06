/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ToneKit/ToneKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {

	double _creationTimestamp;
	double _ringSpeed;
	CGPoint _normalizedRingLocation;

}

@property (nonatomic,readonly) CGPoint normalizedRingLocation;              //@synthesize normalizedRingLocation=_normalizedRingLocation - In the implementation block
@property (nonatomic,readonly) double ringSpeed;                            //@synthesize ringSpeed=_ringSpeed - In the implementation block
-(id)init;
-(void)reset;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(CGPoint)arg2 ringSpeed:(double)arg3 ;
-(CGPoint)normalizedRingLocation;
-(double)ringSpeed;
@end

