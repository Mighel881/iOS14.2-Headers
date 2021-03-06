/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@protocol WFAutomationTypeChooserViewControllerDelegate;
@class WFHomeManager, NSString;

@interface WFAutomationTypeChooserViewController : UITableViewController <WFHomeManagerEventObserver> {

	id<WFAutomationTypeChooserViewControllerDelegate> _delegate;
	WFHomeManager* _homeManager;

}

@property (nonatomic,readonly) WFHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) id<WFAutomationTypeChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)automationTypeForHomeManager:(id)arg1 ;
-(id<WFAutomationTypeChooserViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(WFHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setDelegate:(id<WFAutomationTypeChooserViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)isModalInPresentation;
-(void)choosePersonalAutomation:(id)arg1 ;
-(void)chooseHomeAutomation:(id)arg1 ;
@end

