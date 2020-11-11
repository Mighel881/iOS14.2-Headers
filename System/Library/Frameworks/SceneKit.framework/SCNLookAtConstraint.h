/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint {

	SCNNode* _target;
	BOOL _gimbalLockEnabled;
	SCNVector3 _targetOffset;
	SCNVector3 _upVector;
	SCNVector3 _localFront;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) SCNVector3 targetOffset; 
@property (assign,nonatomic) SCNVector3 localFront; 
@property (assign,nonatomic) SCNVector3 worldUp; 
@property (assign,nonatomic) BOOL gimbalLockEnabled; 
+(BOOL)supportsSecureCoding;
+(id)lookAtConstraintWithTarget:(id)arg1 ;
-(SCNNode *)target;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNVector3)upVector;
-(id)initWithCoder:(id)arg1 ;
-(SCNVector3)worldUp;
-(SCNVector3)targetOffset;
-(void)setTargetOffset:(SCNVector3)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setWorldUp:(SCNVector3)arg1 ;
-(SCNVector3)localFront;
-(void)setLocalFront:(SCNVector3)arg1 ;
-(void)setUpVector:(SCNVector3)arg1 ;
-(BOOL)gimbalLockEnabled;
-(void)setGimbalLockEnabled:(BOOL)arg1 ;
-(void)_customEncodingOfSCNLookAtConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNLookAtConstraint:(id)arg1 ;
@end
