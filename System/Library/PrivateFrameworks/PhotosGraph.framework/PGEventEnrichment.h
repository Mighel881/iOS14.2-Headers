/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PGEventEnrichment <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL isAggregation; 
@required
-(BOOL)isAggregation;
-(id)birthdayPersonNode;
-(id)sortedMomentNodes;
-(BOOL)isTrip;
-(id)anniversaryPersonNode;
-(id)meaningLabels;
-(id)reliableMeaningLabels;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(id)fetchAssetCollection;
-(id)momentNodes;
-(NSString *)uuid;

@end

