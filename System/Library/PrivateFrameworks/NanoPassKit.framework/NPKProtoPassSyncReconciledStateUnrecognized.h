/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoPassSyncState, NSData;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying> {

	NPKProtoPassSyncState* _libraryPassSyncState;
	NSData* _unrecognizedReconciledStateHash;

}

@property (nonatomic,readonly) BOOL hasUnrecognizedReconciledStateHash; 
@property (nonatomic,retain) NSData * unrecognizedReconciledStateHash;                  //@synthesize unrecognizedReconciledStateHash=_unrecognizedReconciledStateHash - In the implementation block
@property (nonatomic,readonly) BOOL hasLibraryPassSyncState; 
@property (nonatomic,retain) NPKProtoPassSyncState * libraryPassSyncState;              //@synthesize libraryPassSyncState=_libraryPassSyncState - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)unrecognizedReconciledStateHash;
-(NPKProtoPassSyncState *)libraryPassSyncState;
-(void)setUnrecognizedReconciledStateHash:(NSData *)arg1 ;
-(void)setLibraryPassSyncState:(NPKProtoPassSyncState *)arg1 ;
-(BOOL)hasUnrecognizedReconciledStateHash;
-(BOOL)hasLibraryPassSyncState;
@end

