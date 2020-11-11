/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface ICDimensionMaxCache : NSObject {

	NSMutableDictionary* _dimensions;
	NSMutableArray* _sortedDimensions;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSMutableDictionary * dimensions;               //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedDimensions;              //@synthesize sortedDimensions=_sortedDimensions - In the implementation block
@property (nonatomic,readonly) id comparator;                                  //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) unsigned long long count; 
-(NSMutableDictionary *)dimensions;
-(id)comparator;
-(id)init;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(NSMutableArray *)sortedDimensions;
-(unsigned long long)count;
-(double)max;
-(double)dimensionForKey:(id)arg1 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
@end
