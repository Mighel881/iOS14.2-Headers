/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet {

	short _audioClassification;
	float _blurrinessScore;
	float _exposureScore;
	float _autoplaySuggestionScore;
	float _videoScore;
	float _activityScore;
	NSDate* _mediaAnalysisTimeStamp;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceCount;
	SCD_Struct_PH9 _bestKeyFrameTime;
	CGRect _bestPlaybackRect;
	SCD_Struct_PH12 _bestVideoTimeRange;

}

@property (nonatomic,readonly) SCD_Struct_PH9 bestKeyFrameTime;                      //@synthesize bestKeyFrameTime=_bestKeyFrameTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH12 bestVideoTimeRange;                   //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (nonatomic,readonly) CGRect bestPlaybackRect;                              //@synthesize bestPlaybackRect=_bestPlaybackRect - In the implementation block
@property (nonatomic,readonly) NSDate * mediaAnalysisTimeStamp;                      //@synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaAnalysisVersion;              //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (nonatomic,readonly) float blurrinessScore;                                //@synthesize blurrinessScore=_blurrinessScore - In the implementation block
@property (nonatomic,readonly) float exposureScore;                                  //@synthesize exposureScore=_exposureScore - In the implementation block
@property (nonatomic,readonly) float autoplaySuggestionScore;                        //@synthesize autoplaySuggestionScore=_autoplaySuggestionScore - In the implementation block
@property (nonatomic,readonly) float videoScore;                                     //@synthesize videoScore=_videoScore - In the implementation block
@property (nonatomic,readonly) float activityScore;                                  //@synthesize activityScore=_activityScore - In the implementation block
@property (nonatomic,readonly) unsigned long long faceCount;                         //@synthesize faceCount=_faceCount - In the implementation block
@property (nonatomic,readonly) short audioClassification;                            //@synthesize audioClassification=_audioClassification - In the implementation block
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)additionalPropertiesToFetchOnPrimaryObject;
-(unsigned long long)faceCount;
-(float)videoScore;
-(short)audioClassification;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(float)activityScore;
-(CGRect)bestPlaybackRect;
-(float)autoplaySuggestionScore;
-(SCD_Struct_PH12)bestVideoTimeRange;
-(float)exposureScore;
-(float)blurrinessScore;
-(void)initWithDefaultValues;
-(SCD_Struct_PH9)bestKeyFrameTime;
-(unsigned long long)mediaAnalysisVersion;
-(NSDate *)mediaAnalysisTimeStamp;
@end

