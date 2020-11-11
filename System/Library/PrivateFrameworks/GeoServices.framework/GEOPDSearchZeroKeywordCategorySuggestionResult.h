/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _categorys;
	NSMutableArray* _zeroKeywordEntrys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_zeroKeywordEntrys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * zeroKeywordEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)zeroKeywordEntryType;
+(Class)categoryType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)categorysCount;
-(id)init;
-(id)jsonRepresentation;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)addCategory:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)categorys;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearCategorys;
-(NSMutableArray *)zeroKeywordEntrys;
-(void)addZeroKeywordEntry:(id)arg1 ;
-(unsigned long long)zeroKeywordEntrysCount;
-(void)clearZeroKeywordEntrys;
-(id)zeroKeywordEntryAtIndex:(unsigned long long)arg1 ;
-(void)setZeroKeywordEntrys:(NSMutableArray *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
