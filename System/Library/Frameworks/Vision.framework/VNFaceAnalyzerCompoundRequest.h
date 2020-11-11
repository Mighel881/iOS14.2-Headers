/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNHomologousObservationClassCompoundRequest.h>

@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
+(Class)configurationClass;
-(long long)dependencyProcessingOrdinality;
-(unsigned long long)detectionLevel;
-(id)initWithDetectorType:(id)arg1 configuration:(id)arg2 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputfacesThatNeedAttributes:(id)arg3 isFaceprintRequest:(BOOL)arg4 isAttributeRequest:(BOOL)arg5 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end
