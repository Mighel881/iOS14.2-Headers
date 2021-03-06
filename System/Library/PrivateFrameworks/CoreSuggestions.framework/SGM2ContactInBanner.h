/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2ContactInBanner : PBCodable <NSCopying> {

	int _app;
	int _extracted;
	unsigned _extractionModelVersion;
	NSString* _key;
	int _type;
	BOOL _selfId;
	SCD_Struct_SG5 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasApp; 
@property (assign,nonatomic) int app;                                      //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) BOOL hasExtracted; 
@property (assign,nonatomic) int extracted;                                //@synthesize extracted=_extracted - In the implementation block
@property (assign,nonatomic) BOOL hasSelfId; 
@property (assign,nonatomic) BOOL selfId;                                  //@synthesize selfId=_selfId - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionModelVersion; 
@property (assign,nonatomic) unsigned extractionModelVersion;              //@synthesize extractionModelVersion=_extractionModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(id)typeAsString:(int)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)hasApp;
-(BOOL)selfId;
-(int)StringAsType:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsApp:(id)arg1 ;
-(id)appAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setApp:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasApp:(BOOL)arg1 ;
-(int)app;
-(BOOL)hasType;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(void)setExtracted:(int)arg1 ;
-(void)setHasExtracted:(BOOL)arg1 ;
-(BOOL)hasExtracted;
-(id)extractedAsString:(int)arg1 ;
-(int)StringAsExtracted:(id)arg1 ;
-(void)setExtractionModelVersion:(unsigned)arg1 ;
-(void)setHasExtractionModelVersion:(BOOL)arg1 ;
-(BOOL)hasExtractionModelVersion;
-(void)setSelfId:(BOOL)arg1 ;
-(void)setHasSelfId:(BOOL)arg1 ;
-(unsigned)extractionModelVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)extracted;
-(BOOL)hasSelfId;
@end

