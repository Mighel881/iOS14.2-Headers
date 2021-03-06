/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WFTask.h>

@class NSString, MKLocalSearchCompletion, WFLocation;

@interface WFGeocodeRequest : WFTask {

	/*^block*/id _resultHandler;
	NSString* _searchString;
	MKLocalSearchCompletion* _autocompleteSearchResult;
	WFLocation* _geocodedResult;
	CLLocationCoordinate2D _coordinate;

}

@property (retain) NSString * searchString;                                         //@synthesize searchString=_searchString - In the implementation block
@property (retain) MKLocalSearchCompletion * autocompleteSearchResult;              //@synthesize autocompleteSearchResult=_autocompleteSearchResult - In the implementation block
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (retain) WFLocation * geocodedResult;                                     //@synthesize geocodedResult=_geocodedResult - In the implementation block
@property (readonly) id resultHandler;                                              //@synthesize resultHandler=_resultHandler - In the implementation block
@property (readonly) NSString * searchTerm; 
-(NSString *)searchString;
-(id)resultHandler;
-(void)setSearchString:(NSString *)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(void)handleResponse:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(MKLocalSearchCompletion *)autocompleteSearchResult;
-(void)cleanup;
-(id)description;
-(void)setGeocodedResult:(WFLocation *)arg1 ;
-(WFLocation *)geocodedResult;
-(NSString *)searchTerm;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setAutocompleteSearchResult:(MKLocalSearchCompletion *)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

