/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateUser : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _homeCountryCode;
	NSString* _homeMetroRegion;
	double _mapsUseLastDate;
	double _mapsUseStartDate;
	double _syncFirstTimestamp;
	double _syncLastTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isTourist;
	struct {
		unsigned has_mapsUseLastDate : 1;
		unsigned has_mapsUseStartDate : 1;
		unsigned has_syncFirstTimestamp : 1;
		unsigned has_syncLastTimestamp : 1;
		unsigned has_isTourist : 1;
		unsigned read_homeCountryCode : 1;
		unsigned read_homeMetroRegion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSyncFirstTimestamp; 
@property (assign,nonatomic) double syncFirstTimestamp; 
@property (assign,nonatomic) BOOL hasSyncLastTimestamp; 
@property (assign,nonatomic) double syncLastTimestamp; 
@property (assign,nonatomic) BOOL hasMapsUseStartDate; 
@property (assign,nonatomic) double mapsUseStartDate; 
@property (assign,nonatomic) BOOL hasMapsUseLastDate; 
@property (assign,nonatomic) double mapsUseLastDate; 
@property (nonatomic,readonly) BOOL hasHomeCountryCode; 
@property (nonatomic,retain) NSString * homeCountryCode; 
@property (nonatomic,readonly) BOOL hasHomeMetroRegion; 
@property (nonatomic,retain) NSString * homeMetroRegion; 
@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) BOOL isTourist; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isTourist;
-(BOOL)hasIsTourist;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMapsUseLastDate:(double)arg1 ;
-(void)setMapsUseStartDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsTourist:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setHomeCountryCode:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)homeMetroRegion;
-(void)setSyncFirstTimestamp:(double)arg1 ;
-(void)setSyncLastTimestamp:(double)arg1 ;
-(double)syncFirstTimestamp;
-(void)setHomeMetroRegion:(NSString *)arg1 ;
-(void)setHasSyncFirstTimestamp:(BOOL)arg1 ;
-(BOOL)hasSyncFirstTimestamp;
-(double)syncLastTimestamp;
-(void)setHasSyncLastTimestamp:(BOOL)arg1 ;
-(BOOL)hasSyncLastTimestamp;
-(double)mapsUseStartDate;
-(void)setHasMapsUseStartDate:(BOOL)arg1 ;
-(BOOL)hasMapsUseStartDate;
-(double)mapsUseLastDate;
-(void)setHasMapsUseLastDate:(BOOL)arg1 ;
-(BOOL)hasMapsUseLastDate;
-(BOOL)hasHomeCountryCode;
-(BOOL)hasHomeMetroRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)homeCountryCode;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasIsTourist:(BOOL)arg1 ;
@end
