/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNRecognizeObjectsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign) unsigned long long imageCropAndScaleOption; 
@property (assign) BOOL useImageAnalyzerScaling; 
@property (assign) float modelMinimumDetectionConfidence; 
@property (assign) float modelNonMaximumSuppressionThreshold; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)useImageAnalyzerScaling;
-(void)setUseImageAnalyzerScaling:(BOOL)arg1 ;
-(float)modelMinimumDetectionConfidence;
-(void)setModelMinimumDetectionConfidence:(float)arg1 ;
-(float)modelNonMaximumSuppressionThreshold;
-(void)setModelNonMaximumSuppressionThreshold:(float)arg1 ;
-(id)_applicableDetectorAndGetConfigurationOptions:(id*)arg1 loadedInSession:(id)arg2 error:(id*)arg3 ;
-(id)_recognizedObjectsIdentifiersAndReturnError:(id*)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
@end
