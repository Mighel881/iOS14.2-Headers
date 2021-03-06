/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/AVTPhysicsControllerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCNNode, SCNPhysicsWorld, AVTPhysicsController, NSMutableArray, AVTPupilReflectionCorrectionDescriptor, AVTEyeSkinningDescriptor, CAAnimation, SCNAnimationPlayer, NSString;

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying> {

	SCNNode* _avatarNode;
	SCNNode* _skeleton;
	SCNNode* _headNode;
	SCNNode* _leftEye;
	SCNNode* _rightEye;
	SCNNode* _neckNode;
	SCNNode* _neckPivotNode;
	SCD_Struct_AV14* _morphInfoFromARKitBlendShapeIndex;
	SCD_Struct_AV14* _friendlyPoseMorphInfos;
	unsigned long long _friendlyPoseMorphInfoCount;
	int _transitionCount;
	BOOL _arMode;
	BOOL _optimizedForSnapshot;
	SCNPhysicsWorld* _physicsWorld;
	AVTPhysicsController* _physicsController;
	NSMutableArray* _clipsPlaying;
	 _lookAt;
	NSMutableArray* _correctiveMorpherDescriptors;
	NSMutableArray* _physicalizedMorpherDescriptors;
	NSMutableArray* _physicalizedSkeletonDescriptors;
	NSMutableArray* _morpherDrivenMaterialDescriptors;
	AVTPupilReflectionCorrectionDescriptor* _pupilReflectionCorrectionDescriptor;
	AVTEyeSkinningDescriptor* _eyeSkinningDescriptor;
	 _arOffset;
	float _arScale;
	double _physicsScaleFactor;
	double _lastRenderTime;
	CAAnimation* _bakedAnimation;
	SCNAnimationPlayer* _bakedAnimationPlayer_lazy;

}

@property (readonly) SCNNode * avatarNode; 
@property (readonly) SCNNode * headNode; 
@property (readonly) SCNNode * neckNode; 
@property (assign,nonatomic) BOOL arMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned char)classIdentifier;
+(id)avatarWithDataRepresentation:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)preloadAvatar:(id)arg1 ;
+(id)avatarWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)canLoadDataRepresentation:(id)arg1 ;
+({?=})applyGazeCorrectionWithInputAngle:({?=})arg1 ;
+(BOOL)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id*)arg3 ;
+(id)avatarDictionaryFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_blendShapeIndexForMorphInfoTargetIndex:(unsigned long long)arg1 ;
-(id)_blendShapeNameForMorphInfoTargetIndex:(unsigned long long)arg1 ;
-(id)firstPoseOfAnimation:(id)arg1 ;
-(id)pose;
-(BOOL)isTransitioning;
-(void)setPose:(id)arg1 ;
-(id)init;
-(id)dataRepresentation;
-(id)physicsState;
-(void)setPhysicsScaleFactor:(double)arg1 ;
-(void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2 ;
-(void)pauseBakedAnimation;
-(void)transitionFromPose:(id)arg1 duration:(double)arg2 delay:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(void)transitionToPose:(id)arg1 duration:(double)arg2 delay:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)stopTransitionAnimation;
-(BOOL)arMode;
-(void)update;
-(void)lookAt:;
-(float)arScale;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(SCNNode *)headNode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)cameraNode;
-(unsigned long long)usageIntent;
-(id)physicsWorldForPhysicsController:(id)arg1 ;
-(id)avatarNodeForPhysicsController:(id)arg1 ;
-(double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2 ;
-(void)setupPhysicsIfNeeded;
-(void)resetToPhysicsState:(id)arg1 ;
-(SCNNode *)avatarNode;
-(void)willRemoveFromScene:(id)arg1 ;
-(void)setOptimizeForSnapshot:(BOOL)arg1 ;
-(void)didAddToScene:(id)arg1 ;
-(void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2 ;
-(void)_encode:(id)arg1 ;
-(long long)blendShapeIndexForARKitBlendShapeName:(id)arg1 ;
-(SCD_Struct_AV14)morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1 ;
-(void)enumerateMorphInfoForCustomCustomBlendShapeName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)stickerPhysicsStateIdentifier;
-(void)_avatarNodeAndHeadNodeAreNowAvailable;
-(void)resetCustomBehaviours;
-(void)updateBindings;
-(id)initWithDictionaryRepresentation:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithUsageIntent:(unsigned long long)arg1 ;
-(id)lightingNode;
-(void)configureForBestAnimationQuality;
-(SCNNode *)neckNode;
-(void)avatarCommonInit;
-(1)arOffset;
-(void)setupMorphInfo;
-(void)setupEyeOrientationAndReflections;
-(void)setupFaceTracking;
-(void)resetARModeBehaviours;
-(void)_updateShaderModifier:(id)arg1 forARMode:(BOOL)arg2 withOnTopMask:(BOOL)arg3 ;
-(void)lookAt:(double)arg1 ;
-(void)updateBindingsOfNode:(id)arg1 ;
-(id)effectiveMorphedNodeForTargetName:(id)arg1 candidateNode:(id)arg2 ;
-(void)resetMorphingSkinningControllers;
-(void)setupMorphInfoForChangeInSubHierarchy;
-(void)addMorphingSkinningControllersInHierarchy:(id)arg1 ;
-(void)removeMorphingSkinningControllersInHierarchy:(id)arg1 ;
-(void)resetPhysicalizedDescriptors;
-(void)resetCorrectiveDescriptors;
-(void)resetMorpherDrivenMaterials;
-(void)addPhysicalizedDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(BOOL)arg2 ;
-(void)addCorrectiveDescriptorsInHierarchy:(id)arg1 ;
-(void)addMorpherDrivenMaterialsInHierarchy:(id)arg1 ;
-(void)removePhysicalizedDescriptorsInHierarchy:(id)arg1 ;
-(void)removeCorrectiveDescriptorsInHierarchy:(id)arg1 ;
-(void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1 ;
-(BOOL)optimizeForSnapshot;
-(id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(BOOL)usesSkinningForEyeOrientation;
-(void)evaluatePhysicalizedDescriptors;
-(void)applyCorrectiveDescriptors;
-(void)updateEyeOrientationAndReflections;
-(void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2 pointOfView:(id)arg3 ;
-(id)blendShapeNameForARKitBlendShapeIndex:(unsigned long long)arg1 ;
-(id)bakedAnimationPlayer;
-(void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 timingAnimation:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(double)physicsDownforceForNodeNamed:(id)arg1 ;
-(void)physicsSpecializationSettingsDidChange;
-(void)setBakedAnimationReferenceTime:(double)arg1 ;
-(void)resumeBakedAnimation;
-(id)bakedAnimationCopy;
-(void)setArMode:(BOOL)arg1 ;
-(void)rotateHead:(double)arg1 ;
-(1)currentLookAt;
-(void)addCustomBehavioursInHierarchy:(id)arg1 ;
-(void)removeCustomBehavioursInHierarchy:(id)arg1 ;
-(void)disabledBlendshapesSpecializationSettingsDidChange;
-(void)applyBlendShapesWithTrackingInfo:(id)arg1 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg1 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2 ;
-(void)_resetFaceToRandomPosition;
-(id)debugPoseJSONRepresentation;
@end

