/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKCodeProto2Any;

@interface CKCodeProto2ProtectedEnvelope : PBCodable <NSCopying> {

	int _contents;
	NSData* _encrypted;
	CKCodeProto2Any* _value;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasEncrypted; 
@property (nonatomic,retain) NSData * encrypted;                   //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKCodeProto2Any * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasContents; 
@property (assign,nonatomic) int contents;                         //@synthesize contents=_contents - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(int)contents;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)clearOneofValuesForContents;
-(BOOL)hasEncrypted;
-(void)setHasContents:(BOOL)arg1 ;
-(id)contentsAsString:(int)arg1 ;
-(int)StringAsContents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)encrypted;
-(void)setContents:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEncrypted:(NSData *)arg1 ;
-(BOOL)hasContents;
-(CKCodeProto2Any *)value;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(CKCodeProto2Any *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

