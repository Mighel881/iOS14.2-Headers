/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString;

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _channelID;
	NSString* _draftArticleListID;
	NSString* _draftIssueListID;
	BOOL _canAccessDrafts;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                      //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelID; 
@property (nonatomic,retain) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (assign,nonatomic) BOOL hasCanAccessDrafts; 
@property (assign,nonatomic) BOOL canAccessDrafts;                       //@synthesize canAccessDrafts=_canAccessDrafts - In the implementation block
@property (nonatomic,readonly) BOOL hasDraftArticleListID; 
@property (nonatomic,retain) NSString * draftArticleListID;              //@synthesize draftArticleListID=_draftArticleListID - In the implementation block
@property (nonatomic,readonly) BOOL hasDraftIssueListID; 
@property (nonatomic,retain) NSString * draftIssueListID;                //@synthesize draftIssueListID=_draftIssueListID - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NTPBRecordBase *)base;
-(void)setChannelID:(NSString *)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NSString *)channelID;
-(BOOL)hasBase;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasCanAccessDrafts:(BOOL)arg1 ;
-(BOOL)hasCanAccessDrafts;
-(BOOL)hasDraftArticleListID;
-(BOOL)hasDraftIssueListID;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasChannelID;
-(void)setCanAccessDrafts:(BOOL)arg1 ;
-(BOOL)canAccessDrafts;
-(void)writeTo:(id)arg1 ;
-(void)setDraftArticleListID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDraftIssueListID:(NSString *)arg1 ;
-(NSString *)draftArticleListID;
-(NSString *)draftIssueListID;
-(void)dealloc;
@end
