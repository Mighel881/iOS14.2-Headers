/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXForYouRankable;
@class NSDate;

@interface PXGadgetPriorityEntry : NSObject {

	id<PXForYouRankable> _rankable;
	NSDate* _cachedPriorityDate;
	long long _currentRank;

}

@property (nonatomic,retain) id<PXForYouRankable> rankable;              //@synthesize rankable=_rankable - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (assign,nonatomic) long long currentRank;                      //@synthesize currentRank=_currentRank - In the implementation block
-(id<PXForYouRankable>)rankable;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(void)setRankable:(id<PXForYouRankable>)arg1 ;
-(long long)currentRank;
-(void)setCurrentRank:(long long)arg1 ;
@end

