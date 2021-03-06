/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@interface MPSImagePyramid : MPSUnaryImageKernel {

	id<MTLBuffer> wtBuffer;
	id<MTLBuffer> wtBufferh;
	float* wtArray;
	unsigned short* wtArrayh;
	unsigned long long _fWidth;
	unsigned long long _fHeight;
	BOOL separable;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize fHeight=_fHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize fWidth=_fWidth - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 centerWeight:(float)arg2 ;
@end

