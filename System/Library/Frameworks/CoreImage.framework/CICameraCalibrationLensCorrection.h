/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, AVCameraCalibrationData, NSNumber;

@interface CICameraCalibrationLensCorrection : CIFilter {

	CIImage* inputImage;
	AVCameraCalibrationData* inputAVCameraCalibrationData;
	NSNumber* inputUseInverseLookUpTable;

}
+(id)customAttributes;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CGPoint)ReferenceensDistortionPointForPoint:(CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(CGPoint)arg3 imageSize:(CGSize)arg4 ;
-(id)outputImage;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
@end
