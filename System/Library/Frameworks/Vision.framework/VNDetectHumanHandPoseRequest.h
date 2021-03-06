/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSArray;

@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property (assign) unsigned long long maximumHandCount; 
@property (copy,readonly) NSArray * results; 
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)supportedRecognizedPointKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedIdentifiedPointKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedRecognizedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedIdentifiedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(Class)configurationClass;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maximumHandCount;
-(void)setMaximumHandCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortedResults:(id)arg1 ;
@end

