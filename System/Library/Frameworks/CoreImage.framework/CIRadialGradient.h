/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputRadius0;
	NSNumber* inputRadius1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius0; 
@property (nonatomic,retain) NSNumber * inputRadius1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
-(id)_kernel;
-(id)outputImage;
-(void)setInputRadius1:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius0;
-(NSNumber *)inputRadius1;
-(void)setInputRadius0:(NSNumber *)arg1 ;
@end

