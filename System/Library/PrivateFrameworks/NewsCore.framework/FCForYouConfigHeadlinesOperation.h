/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext, FCFeedPersonalizing, FCForYouBridgedConfigurationParser;
@class NSArray, FCCachePolicy, FCForYouConfig, NSError, NSDictionary;

@interface FCForYouConfigHeadlinesOperation : FCOperation {

	BOOL _shouldFetchEditorialSectionTags;
	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	id<FCFeedPersonalizing> _personalizer;
	id<FCForYouBridgedConfigurationParser> _bridgedConfigurationParser;
	long long _fields;
	NSArray* _additionalArticleListIDs;
	NSArray* _additionalTagIDs;
	FCCachePolicy* _forYouConfigCachePolicy;
	FCCachePolicy* _articleListCachePolicy;
	FCCachePolicy* _editorialSectionTagCachePolicy;
	FCForYouConfig* _forYouConfig;
	NSError* _error;
	/*^block*/id _headlinesCompletionHandler;
	/*^block*/id _headlinesAndTagsCompletionHandler;
	FCForYouConfig* _resultForYouConfig;
	NSDictionary* _resultArticleListsByID;
	NSDictionary* _resultHeadlinesByArticleListID;
	NSDictionary* _resultHeadlinesByArticleID;
	NSDictionary* _resultTagsByID;

}

@property (nonatomic,retain) FCForYouConfig * resultForYouConfig;                                            //@synthesize resultForYouConfig=_resultForYouConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * resultArticleListsByID;                                          //@synthesize resultArticleListsByID=_resultArticleListsByID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeadlinesByArticleListID;                                  //@synthesize resultHeadlinesByArticleListID=_resultHeadlinesByArticleListID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeadlinesByArticleID;                                      //@synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID - In the implementation block
@property (nonatomic,retain) NSDictionary * resultTagsByID;                                                  //@synthesize resultTagsByID=_resultTagsByID - In the implementation block
@property (retain) FCForYouConfig * forYouConfig;                                                            //@synthesize forYouConfig=_forYouConfig - In the implementation block
@property (retain) NSError * error;                                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> personalizer;                                           //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,retain) id<FCForYouBridgedConfigurationParser> bridgedConfigurationParser;              //@synthesize bridgedConfigurationParser=_bridgedConfigurationParser - In the implementation block
@property (assign,nonatomic) long long fields;                                                               //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * additionalArticleListIDs;                                               //@synthesize additionalArticleListIDs=_additionalArticleListIDs - In the implementation block
@property (nonatomic,copy) NSArray * additionalTagIDs;                                                       //@synthesize additionalTagIDs=_additionalTagIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchEditorialSectionTags;                                           //@synthesize shouldFetchEditorialSectionTags=_shouldFetchEditorialSectionTags - In the implementation block
@property (nonatomic,retain) FCCachePolicy * forYouConfigCachePolicy;                                        //@synthesize forYouConfigCachePolicy=_forYouConfigCachePolicy - In the implementation block
@property (nonatomic,retain) FCCachePolicy * articleListCachePolicy;                                         //@synthesize articleListCachePolicy=_articleListCachePolicy - In the implementation block
@property (nonatomic,retain) FCCachePolicy * editorialSectionTagCachePolicy;                                 //@synthesize editorialSectionTagCachePolicy=_editorialSectionTagCachePolicy - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                                    //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
@property (nonatomic,copy) id headlinesAndTagsCompletionHandler;                                             //@synthesize headlinesAndTagsCompletionHandler=_headlinesAndTagsCompletionHandler - In the implementation block
-(void)setPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)shouldFetchEditorialSectionTags;
-(void)setResultTagsByID:(NSDictionary *)arg1 ;
-(FCForYouConfig *)resultForYouConfig;
-(void)setResultHeadlinesByArticleListID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultTagsByID;
-(void)setShouldFetchEditorialSectionTags:(BOOL)arg1 ;
-(FCCachePolicy *)articleListCachePolicy;
-(void)setEditorialSectionTagCachePolicy:(FCCachePolicy *)arg1 ;
-(void)setForYouConfig:(FCForYouConfig *)arg1 ;
-(NSError *)error;
-(id)_edgeCacheHint;
-(void)setError:(NSError *)arg1 ;
-(FCCachePolicy *)editorialSectionTagCachePolicy;
-(void)setResultForYouConfig:(FCForYouConfig *)arg1 ;
-(id)headlinesAndTagsCompletionHandler;
-(id<FCForYouBridgedConfigurationParser>)bridgedConfigurationParser;
-(id<FCFeedPersonalizing>)personalizer;
-(long long)fields;
-(id<FCContentContext>)context;
-(void)setAdditionalArticleListIDs:(NSArray *)arg1 ;
-(void)setResultHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(void)setAdditionalTagIDs:(NSArray *)arg1 ;
-(void)setHeadlinesAndTagsCompletionHandler:(id)arg1 ;
-(id)localTodayFeedConfiguration;
-(void)setResultArticleListsByID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultArticleListsByID;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(NSDictionary *)resultHeadlinesByArticleID;
-(FCForYouConfig *)forYouConfig;
-(FCCachePolicy *)forYouConfigCachePolicy;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSDictionary *)resultHeadlinesByArticleListID;
-(void)setBridgedConfigurationParser:(id<FCForYouBridgedConfigurationParser>)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id)headlinesCompletionHandler;
-(void)setForYouConfigCachePolicy:(FCCachePolicy *)arg1 ;
-(NSArray *)additionalTagIDs;
-(void)setFields:(long long)arg1 ;
-(NSArray *)additionalArticleListIDs;
-(id<FCCoreConfiguration>)configuration;
-(void)setArticleListCachePolicy:(FCCachePolicy *)arg1 ;
@end

