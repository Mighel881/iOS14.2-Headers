/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface MiroCircularProgressLayer : CALayer {

	float _progress;
	UIColor* _progressColor;
	double _circleLineWidth;
	double _arcLineWidth;
	double _animationDuration;

}

@property (assign,nonatomic) float progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;               //@synthesize progressColor=_progressColor - In the implementation block
@property (assign,nonatomic) double circleLineWidth;                //@synthesize circleLineWidth=_circleLineWidth - In the implementation block
@property (assign,nonatomic) double arcLineWidth;                   //@synthesize arcLineWidth=_arcLineWidth - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(float)progress;
-(id)initWithLayer:(id)arg1 ;
-(UIColor *)progressColor;
-(void)setProgress:(float)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(double)circleLineWidth;
-(void)setCircleLineWidth:(double)arg1 ;
-(double)arcLineWidth;
-(void)setArcLineWidth:(double)arg1 ;
@end
