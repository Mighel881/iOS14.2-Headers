/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, CIVector;

@interface CIColorCurves : CIFilter {

	CIImage* inputImage;
	NSData* inputCurvesData;
	CIVector* inputCurvesDomain;
	id inputColorSpace;
	CIImage* _curvesImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSData * inputCurvesData; 
@property (nonatomic,retain) CIVector * inputCurvesDomain; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(BOOL)_checkInputs;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(id)curvesImage;
-(void)setInputCurvesData:(NSData *)arg1 ;
-(CIVector *)inputCurvesDomain;
-(void)setInputCurvesDomain:(CIVector *)arg1 ;
-(NSData *)inputCurvesData;
-(id)_kernel;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)dealloc;
@end

