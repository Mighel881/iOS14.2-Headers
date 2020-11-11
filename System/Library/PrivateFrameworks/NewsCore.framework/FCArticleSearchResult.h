/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCHeadlineProviding;
@class NSString, SFSearchResult;

@interface FCArticleSearchResult : NSObject {

	NSString* _articleID;
	id<FCHeadlineProviding> _deflatedHeadline;
	id<FCHeadlineProviding> _inflatedHeadline;
	SFSearchResult* _searchResult;

}

@property (nonatomic,retain) SFSearchResult * searchResult;                           //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineProviding> deflatedHeadline;              //@synthesize deflatedHeadline=_deflatedHeadline - In the implementation block
@property (nonatomic,retain) id<FCHeadlineProviding> inflatedHeadline;                //@synthesize inflatedHeadline=_inflatedHeadline - In the implementation block
-(SFSearchResult *)searchResult;
-(NSString *)articleID;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2 ;
-(id<FCHeadlineProviding>)deflatedHeadline;
-(id<FCHeadlineProviding>)inflatedHeadline;
-(void)setInflatedHeadline:(id<FCHeadlineProviding>)arg1 ;
@end
