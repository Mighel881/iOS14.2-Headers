/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPublisherDetails : PBCodable <NSCopying> {

	SCD_Struct_GE92* _publisherIds;
	BOOL _currentlyFollowing;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) unsigned long long publisherIdsCount; 
@property (nonatomic,readonly) unsigned long long* publisherIds; 
@property (assign,nonatomic) BOOL hasCurrentlyFollowing; 
@property (assign,nonatomic) BOOL currentlyFollowing; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(unsigned long long*)publisherIds;
-(void)addPublisherId:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(unsigned long long)publisherIdAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCurrentlyFollowing:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPublisherIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)currentlyFollowing;
-(void)setHasCurrentlyFollowing:(BOOL)arg1 ;
-(BOOL)hasCurrentlyFollowing;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end

