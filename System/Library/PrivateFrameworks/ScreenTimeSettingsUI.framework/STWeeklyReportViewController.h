/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class STUsageReport, NSArray, NSLayoutConstraint;

@interface STWeeklyReportViewController : UITableViewController {

	STUsageReport* _report;
	NSArray* _tableViewCells;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,readonly) STUsageReport * report;                 //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) NSArray * tableViewCells;                 //@synthesize tableViewCells=_tableViewCells - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)tableViewCells;
-(NSLayoutConstraint *)heightConstraint;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithData:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(STUsageReport *)report;
-(void)dealloc;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithUsageReport:(id)arg1 ;
-(void)_heightDidChange:(id)arg1 ;
-(void)setTableViewCells:(NSArray *)arg1 ;
@end

