/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying> {

	long long _fhirVersionMajor;
	long long _fhirVersionMinor;
	long long _fhirVersionPatch;
	double _lastUpdatedDate;
	NSData* _data;
	NSString* _identifier;
	NSString* _resourceType;
	NSString* _sourceURL;
	SCD_Struct_HD10 _has;

}

@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;                 //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                    //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdatedDate; 
@property (assign,nonatomic) double lastUpdatedDate;                  //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFhirVersionMajor; 
@property (assign,nonatomic) long long fhirVersionMajor;              //@synthesize fhirVersionMajor=_fhirVersionMajor - In the implementation block
@property (assign,nonatomic) BOOL hasFhirVersionMinor; 
@property (assign,nonatomic) long long fhirVersionMinor;              //@synthesize fhirVersionMinor=_fhirVersionMinor - In the implementation block
@property (assign,nonatomic) BOOL hasFhirVersionPatch; 
@property (assign,nonatomic) long long fhirVersionPatch;              //@synthesize fhirVersionPatch=_fhirVersionPatch - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(NSString *)sourceURL;
-(void)setData:(NSData *)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasResourceType;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)hasData;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(void)copyTo:(id)arg1 ;
-(void)setLastUpdatedDate:(double)arg1 ;
-(NSString *)resourceType;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setResourceType:(NSString *)arg1 ;
-(double)lastUpdatedDate;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasLastUpdatedDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdatedDate;
-(void)setFhirVersionMajor:(long long)arg1 ;
-(void)setHasFhirVersionMajor:(BOOL)arg1 ;
-(BOOL)hasFhirVersionMajor;
-(void)setFhirVersionMinor:(long long)arg1 ;
-(void)setHasFhirVersionMinor:(BOOL)arg1 ;
-(BOOL)hasFhirVersionMinor;
-(void)setFhirVersionPatch:(long long)arg1 ;
-(void)setHasFhirVersionPatch:(BOOL)arg1 ;
-(BOOL)hasFhirVersionPatch;
-(long long)fhirVersionMajor;
-(long long)fhirVersionMinor;
-(long long)fhirVersionPatch;
@end

