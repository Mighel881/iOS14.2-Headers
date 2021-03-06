/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKitUI/WFInsetTableViewController.h>

@protocol WFDiagnosticsProviderContext;
@class NSOrderedSet, WFNetworkSettingsCellFactory, WFHyperlinkFooterView;

@interface WFDiagnosticsTableViewController : WFInsetTableViewController {

	BOOL _useInsetGroupedTableView;
	id<WFDiagnosticsProviderContext> _context;
	NSOrderedSet* _sections;
	WFNetworkSettingsCellFactory* _cellFactory;
	WFHyperlinkFooterView* _linkFooterView;

}

@property (nonatomic,retain) id<WFDiagnosticsProviderContext> context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sections;                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsCellFactory * cellFactory;              //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) WFHyperlinkFooterView * linkFooterView;                  //@synthesize linkFooterView=_linkFooterView - In the implementation block
@property (assign,nonatomic) BOOL useInsetGroupedTableView;                           //@synthesize useInsetGroupedTableView=_useInsetGroupedTableView - In the implementation block
-(void)setSections:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)sections;
-(void)_refresh;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id<WFDiagnosticsProviderContext>)context;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setContext:(id<WFDiagnosticsProviderContext>)arg1 ;
-(WFHyperlinkFooterView *)linkFooterView;
-(id)initWithDiagnosticsContext:(id)arg1 useInsetGroupedTableView:(BOOL)arg2 ;
-(id)_defaultSections;
-(void)setCellFactory:(WFNetworkSettingsCellFactory *)arg1 ;
-(WFNetworkSettingsCellFactory *)cellFactory;
-(BOOL)useInsetGroupedTableView;
-(id)initWithDiagnosticsContext:(id)arg1 ;
-(void)setLinkFooterView:(WFHyperlinkFooterView *)arg1 ;
-(void)setUseInsetGroupedTableView:(BOOL)arg1 ;
@end

