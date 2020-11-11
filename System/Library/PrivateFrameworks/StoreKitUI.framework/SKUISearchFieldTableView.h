/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUITrendingSearchPage, SKUITrendingSearchPageView, SKUITrendingSearchProvider;

@interface SKUISearchFieldTableView : UITableView {

	SKUITrendingSearchPage* _page;
	SKUITrendingSearchPageView* _pageView;
	BOOL _trendingSearchesVisible;
	SKUITrendingSearchProvider* _trendingSearchProvider;
	id<SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;

}

@property (nonatomic,retain) SKUITrendingSearchProvider * trendingSearchProvider;                               //@synthesize trendingSearchProvider=_trendingSearchProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> trendingSearchDelegate;              //@synthesize trendingSearchDelegate=_trendingSearchDelegate - In the implementation block
@property (assign,nonatomic) BOOL trendingSearchesVisible;                                                      //@synthesize trendingSearchesVisible=_trendingSearchesVisible - In the implementation block
-(void)_reloadData;
-(void)layoutSubviews;
-(void)_reloadView;
-(SKUITrendingSearchProvider *)trendingSearchProvider;
-(void)_setTrendingResponse:(id)arg1 error:(id)arg2 ;
-(void)setTrendingSearchProvider:(SKUITrendingSearchProvider *)arg1 ;
-(void)setTrendingSearchDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(void)setTrendingSearchesVisible:(BOOL)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)trendingSearchDelegate;
-(BOOL)trendingSearchesVisible;
@end
