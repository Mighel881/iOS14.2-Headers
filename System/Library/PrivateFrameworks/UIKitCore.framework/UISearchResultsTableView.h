/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIView, UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {

	double _offsetForNoResultsMessage;
	UIView* _topShadowView;
	UISearchDisplayController* _controller;

}

@property (assign,nonatomic,__weak) UISearchDisplayController * controller;                                        //@synthesize controller=_controller - In the implementation block
@property (setter=_setTopShadowView:,getter=_topShadowView,nonatomic,retain) UIView * _topShadowView; 
-(UISearchDisplayController *)controller;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(UIView *)_topShadowView;
-(void)_numberOfRowsDidChange;
-(void)_setTopShadowView:(id)arg1 ;
-(void)_setOffsetForNoResultsMessage:(double)arg1 ;
-(double)_offsetForNoResultsMessage;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

