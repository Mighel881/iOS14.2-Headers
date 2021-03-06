/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SKPhysicsContactDelegate;
@interface SKPhysicsWorld : NSObject <NSSecureCoding> {

	double speed;
	id<SKPhysicsContactDelegate> _contactDelegate;
	CGVector _gravity;

}

@property (assign,nonatomic) CGVector gravity;                                          //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) id<SKPhysicsContactDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(CGVector)gravity;
-(double)speed;
-(void)addBody:(id)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(void)removeJoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)fields;
-(void)addJoint:(id)arg1 ;
-(id)bodies;
-(id<SKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<SKPhysicsContactDelegate>)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(void)setGravity:(CGVector)arg1 ;
-(void)removeAllJoints;
-(void)removeAllBodies;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(3)sampleFields:;
-(3)sampleFieldsAt:;
@end

