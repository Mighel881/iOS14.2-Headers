/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBicubicScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;
	NSNumber* inputB;
	NSNumber* inputC;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
@property (nonatomic,retain) NSNumber * inputB; 
@property (nonatomic,retain) NSNumber * inputC; 
+(id)customAttributes;
-(NSNumber *)inputScale;
-(NSNumber *)inputB;
-(NSNumber *)inputC;
-(id)outputImage;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(vec2)_scale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputAspectRatio;
-(void)setInputB:(NSNumber *)arg1 ;
-(void)setInputC:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
@end
