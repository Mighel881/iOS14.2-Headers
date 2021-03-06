/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCCoreConfiguration;
@class NSArray, NSDictionary;

@interface FCHeadlinesUpdateOperation : FCOperation {

	NSArray* _headlines;
	id<FCContentContext> _context;
	id<FCCoreConfiguration> _configuration;
	double _maxArticleAge;
	/*^block*/id _updateCompletion;
	NSDictionary* _resultHeadlinesByArticleID;

}

@property (nonatomic,copy) NSDictionary * resultHeadlinesByArticleID;              //@synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID - In the implementation block
@property (nonatomic,copy) NSArray * headlines;                                    //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) double maxArticleAge;                                 //@synthesize maxArticleAge=_maxArticleAge - In the implementation block
@property (nonatomic,copy) id updateCompletion;                                    //@synthesize updateCompletion=_updateCompletion - In the implementation block
-(NSArray *)headlines;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)init;
-(void)setUpdateCompletion:(id)arg1 ;
-(void)setMaxArticleAge:(double)arg1 ;
-(id<FCContentContext>)context;
-(void)setResultHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(double)maxArticleAge;
-(void)setHeadlines:(NSArray *)arg1 ;
-(NSDictionary *)resultHeadlinesByArticleID;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)updateCompletion;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
@end

