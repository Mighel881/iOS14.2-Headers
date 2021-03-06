/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString, NSMutableArray;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _configuration;
	NSMutableArray* _editorialArticleListIDs;
	NSMutableArray* _editorialSectionTagIDs;
	NSString* _spotlightArticleID;
	NSString* _todayFeedConfiguration;
	NSMutableArray* _todayFeedTopStoriesArticleIDs;
	NSString* _trendingArticleListID;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                       //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration; 
@property (nonatomic,retain) NSString * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL hasTrendingArticleListID; 
@property (nonatomic,retain) NSString * trendingArticleListID;                            //@synthesize trendingArticleListID=_trendingArticleListID - In the implementation block
@property (nonatomic,retain) NSMutableArray * editorialArticleListIDs;                    //@synthesize editorialArticleListIDs=_editorialArticleListIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * editorialSectionTagIDs;                     //@synthesize editorialSectionTagIDs=_editorialSectionTagIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasSpotlightArticleID; 
@property (nonatomic,retain) NSString * spotlightArticleID;                               //@synthesize spotlightArticleID=_spotlightArticleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * todayFeedTopStoriesArticleIDs;              //@synthesize todayFeedTopStoriesArticleIDs=_todayFeedTopStoriesArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasTodayFeedConfiguration; 
@property (nonatomic,retain) NSString * todayFeedConfiguration;                           //@synthesize todayFeedConfiguration=_todayFeedConfiguration - In the implementation block
+(Class)editorialSectionTagIDsType;
+(Class)todayFeedTopStoriesArticleIDsType;
+(Class)editorialArticleListIDsType;
-(void)mergeFrom:(id)arg1 ;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)clearEditorialSectionTagIDs;
-(BOOL)hasSpotlightArticleID;
-(unsigned long long)hash;
-(unsigned long long)todayFeedTopStoriesArticleIDsCount;
-(NSMutableArray *)todayFeedTopStoriesArticleIDs;
-(id)dictionaryRepresentation;
-(id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)spotlightArticleID;
-(void)setEditorialSectionTagIDs:(NSMutableArray *)arg1 ;
-(BOOL)hasConfiguration;
-(id)description;
-(void)setEditorialArticleListIDs:(NSMutableArray *)arg1 ;
-(void)setTodayFeedTopStoriesArticleIDs:(NSMutableArray *)arg1 ;
-(void)setTrendingArticleListID:(NSString *)arg1 ;
-(NSMutableArray *)editorialArticleListIDs;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTodayFeedConfiguration;
-(void)addTodayFeedTopStoriesArticleIDs:(id)arg1 ;
-(NSString *)todayFeedConfiguration;
-(void)setSpotlightArticleID:(NSString *)arg1 ;
-(void)setTodayFeedConfiguration:(NSString *)arg1 ;
-(void)clearEditorialArticleListIDs;
-(NSString *)trendingArticleListID;
-(unsigned long long)editorialSectionTagIDsCount;
-(void)addEditorialArticleListIDs:(id)arg1 ;
-(id)editorialArticleListIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)editorialSectionTagIDs;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTrendingArticleListID;
-(void)setConfiguration:(NSString *)arg1 ;
-(id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)addEditorialSectionTagIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)editorialArticleListIDsCount;
-(void)clearTodayFeedTopStoriesArticleIDs;
-(NSString *)configuration;
-(void)dealloc;
@end

