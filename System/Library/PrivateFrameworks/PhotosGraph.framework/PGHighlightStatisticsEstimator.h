/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGManager, NSDictionary, NSString;

@interface PGHighlightStatisticsEstimator : NSObject {

	PGManager* _manager;
	NSDictionary* _highlightEstimatesDictionary;

}

@property (retain) PGManager * manager;                                                  //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDictionary * highlightEstimatesDictionary;              //@synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * highlightEstimatesDescription; 
-(void)setManager:(PGManager *)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(NSDictionary *)highlightEstimatesDictionary;
-(PGManager *)manager;
-(NSString *)highlightEstimatesDescription;
-(id)_createHighlightEstimatesDictionary;
-(BOOL)_isUtilityAsset:(id)arg1 ;
-(unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1 ;
-(id)_collectDetailsForTripsAndWeekends:(id)arg1 ;
-(id)_collectDetailsForAggregations:(id)arg1 ;
-(id)_highlightEstimatesDescriptionWithData:(id)arg1 ;
-(id)_stringDescriptionForTripWeekendDetails:(id)arg1 ;
-(id)_stringDescriptionForHomeWorkAggregations:(id)arg1 ;
-(id)_stringDescriptionForMomentsDetails:(id)arg1 ;
@end

