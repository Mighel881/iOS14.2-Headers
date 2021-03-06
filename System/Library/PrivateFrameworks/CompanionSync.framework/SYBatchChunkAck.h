/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYBatchChunkAck : PBCodable <NSCopying> {

	unsigned _chunkIndex;
	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned chunkIndex;                   //@synthesize chunkIndex=_chunkIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)syncID;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(unsigned long long)hash;
-(SYErrorInfo *)error;
-(id)dictionaryRepresentation;
-(void)setError:(SYErrorInfo *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasError;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setChunkIndex:(unsigned)arg1 ;
-(unsigned)chunkIndex;
@end

