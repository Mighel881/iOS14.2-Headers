/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/JDCameraCalibrationData.h>

@class NSData;

@interface JDMutableCameraCalibrationData : JDCameraCalibrationData

@property (assign,nonatomic) SCD_Struct_JD22 intrinsicMatrix; 
@property (assign,nonatomic) CGSize referenceDimensions; 
@property (assign,nonatomic) SCD_Struct_JD23 cameraToPlatformTransform; 
@property (assign,nonatomic) float pixelSize; 
@property (assign,nonatomic) CGPoint lensDistortionCenter; 
@property (assign,nonatomic) int distortionModel; 
@property (nonatomic,retain) NSData * distortedRadii; 
@property (nonatomic,retain) NSData * undistortedRadii; 
@property (assign,nonatomic) const JDGDCPolynomials* distortionPolynomials; 
-(BOOL)scale:(CGSize)arg1 ;
-(void)crop:(CGRect)arg1 ;
-(void)setPixelSize:(float)arg1 ;
-(void)setIntrinsicMatrix:(SCD_Struct_JD22)arg1 ;
-(void)setReferenceDimensions:(CGSize)arg1 ;
-(void)setCameraToPlatformTransform:(SCD_Struct_JD23)arg1 ;
-(void)setLensDistortionCenter:(CGPoint)arg1 ;
-(void)setDistortionModel:(int)arg1 ;
-(void)setDistortedRadii:(NSData *)arg1 ;
-(void)setUndistortedRadii:(NSData *)arg1 ;
-(void)setDistortionPolynomials:(const JDGDCPolynomials*)arg1 ;
-(void)centerCrop:(CGSize)arg1 ;
-(void)setInternalCalib:(id)arg1 ;
@end

