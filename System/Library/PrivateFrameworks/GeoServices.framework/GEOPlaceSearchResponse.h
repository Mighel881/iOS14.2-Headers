/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSMutableArray, NSString, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	NSMutableArray* _namedFeatures;
	NSString* _nearbySectionHeader;
	NSMutableArray* _placeResults;
	NSMutableArray* _suggestionEntryLists;
	NSData* _suggestionMetadata;
	double _turnaroundTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCodeInfo;
	int _status;
	BOOL _isChainResultSet;
	struct {
		unsigned has_turnaroundTime : 1;
		unsigned has_statusCodeInfo : 1;
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapRegion : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_nearbySectionHeader : 1;
		unsigned read_placeResults : 1;
		unsigned read_suggestionEntryLists : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * placeResults; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryLists; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (assign,nonatomic) BOOL hasStatusCodeInfo; 
@property (assign,nonatomic) int statusCodeInfo; 
@property (assign,nonatomic) BOOL hasTurnaroundTime; 
@property (assign,nonatomic) double turnaroundTime; 
@property (nonatomic,readonly) BOOL hasNearbySectionHeader; 
@property (nonatomic,retain) NSString * nearbySectionHeader; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)placeResultType;
+(Class)namedFeaturesType;
+(Class)suggestionEntryListsType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)nearbySectionHeader;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntryLists:(NSMutableArray *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasIsChainResultSet;
-(void)addSuggestionEntryLists:(id)arg1 ;
-(unsigned long long)hash;
-(void)setNearbySectionHeader:(NSString *)arg1 ;
-(int)status;
-(void)setTurnaroundTime:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasTurnaroundTime;
-(BOOL)isChainResultSet;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(int)StringAsStatusCodeInfo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(double)turnaroundTime;
-(unsigned long long)suggestionEntryListsCount;
-(BOOL)readFrom:(id)arg1 ;
-(id)statusCodeInfoAsString:(int)arg1 ;
-(GEOMapRegion *)mapRegion;
-(int)statusCodeInfo;
-(NSMutableArray *)placeResults;
-(void)clearSensitiveFields;
-(void)setHasStatusCodeInfo:(BOOL)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasTurnaroundTime:(BOOL)arg1 ;
-(void)addNamedFeatures:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearNamedFeatures;
-(NSData *)suggestionMetadata;
-(BOOL)hasMapRegion;
-(NSMutableArray *)namedFeatures;
-(void)copyTo:(id)arg1 ;
-(id)namedFeaturesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStatusCodeInfo;
-(void)setStatusCodeInfo:(int)arg1 ;
-(NSMutableArray *)suggestionEntryLists;
-(void)clearSuggestionEntryLists;
-(PBUnknownFields *)unknownFields;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(void)clearPlaceResults;
-(BOOL)hasSuggestionMetadata;
-(void)writeTo:(id)arg1 ;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNearbySectionHeader;
-(id)initWithJSON:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(unsigned long long)placeResultsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)suggestionEntryListsAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)statusAsString:(int)arg1 ;
@end
