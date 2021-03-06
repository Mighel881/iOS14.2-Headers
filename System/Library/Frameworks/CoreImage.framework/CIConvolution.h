/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface CIConvolution : CIFilter {

	CIImage* inputImage;
	NSArray* inputPoints;
	NSArray* inputWeights;
	NSNumber* inputLinearFilterModeEnabled;

}
-(id)_CIConvolutionAdd_1;
-(id)_CIConvolutionAdd_2;
-(id)_CIConvolutionAdd_3;
-(id)_CIConvolutionAdd_4;
-(id)_CIConvolutionAdd_5;
-(id)_CIConvolutionAdd_6;
-(id)_CIConvolutionAdd_7;
-(id)_CIConvolutionAdd_8;
-(id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3 ;
-(int)samplesPerPass;
-(id)outputImage;
@end

