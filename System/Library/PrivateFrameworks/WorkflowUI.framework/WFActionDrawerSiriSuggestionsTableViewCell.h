/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate.h>

@protocol WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate;
@class WFActionDrawerSection, WFActionDrawerCoordinator, UIViewController, WFModuleTitleView, UIButton, UICollectionView, INIntent, UIImage, WFActionDrawerSiriSuggestionsCollectionViewManager, NSLayoutConstraint;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> {

	WFActionDrawerSection* _section;
	WFActionDrawerCoordinator* _coordinator;
	UIViewController* _viewController;
	id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> _dailyRoutineDelegate;
	WFModuleTitleView* _titleView;
	UIButton* _infoButton;
	UICollectionView* _donationsCollectionView;
	INIntent* _intent;
	UIImage* _icon;
	WFActionDrawerSiriSuggestionsCollectionViewManager* _donationsCollectionViewManager;
	NSLayoutConstraint* _collectionViewHeightConstraint;

}

@property (assign,nonatomic,__weak) WFActionDrawerCoordinator * coordinator;                                                              //@synthesize coordinator=_coordinator - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> dailyRoutineDelegate;              //@synthesize dailyRoutineDelegate=_dailyRoutineDelegate - In the implementation block
@property (assign,nonatomic,__weak) WFModuleTitleView * titleView;                                                                        //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * infoButton;                                                                                //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * donationsCollectionView;                                                           //@synthesize donationsCollectionView=_donationsCollectionView - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                                                                           //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFActionDrawerSiriSuggestionsCollectionViewManager * donationsCollectionViewManager;                         //@synthesize donationsCollectionViewManager=_donationsCollectionViewManager - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionViewHeightConstraint;                                                         //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) WFActionDrawerSection * section;                                                                           //@synthesize section=_section - In the implementation block
-(UIButton *)infoButton;
-(WFActionDrawerSection *)section;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(WFModuleTitleView *)titleView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(INIntent *)intent;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setCoordinator:(WFActionDrawerCoordinator *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleView:(WFModuleTitleView *)arg1 ;
-(WFActionDrawerCoordinator *)coordinator;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
-(void)setCollectionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2 ;
-(void)configureForDailyRoutines:(BOOL)arg1 ;
-(void)configureWithActionDrawerSection:(id)arg1 coordinator:(id)arg2 viewController:(id)arg3 ;
-(void)configureWithActionDrawerSection:(id)arg1 dailyRoutineDelegate:(id)arg2 viewController:(id)arg3 ;
-(void)configureLoading;
-(void)configureWithActionDrawerSection:(id)arg1 ;
-(void)infoButtonPressed;
-(id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate>)dailyRoutineDelegate;
-(void)setDailyRoutineDelegate:(id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate>)arg1 ;
-(UICollectionView *)donationsCollectionView;
-(void)setDonationsCollectionView:(UICollectionView *)arg1 ;
-(WFActionDrawerSiriSuggestionsCollectionViewManager *)donationsCollectionViewManager;
-(void)setDonationsCollectionViewManager:(WFActionDrawerSiriSuggestionsCollectionViewManager *)arg1 ;
@end

