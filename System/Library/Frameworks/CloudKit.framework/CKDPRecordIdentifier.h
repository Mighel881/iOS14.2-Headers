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

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPRecordIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _value;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasZoneIdentifier;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPIdentifier *)value;
-(BOOL)hasValue;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
@end
