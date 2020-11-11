/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/AKSignatureCreationControllerDelegate.h>

@protocol AKSignaturesViewControllerDelegate;
@class AKController, UIColor, UITableView, UINavigationBar, NSArray, UIResponder, NSString;

@interface AKSignaturesViewController_iOS : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate> {

	BOOL _presentedInAlert;
	BOOL _showsNavigationBar;
	BOOL _allowsEdits;
	BOOL _showAddEditButtonRow;
	AKController* _controller;
	id<AKSignaturesViewControllerDelegate> _delegate;
	UIColor* _tableBackgroundColor;
	UITableView* _tableView;
	UINavigationBar* _navBar;
	NSArray* _rightBarItems;
	NSArray* _editingLeftBarItems;
	NSArray* _leftBarItems;
	UIResponder* _responderToRestore;

}

@property (nonatomic,retain) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                            //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) NSArray * rightBarItems;                                             //@synthesize rightBarItems=_rightBarItems - In the implementation block
@property (nonatomic,retain) NSArray * editingLeftBarItems;                                       //@synthesize editingLeftBarItems=_editingLeftBarItems - In the implementation block
@property (nonatomic,retain) NSArray * leftBarItems;                                              //@synthesize leftBarItems=_leftBarItems - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * responderToRestore;                             //@synthesize responderToRestore=_responderToRestore - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;                                    //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) id<AKSignaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double idealHeight; 
@property (assign,nonatomic) BOOL presentedInAlert;                                               //@synthesize presentedInAlert=_presentedInAlert - In the implementation block
@property (assign,nonatomic) BOOL showsNavigationBar;                                             //@synthesize showsNavigationBar=_showsNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL allowsEdits;                                                    //@synthesize allowsEdits=_allowsEdits - In the implementation block
@property (assign,nonatomic) BOOL showAddEditButtonRow;                                           //@synthesize showAddEditButtonRow=_showAddEditButtonRow - In the implementation block
@property (nonatomic,retain) UIColor * tableBackgroundColor;                                      //@synthesize tableBackgroundColor=_tableBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AKController *)controller;
-(BOOL)becomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(id<AKSignaturesViewControllerDelegate>)delegate;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(id)initWithController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<AKSignaturesViewControllerDelegate>)arg1 ;
-(UINavigationBar *)navBar;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setController:(AKController *)arg1 ;
-(long long)positionForBar:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIColor *)tableBackgroundColor;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_signatures;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)preferredContentSize;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setPresentedInAlert:(BOOL)arg1 ;
-(void)setShowsNavigationBar:(BOOL)arg1 ;
-(void)setAllowsEdits:(BOOL)arg1 ;
-(void)setTableBackgroundColor:(UIColor *)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(void)setResponderToRestore:(UIResponder *)arg1 ;
-(UIResponder *)responderToRestore;
-(BOOL)presentedInAlert;
-(double)idealHeight;
-(void)_configureUI;
-(BOOL)showsNavigationBar;
-(BOOL)allowsEdits;
-(void)_continueToCreateSignature:(id)arg1 ;
-(void)_cancelPicker:(id)arg1 ;
-(void)setRightBarItems:(NSArray *)arg1 ;
-(void)setLeftBarItems:(NSArray *)arg1 ;
-(NSArray *)leftBarItems;
-(NSArray *)rightBarItems;
-(void)_deleteSignature:(id)arg1 ;
-(BOOL)showAddEditButtonRow;
-(void)setShowAddEditButtonRow:(BOOL)arg1 ;
-(NSArray *)editingLeftBarItems;
-(void)setEditingLeftBarItems:(NSArray *)arg1 ;
@end
