/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NSString;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying> {

	NSMutableArray* _manifestEntrys;
	NSData* _manifestHash;
	NSString* _passTypeIdentifier;
	unsigned _sequenceCounter;
	NSString* _serialNumber;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NSString * passTypeIdentifier;                //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceCounter; 
@property (assign,nonatomic) unsigned sequenceCounter;                     //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                        //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * manifestEntrys;              //@synthesize manifestEntrys=_manifestEntrys - In the implementation block
+(Class)manifestEntryType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)serialNumber;
-(NSData *)manifestHash;
-(unsigned long long)hash;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSequenceCounter:(unsigned)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(unsigned)sequenceCounter;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSequenceCounter;
-(NSMutableArray *)manifestEntrys;
-(void)setHasSequenceCounter:(BOOL)arg1 ;
-(void)addManifestEntry:(id)arg1 ;
-(unsigned long long)manifestEntrysCount;
-(void)clearManifestEntrys;
-(id)manifestEntryAtIndex:(unsigned long long)arg1 ;
-(void)setManifestEntrys:(NSMutableArray *)arg1 ;
@end
