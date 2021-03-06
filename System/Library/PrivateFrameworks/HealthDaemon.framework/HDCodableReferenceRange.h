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

@class NSString, HDCodableInspectableValueCollection;

@interface HDCodableReferenceRange : PBCodable <NSCopying> {

	NSString* _identifier;
	HDCodableInspectableValueCollection* _valueRange;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValueRange; 
@property (nonatomic,retain) HDCodableInspectableValueCollection * valueRange;              //@synthesize valueRange=_valueRange - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableInspectableValueCollection *)valueRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValueRange:(HDCodableInspectableValueCollection *)arg1 ;
-(BOOL)hasValueRange;
@end

