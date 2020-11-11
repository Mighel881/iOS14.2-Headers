/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SKUIRedeemIdTableViewCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol SKUIRedeemIdManagerDelegate;
@class UITableView, NSIndexPath, SKUIClientContext, SKUIPinnedFooterView, NSString;

@interface SKUIRedeemIdManager : NSObject <SKUIRedeemIdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource> {

	id<SKUIRedeemIdManagerDelegate> _delegate;
	UITableView* _tableView;
	NSIndexPath* _activeIndexPath;
	SKUIClientContext* _clientContext;
	SKUIPinnedFooterView* _pinnedFooterView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                            //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSIndexPath * activeIndexPath;                                //@synthesize activeIndexPath=_activeIndexPath - In the implementation block
@property (nonatomic,retain) SKUIPinnedFooterView * pinnedFooterView;                      //@synthesize pinnedFooterView=_pinnedFooterView - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemIdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<SKUIRedeemIdManagerDelegate>)delegate;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(id)initWithClientContext:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setDelegate:(id<SKUIRedeemIdManagerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(SKUIClientContext *)clientContext;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setFooterHidden:(BOOL)arg1 ;
-(void)dismissActiveCell;
-(void)handleNextPressed;
-(void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2 ;
-(void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2 ;
-(id)_disclosureAttributedString;
-(NSIndexPath *)activeIndexPath;
-(void)setActiveIndexPath:(NSIndexPath *)arg1 ;
-(long long)_autoCapitalizationTypeForIndexPath:(id)arg1 ;
-(double)_heightForDisclosureFooter;
-(SKUIPinnedFooterView *)pinnedFooterView;
-(id)_placeholderTextForIndexPath:(id)arg1 ;
-(long long)_keyboardTypeForIndexPath:(id)arg1 ;
-(long long)_returnKeyTypeForIndexPath:(id)arg1 ;
-(id)_nextIndexPath:(id)arg1 ;
-(id)_pcLinkString;
-(id)_regulationsLinkString;
-(double)_tableViewNonFooterContentHeight;
-(void)setPinnedFooterView:(SKUIPinnedFooterView *)arg1 ;
@end
