/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoSignDataRequest : PBRequest <NSCopying> {

	NSString* _aid;
	NSData* _dataToSign;
	NSData* _digestToSign;
	int _entanglementMode;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasDataToSign; 
@property (nonatomic,retain) NSData * dataToSign;                   //@synthesize dataToSign=_dataToSign - In the implementation block
@property (nonatomic,readonly) BOOL hasDigestToSign; 
@property (nonatomic,retain) NSData * digestToSign;                 //@synthesize digestToSign=_digestToSign - In the implementation block
@property (assign,nonatomic) BOOL hasEntanglementMode; 
@property (assign,nonatomic) int entanglementMode;                  //@synthesize entanglementMode=_entanglementMode - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSString * aid;                        //@synthesize aid=_aid - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)aid;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAid;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAid:(NSString *)arg1 ;
-(void)setDataToSign:(NSData *)arg1 ;
-(NSData *)dataToSign;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDigestToSign:(NSData *)arg1 ;
-(BOOL)hasDataToSign;
-(BOOL)hasDigestToSign;
-(int)entanglementMode;
-(void)setEntanglementMode:(int)arg1 ;
-(void)setHasEntanglementMode:(BOOL)arg1 ;
-(BOOL)hasEntanglementMode;
-(id)entanglementModeAsString:(int)arg1 ;
-(int)StringAsEntanglementMode:(id)arg1 ;
-(NSData *)digestToSign;
@end

