/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface BLTPBBulletinSummaryKey : PBCodable <NSCopying> {

	NSString* _key;
	NSData* _value;
	NSData* _valueNulls;

}

@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSData * value;                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValueNulls; 
@property (nonatomic,retain) NSData * valueNulls;               //@synthesize valueNulls=_valueNulls - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)value;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValueNulls:(NSData *)arg1 ;
-(BOOL)hasValueNulls;
-(NSData *)valueNulls;
@end
