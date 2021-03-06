/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DASearchQueryConsumer;
#import <CDDataAccessExpress/CDDataAccessExpress-Structs.h>
@class NSString, NSPredicate;

@interface DASearchQuery : NSObject {

	int _timeLimit;
	NSString* _searchString;
	NSPredicate* _searchPredicate;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	unsigned long long _state;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                            //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSRange)range;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned)maxResults;
-(id)dictionaryRepresentation;
-(unsigned long long)state;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)description;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(void)setTimeLimit:(int)arg1 ;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(BOOL)isQueryRunning;
-(NSPredicate *)searchPredicate;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(NSString *)searchID;
-(int)timeLimit;
-(id<DASearchQueryConsumer>)consumer;
@end

