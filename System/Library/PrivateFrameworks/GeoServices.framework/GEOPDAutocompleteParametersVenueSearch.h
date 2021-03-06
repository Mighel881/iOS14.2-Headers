/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _buildingId;
	NSMutableArray* _categorys;
	unsigned long long _levelId;
	NSString* _query;
	unsigned long long _sectionId;
	unsigned long long _venueId;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxResults;
	BOOL _highlightDiff;
	struct {
		unsigned has_buildingId : 1;
		unsigned has_levelId : 1;
		unsigned has_sectionId : 1;
		unsigned has_venueId : 1;
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_query : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff; 
@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId; 
@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (assign,nonatomic) BOOL hasSectionId; 
@property (assign,nonatomic) unsigned long long sectionId; 
@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)buildingId;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setQuery:(NSString *)arg1 ;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasQuery;
-(NSString *)query;
-(unsigned long long)categorysCount;
-(id)init;
-(id)jsonRepresentation;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)sectionId;
-(void)addCategory:(id)arg1 ;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(BOOL)highlightDiff;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(void)setSectionId:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasSectionId:(BOOL)arg1 ;
-(BOOL)hasSectionId;
-(unsigned long long)venueId;
-(unsigned long long)levelId;
-(int)maxResults;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMaxResults:(int)arg1 ;
-(id)description;
-(NSMutableArray *)categorys;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(BOOL)hasMaxResults;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearCategorys;
-(PBUnknownFields *)unknownFields;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBuildingId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasVenueId;
-(BOOL)hasLevelId;
-(void)readAll:(BOOL)arg1 ;
@end

