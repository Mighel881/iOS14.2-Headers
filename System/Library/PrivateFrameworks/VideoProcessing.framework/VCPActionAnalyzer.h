/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, VCPSegment;

@interface VCPActionAnalyzer : NSObject {

	NSMutableArray* _internalResults;
	VCPSegment* _activeSegment;
	HinkleyDetector* _activeHinkleyDetector;
	float _activeThreshold;
	BOOL _firstFrame;
	BOOL _verbose;
	int _postProcessStart;

}
-(id)init;
-(id)segments;
-(BOOL)isActive:(float)arg1 ;
-(BOOL)isScoreValid:(float)arg1 ;
-(BOOL)decideSegmentPointUsingHinkleyDetector:(float)arg1 ;
-(void)updateActiveThreshold;
-(int)mergeSameTypeSegments;
-(void)printSegments:(id)arg1 ;
-(int)prepareTrimmingWithTrimStart:(SCD_Struct_VC6)arg1 andTrimEnd:(SCD_Struct_VC6)arg2 ;
-(int)mergeConsecutiveShortSegments;
-(int)mergeSparseShortSegments;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC7)arg1 andActionScore:(float)arg2 ;
-(id)activeSegment;
-(BOOL)decideSegmentPointBasedOnActionScore:(float)arg1 ;
-(int)finalizeWithDestructiveTrimStart:(SCD_Struct_VC6)arg1 trimEnd:(SCD_Struct_VC6)arg2 ;
-(int)postProcessSegmentsWithCaptureTime:(SCD_Struct_VC6)arg1 trimStart:(SCD_Struct_VC6)arg2 ;
-(void)dealloc;
@end

