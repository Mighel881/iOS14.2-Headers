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

@class NPKProtoCatalog;

@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying> {

	NPKProtoCatalog* _companionCatalog;
	unsigned _lastKnownResyncID;
	unsigned _resyncID;
	unsigned _syncID;
	NPKProtoCatalog* _watchCatalog;
	SCD_Struct_NP3 _has;

}

@property (nonatomic,retain) NPKProtoCatalog * companionCatalog;              //@synthesize companionCatalog=_companionCatalog - In the implementation block
@property (assign,nonatomic) BOOL hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                               //@synthesize resyncID=_resyncID - In the implementation block
@property (assign,nonatomic) BOOL hasLastKnownResyncID; 
@property (assign,nonatomic) unsigned lastKnownResyncID;                      //@synthesize lastKnownResyncID=_lastKnownResyncID - In the implementation block
@property (assign,nonatomic) BOOL hasSyncID; 
@property (assign,nonatomic) unsigned syncID;                                 //@synthesize syncID=_syncID - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * watchCatalog;                  //@synthesize watchCatalog=_watchCatalog - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned)syncID;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSyncID:(unsigned)arg1 ;
-(void)setCompanionCatalog:(NPKProtoCatalog *)arg1 ;
-(void)setWatchCatalog:(NPKProtoCatalog *)arg1 ;
-(BOOL)hasWatchCatalog;
-(NPKProtoCatalog *)companionCatalog;
-(NPKProtoCatalog *)watchCatalog;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(BOOL)arg1 ;
-(BOOL)hasResyncID;
-(unsigned)resyncID;
-(void)setLastKnownResyncID:(unsigned)arg1 ;
-(void)setHasLastKnownResyncID:(BOOL)arg1 ;
-(BOOL)hasLastKnownResyncID;
-(void)setHasSyncID:(BOOL)arg1 ;
-(BOOL)hasSyncID;
-(unsigned)lastKnownResyncID;
@end

