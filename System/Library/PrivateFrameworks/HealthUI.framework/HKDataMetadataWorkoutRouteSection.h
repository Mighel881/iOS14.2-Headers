/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKDataMetadataSection.h>

@class HKDataMetadataWorkoutRouteCell, HKLocationReadings, HKLocationFetcher, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection {

	HKDataMetadataWorkoutRouteCell* _cell;
	HKLocationReadings* _locationReadings;
	HKLocationFetcher* _locationFetcher;
	HKRouteMapGenerator* _generator;

}

@property (nonatomic,retain) HKDataMetadataWorkoutRouteCell * cell;                //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) HKLocationReadings * locationReadings;              //@synthesize locationReadings=_locationReadings - In the implementation block
@property (nonatomic,retain) HKLocationFetcher * locationFetcher;                  //@synthesize locationFetcher=_locationFetcher - In the implementation block
@property (nonatomic,retain) HKRouteMapGenerator * generator;                      //@synthesize generator=_generator - In the implementation block
-(HKDataMetadataWorkoutRouteCell *)cell;
-(HKRouteMapGenerator *)generator;
-(void)setCell:(HKDataMetadataWorkoutRouteCell *)arg1 ;
-(void)setGenerator:(HKRouteMapGenerator *)arg1 ;
-(id)sectionTitle;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)generateRouteImage;
-(id)initWithLocationReadings:(id)arg1 ;
-(HKLocationReadings *)locationReadings;
-(HKLocationFetcher *)locationFetcher;
-(void)setLocationFetcher:(HKLocationFetcher *)arg1 ;
@end

