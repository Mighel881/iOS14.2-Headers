/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSArray, NSString;

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <FCFeedTransforming> {

	unsigned long long _limit;
	id<FCFeedPersonalizing> _feedPersonalizer;
	long long _sortOptions;
	NSArray* _preselectedItems;

}

@property (assign,nonatomic) unsigned long long limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (assign,nonatomic) long long sortOptions;                                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (nonatomic,retain) NSArray * preselectedItems;                            //@synthesize preselectedItems=_preselectedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 preselectedItems:(id)arg4 ;
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 ;
+(id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setSortOptions:(long long)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id)transformFeedItems:(id)arg1 ;
-(unsigned long long)limit;
-(void)setPreselectedItems:(NSArray *)arg1 ;
-(NSArray *)preselectedItems;
-(long long)sortOptions;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
@end

