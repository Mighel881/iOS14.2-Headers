/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRendererPreFiltering : CIFilter {

	CIImage* inputImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputApertureScaling;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (copy) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputScale; 
-(NSNumber *)inputScale;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(id)_kernel:(BOOL)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage:(id)arg1 horizontal:(BOOL)arg2 width:(double)arg3 ;
-(void)dumpImage:(id)arg1 extent:(CGRect)arg2 prefixFilename:(id)arg3 ;
@end

