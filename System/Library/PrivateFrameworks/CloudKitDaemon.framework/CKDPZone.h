/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPProtectionInfo, NSMutableArray, CKDPShareIdentifier, CKDPRecordStableUrl, CKDPRecordZoneIdentifier;

@interface CKDPZone : PBCodable <NSCopying> {

	CKDPProtectionInfo* _protectionInfo;
	NSMutableArray* _protectionInfoKeysToRemoves;
	CKDPProtectionInfo* _recordProtectionInfo;
	CKDPShareIdentifier* _shareId;
	CKDPRecordStableUrl* _stableUrl;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                 //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                       //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * recordProtectionInfo;                 //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasStableUrl; 
@property (nonatomic,retain) CKDPRecordStableUrl * stableUrl;                           //@synthesize stableUrl=_stableUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                             //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,retain) NSMutableArray * protectionInfoKeysToRemoves;              //@synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves - In the implementation block
+(Class)protectionInfoKeysToRemoveType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasZoneIdentifier;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecordProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasRecordProtectionInfo;
-(CKDPProtectionInfo *)recordProtectionInfo;
-(CKDPShareIdentifier *)shareId;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(BOOL)hasProtectionInfo;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)addProtectionInfoKeysToRemove:(id)arg1 ;
-(void)setStableUrl:(CKDPRecordStableUrl *)arg1 ;
-(unsigned long long)protectionInfoKeysToRemovesCount;
-(void)clearProtectionInfoKeysToRemoves;
-(id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStableUrl;
-(BOOL)hasShareId;
-(CKDPRecordStableUrl *)stableUrl;
-(NSMutableArray *)protectionInfoKeysToRemoves;
-(void)setProtectionInfoKeysToRemoves:(NSMutableArray *)arg1 ;
@end

