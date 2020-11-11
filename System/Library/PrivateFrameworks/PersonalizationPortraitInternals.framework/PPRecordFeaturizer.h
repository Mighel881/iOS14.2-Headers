/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLModel, NSArray;

@interface PPRecordFeaturizer : NSObject {

	MLModel* _model;
	NSArray* _featureNames;

}
+(id)_flattenArraylikeToFeatures:(id)arg1 featureName:(id)arg2 ;
+(id)_flattenDictionarylikeToFeatures:(id)arg1 featureName:(id)arg2 ;
+(id)featuresForScoreDict:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(id)initWithDomain:(unsigned char)arg1 trialWrapper:(id)arg2 ;
-(id)featurize:(id)arg1 sourceStats:(id)arg2 error:(id*)arg3 ;
@end
