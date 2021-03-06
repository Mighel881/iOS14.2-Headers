/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying> {

	HMPBServiceReference* _serviceReference;
	NSData* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasServiceReference; 
@property (nonatomic,retain) HMPBServiceReference * serviceReference;              //@synthesize serviceReference=_serviceReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSData * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)characteristicReferenceWithData:(id)arg1 ;
+(id)characteristicReferenceWithCharacteristic:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUniqueIdentifier:(NSData *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceReference:(HMPBServiceReference *)arg1 ;
-(BOOL)hasServiceReference;
-(HMPBServiceReference *)serviceReference;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)uniqueIdentifier;
@end

