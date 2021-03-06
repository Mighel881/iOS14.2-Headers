/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater, MapsSuggestionsFullResourceDepot;
@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject> {

	BOOL _hasTracker;
	id<MapsSuggestionsStrategy> _strategy;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;
	NSMutableArray* _sourceClasses;
	NSMutableSet* _includePreFilters;
	NSMutableSet* _includePostFilters;
	NSMutableArray* _includeImprovers;
	NSMutableArray* _includeDedupers;
	NSMutableSet* _excludePreFilters;
	NSMutableSet* _excludePostFilters;
	NSMutableArray* _excludeImprovers;
	NSMutableArray* _excludeDedupers;
	NSMutableDictionary* _titleFormatters;
	id<MapsSuggestionsFullResourceDepot> _resourceDepot;

}

@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                            //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsLocationUpdater> locationUpdater;              //@synthesize locationUpdater=_locationUpdater - In the implementation block
@property (assign,nonatomic) BOOL hasTracker;                                                 //@synthesize hasTracker=_hasTracker - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceClasses;                                  //@synthesize sourceClasses=_sourceClasses - In the implementation block
@property (nonatomic,retain) NSMutableSet * includePreFilters;                                //@synthesize includePreFilters=_includePreFilters - In the implementation block
@property (nonatomic,retain) NSMutableSet * includePostFilters;                               //@synthesize includePostFilters=_includePostFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeImprovers;                               //@synthesize includeImprovers=_includeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeDedupers;                                //@synthesize includeDedupers=_includeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableSet * excludePreFilters;                                //@synthesize excludePreFilters=_excludePreFilters - In the implementation block
@property (nonatomic,retain) NSMutableSet * excludePostFilters;                               //@synthesize excludePostFilters=_excludePostFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeImprovers;                               //@synthesize excludeImprovers=_excludeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeDedupers;                                //@synthesize excludeDedupers=_excludeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleFormatters;                           //@synthesize titleFormatters=_titleFormatters - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsFullResourceDepot> resourceDepot;              //@synthesize resourceDepot=_resourceDepot - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)simpleStrategy;
+(id)forDevice;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(void)setIncludeDedupers:(NSMutableArray *)arg1 ;
-(void)setIncludePreFilters:(NSMutableSet *)arg1 ;
-(id)withDedupers:(id)arg1 ;
-(NSMutableArray *)includeImprovers;
-(id)init;
-(NSString *)uniqueName;
-(NSMutableSet *)excludePreFilters;
-(id)build;
-(id<MapsSuggestionsStrategy>)strategy;
-(NSMutableSet *)excludePostFilters;
-(NSMutableArray *)excludeImprovers;
-(void)setTitleFormatters:(NSMutableDictionary *)arg1 ;
-(void)setHasTracker:(BOOL)arg1 ;
-(void)setIncludeImprovers:(NSMutableArray *)arg1 ;
-(void)setResourceDepot:(id<MapsSuggestionsFullResourceDepot>)arg1 ;
-(id)withFavorites;
-(void)setLocationUpdater:(id<MapsSuggestionsLocationUpdater>)arg1 ;
-(NSMutableSet *)includePreFilters;
-(void)setExcludePostFilters:(NSMutableSet *)arg1 ;
-(id)withImprovers:(id)arg1 ;
-(NSMutableArray *)includeDedupers;
-(NSMutableSet *)includePostFilters;
-(BOOL)hasTracker;
-(void)setIncludePostFilters:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)titleFormatters;
-(id)withResourceDepot:(id)arg1 ;
-(NSMutableArray *)excludeDedupers;
-(id)withoutTracker;
-(id<MapsSuggestionsLocationUpdater>)locationUpdater;
-(void)setExcludeImprovers:(NSMutableArray *)arg1 ;
-(void)setSourceClasses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sourceClasses;
-(id)withPreFilters:(id)arg1 ;
-(void)setExcludeDedupers:(NSMutableArray *)arg1 ;
-(void)setExcludePreFilters:(NSMutableSet *)arg1 ;
-(id)withTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(id<MapsSuggestionsFullResourceDepot>)resourceDepot;
-(id)withPostFilters:(id)arg1 ;
-(id)withSourceClasses:(id)arg1 ;
-(id)withLocationUpdater:(id)arg1 ;
@end

