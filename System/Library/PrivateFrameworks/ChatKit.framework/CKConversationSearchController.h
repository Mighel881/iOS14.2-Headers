/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchController.h>

@class NSSet, _PSSuggester, NSArray;

@interface CKConversationSearchController : CKSearchController {

	BOOL _gotResults;
	BOOL _searchTerminated;
	NSSet* _intermediaryResults;
	_PSSuggester* _zkwSuggester;
	NSArray* _currentZKWSuggestions;

}

@property (assign,nonatomic) BOOL gotResults;                              //@synthesize gotResults=_gotResults - In the implementation block
@property (nonatomic,retain) NSSet * intermediaryResults;                  //@synthesize intermediaryResults=_intermediaryResults - In the implementation block
@property (assign,nonatomic) BOOL searchTerminated;                        //@synthesize searchTerminated=_searchTerminated - In the implementation block
@property (nonatomic,retain) _PSSuggester * zkwSuggester;                  //@synthesize zkwSuggester=_zkwSuggester - In the implementation block
@property (nonatomic,retain) NSArray * currentZKWSuggestions;              //@synthesize currentZKWSuggestions=_currentZKWSuggestions - In the implementation block
+(id)sectionIdentifier;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
+(Class)cellClass;
+(BOOL)supportsQuicklookForResult:(id)arg1 ;
+(id)reuseIdentifier;
+(BOOL)supportsMenuInteraction;
-(void)didSelectResult:(id)arg1 ;
-(BOOL)gotResults;
-(void)setGotResults:(BOOL)arg1 ;
-(BOOL)searchTerminated;
-(NSSet *)intermediaryResults;
-(void)setIntermediaryResults:(NSSet *)arg1 ;
-(void)setSearchTerminated:(BOOL)arg1 ;
-(id)rankingQueriesWithText:(id)arg1 ;
-(id)fetchAttributes;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(BOOL)wantsHeaderSection;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(void)searchEnded;
-(id)_appendRecencyToRankingQuery:(id)arg1 hours:(unsigned long long)arg2 ;
-(void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(_PSSuggester *)zkwSuggester;
-(void)_searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)setCurrentZKWSuggestions:(NSArray *)arg1 ;
-(NSArray *)currentZKWSuggestions;
-(void)setZkwSuggester:(_PSSuggester *)arg1 ;
-(id)_sortedAndRankedItemsWithItems:(id)arg1 ;
-(double)interGroupSpacing;
-(id)filterQueries;
@end

