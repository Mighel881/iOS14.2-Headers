/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {

	VNObservation* _observation;
	SCD_Struct_NU7 _imageSize;

}

@property (readonly) NUClassifyPipelineImageCorrectionRequest * classifyPipelineImageCorrectionRequest; 
-(id)cacheKey;
-(void)cleanUp;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)render:(out id*)arg1 ;
-(id)result;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithClassifyPipelineImageCorrectionRequest:(id)arg1 ;
-(NUClassifyPipelineImageCorrectionRequest *)classifyPipelineImageCorrectionRequest;
-(id)detectClassifyPipelineImageCorrectionInBuffer:(CVBufferRef)arg1 error:(out id*)arg2 ;
@end
