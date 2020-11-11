/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _region;
	long long _year;

}

@property (assign,nonatomic) NSString * region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) long long year;                 //@synthesize year=_year - In the implementation block
-(long long)year;
-(void)setYear:(long long)arg1 ;
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoriesWithRegionNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end
