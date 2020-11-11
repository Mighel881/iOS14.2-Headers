/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _batchPlaceResults;
	NSMutableArray* _clusters;
	double _timestamp;
	NSMutableArray* _versionDomains;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	unsigned _ttl;
	unsigned _version;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_statusCode : 1;
		unsigned has_ttl : 1;
		unsigned has_version : 1;
		unsigned read_batchPlaceResults : 1;
		unsigned read_clusters : 1;
		unsigned read_versionDomains : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * clusters; 
@property (nonatomic,retain) NSMutableArray * batchPlaceResults; 
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (nonatomic,retain) NSMutableArray * versionDomains; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
+(Class)batchPlaceResultType;
+(Class)clusterType;
+(BOOL)isValid:(id)arg1 ;
+(Class)versionDomainType;
-(void)mergeFrom:(id)arg1 ;
-(void)clearVersionDomains;
-(int)StringAsStatusCode:(id)arg1 ;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(NSMutableArray *)versionDomains;
-(void)addVersionDomain:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)init;
-(void)setHasVersion:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)statusCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)addBatchPlaceResult:(id)arg1 ;
-(void)clearBatchPlaceResults;
-(id)batchPlaceResultAtIndex:(unsigned long long)arg1 ;
-(void)setBatchPlaceResults:(NSMutableArray *)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(BOOL)hasTtl;
-(unsigned)version;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)clusters;
-(void)clearSensitiveFields;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)addCluster:(id)arg1 ;
-(unsigned long long)clustersCount;
-(void)clearClusters;
-(id)clusterAtIndex:(unsigned long long)arg1 ;
-(void)setClusters:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)batchPlaceResults;
-(unsigned long long)batchPlaceResultsCount;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)ttl;
-(id)statusCodeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(void)setHasStatusCode:(BOOL)arg1 ;
@end
