/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, CSSearchableItem, NSArray, NSDate, NSString, ICRankingQueriesDefinition;

@interface ICSortableSearchableItem : NSObject {

	BOOL _isPrefixMatch;
	BOOL _needsLazyInitialization;
	NSDictionary* _highlightInfo;
	CSSearchableItem* _searchableItem;
	double _rankingScore;
	NSArray* _attachmentUniqueIdentifiers;
	unsigned long long _relevanceBitField;
	unsigned long long _modificationDateBucket;
	NSDate* _modificationDate;
	NSDate* _creationDate;
	unsigned long long _searchResultType;
	NSString* _searchString;
	ICRankingQueriesDefinition* _rankingQueriesDefinition;
	NSString* _language;

}

@property (nonatomic,retain) NSString * searchString;                                            //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) ICRankingQueriesDefinition * rankingQueriesDefinition;              //@synthesize rankingQueriesDefinition=_rankingQueriesDefinition - In the implementation block
@property (nonatomic,retain) NSString * language;                                                //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL needsLazyInitialization;                                       //@synthesize needsLazyInitialization=_needsLazyInitialization - In the implementation block
@property (nonatomic,readonly) CSSearchableItem * searchableItem;                                //@synthesize searchableItem=_searchableItem - In the implementation block
@property (nonatomic,readonly) NSDictionary * highlightInfo;                                     //@synthesize highlightInfo=_highlightInfo - In the implementation block
@property (nonatomic,readonly) double rankingScore;                                              //@synthesize rankingScore=_rankingScore - In the implementation block
@property (nonatomic,readonly) NSArray * attachmentUniqueIdentifiers;                            //@synthesize attachmentUniqueIdentifiers=_attachmentUniqueIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceBitField;                             //@synthesize relevanceBitField=_relevanceBitField - In the implementation block
@property (nonatomic,readonly) BOOL isPrefixMatch;                                               //@synthesize isPrefixMatch=_isPrefixMatch - In the implementation block
@property (nonatomic,readonly) unsigned long long modificationDateBucket;                        //@synthesize modificationDateBucket=_modificationDateBucket - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                        //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long searchResultType;                              //@synthesize searchResultType=_searchResultType - In the implementation block
+(id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)language;
-(ICRankingQueriesDefinition *)rankingQueriesDefinition;
-(void)lazilyInitializeHighlightInfoAndIsPrefixMatchIfNecessary;
-(NSArray *)attachmentUniqueIdentifiers;
-(NSDictionary *)highlightInfo;
-(unsigned long long)relevanceBitField;
-(BOOL)isPrefixMatch;
-(unsigned long long)modificationDateBucket;
-(id)initWithSearchableItem:(id)arg1 highlightInfo:(id)arg2 rankingScore:(double)arg3 attachmentUniqueIdentifiers:(id)arg4 ;
-(id)initWithSearchableItem:(id)arg1 searchString:(id)arg2 rankingQueriesDefinition:(id)arg3 rankingScore:(double)arg4 attachmentUniqueIdentifiers:(id)arg5 language:(id)arg6 ;
-(void)setRankingQueriesDefinition:(ICRankingQueriesDefinition *)arg1 ;
-(BOOL)needsLazyInitialization;
-(void)setNeedsLazyInitialization:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CSSearchableItem *)searchableItem;
-(NSDate *)modificationDate;
-(unsigned long long)searchResultType;
-(NSDate *)creationDate;
-(double)rankingScore;
@end
