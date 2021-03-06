/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _UIDirectionalRotationLayer : CALayer {

	CATransform3D _previousTransform;
	BOOL _counterTransformLayer;
	BOOL _inverseTransformLayer;

}

@property (assign,getter=isCounterTransformLayer,nonatomic) BOOL counterTransformLayer;              //@synthesize counterTransformLayer=_counterTransformLayer - In the implementation block
@property (assign,getter=isInverseTransformLayer,nonatomic) BOOL inverseTransformLayer;              //@synthesize inverseTransformLayer=_inverseTransformLayer - In the implementation block
-(void)setCounterTransformLayer:(BOOL)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(void)setInverseTransformLayer:(BOOL)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isCounterTransformLayer;
-(BOOL)isInverseTransformLayer;
@end

