/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PISemanticEnhanceAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) double intensity; 
@property (nonatomic,readonly) long long scene; 
@property (nonatomic,readonly) double sceneConfidence; 
@property (nonatomic,copy,readonly) NSArray * boundingBoxes; 
+(id)intensityKey;
+(id)faceBoundingBoxesKey;
+(id)boundingBoxesKey;
+(id)sceneConfidenceKey;
+(id)sceneLabelKey;
+(id)genericLandscapeSceneLabel;
+(id)sunriseSunsetSceneLabel;
+(id)platedFoodSceneLabel;
-(void)setScene:(long long)arg1 confidence:(double)arg2 ;
-(void)setFaceBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2 ;
-(void)setBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(long long)scene;
-(NSArray *)boundingBoxes;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(double)sceneConfidence;
@end
