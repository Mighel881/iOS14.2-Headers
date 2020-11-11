/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _mapsSearchResults;
	NSMutableArray* _suggestionEntryMetadataDisplayeds;
	NSData* _suggestionEntryMetadataTappedOn;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_mapsSearchResults : 1;
		unsigned read_suggestionEntryMetadataDisplayeds : 1;
		unsigned read_suggestionEntryMetadataTappedOn : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSData * suggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadataDisplayeds; 
@property (nonatomic,retain) NSMutableArray * mapsSearchResults; 
+(Class)suggestionEntryMetadataDisplayedType;
+(Class)mapsSearchResultType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(NSData *)suggestionEntryMetadataTappedOn;
-(NSMutableArray *)suggestionEntryMetadataDisplayeds;
-(void)addMapsSearchResult:(id)arg1 ;
-(void)setSuggestionEntryMetadataTappedOn:(NSData *)arg1 ;
-(void)addSuggestionEntryMetadataDisplayed:(id)arg1 ;
-(NSMutableArray *)mapsSearchResults;
-(unsigned long long)suggestionEntryMetadataDisplayedsCount;
-(void)clearSuggestionEntryMetadataDisplayeds;
-(id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapsSearchResultsCount;
-(void)clearMapsSearchResults;
-(id)mapsSearchResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestionEntryMetadataTappedOn;
-(void)setSuggestionEntryMetadataDisplayeds:(NSMutableArray *)arg1 ;
-(void)setMapsSearchResults:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
