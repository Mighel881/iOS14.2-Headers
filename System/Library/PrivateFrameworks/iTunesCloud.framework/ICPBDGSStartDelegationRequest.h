/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerInfoContextRequestTokens;

}

@property (nonatomic,retain) NSMutableArray * playerInfoContextRequestTokens;              //@synthesize playerInfoContextRequestTokens=_playerInfoContextRequestTokens - In the implementation block
+(Class)playerInfoContextRequestTokenType;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)playerInfoContextRequestTokens;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)addPlayerInfoContextRequestToken:(id)arg1 ;
-(void)clearPlayerInfoContextRequestTokens;
-(unsigned long long)playerInfoContextRequestTokensCount;
-(id)playerInfoContextRequestTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerInfoContextRequestTokens:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
