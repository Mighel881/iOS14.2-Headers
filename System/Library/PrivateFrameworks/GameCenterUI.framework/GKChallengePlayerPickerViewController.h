/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class NSString, GKChallenge, NSArray, UILabel, UIButton, UITextField, UIView, UISearchBar, NSLayoutConstraint, UIViewController;

@interface GKChallengePlayerPickerViewController : GKDashboardCollectionViewController {

	BOOL _shouldIgnoreClearSelection;
	BOOL _shouldApplyInitialOffset;
	NSString* _message;
	/*^block*/id _completionHandler;
	GKChallenge* _challenge;
	NSArray* _initiallySelectedPlayers;
	UILabel* _descriptionLabel;
	UIButton* _sendButton;
	UITextField* _messageField;
	UIButton* _customizeMessageButton;
	UIView* _actionView;
	UIView* _titleView;
	UISearchBar* _searchBar;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	UIView* _scrollingHeader;
	NSLayoutConstraint* _scrollingHeaderTopConstraint;
	double _scrollingHeaderTopConstraintConstant;
	NSLayoutConstraint* _customizeMessageBottomConstraint;
	double _initialCustomizeMessageBottomConstraintConstant;
	UIViewController* _composeController;
	UIEdgeInsets _initialInsets;

}

@property (nonatomic,retain) GKChallenge * challenge;                                             //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * initiallySelectedPlayers;                                  //@synthesize initiallySelectedPlayers=_initiallySelectedPlayers - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreClearSelection;                                     //@synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UIButton * sendButton;                                               //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic) UITextField * messageField;                                          //@synthesize messageField=_messageField - In the implementation block
@property (assign,nonatomic) UIButton * customizeMessageButton;                                   //@synthesize customizeMessageButton=_customizeMessageButton - In the implementation block
@property (nonatomic,retain) UIView * actionView;                                                 //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                             //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) UIView * scrollingHeader;                                            //@synthesize scrollingHeader=_scrollingHeader - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * scrollingHeaderTopConstraint;                   //@synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint - In the implementation block
@property (assign,nonatomic) double scrollingHeaderTopConstraintConstant;                         //@synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant - In the implementation block
@property (assign,nonatomic) UIEdgeInsets initialInsets;                                          //@synthesize initialInsets=_initialInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyInitialOffset;                                       //@synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * customizeMessageBottomConstraint;               //@synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint - In the implementation block
@property (assign,nonatomic) double initialCustomizeMessageBottomConstraintConstant;              //@synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant - In the implementation block
@property (nonatomic,retain) UIViewController * composeController;                                //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
-(UILabel *)titleLabel;
-(UIButton *)cancelButton;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)loadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)titleView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)completionHandler;
-(UIButton *)sendButton;
-(void)addMessage:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(NSString *)message;
-(void)setSendButton:(UIButton *)arg1 ;
-(UIView *)actionView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setInitiallySelectedPlayers:(NSArray *)arg1 ;
-(void)setScrollingHeaderTopConstraintConstant:(double)arg1 ;
-(void)setInitialInsets:(UIEdgeInsets)arg1 ;
-(void)setShouldApplyInitialOffset:(BOOL)arg1 ;
-(void)adjustCustomizeMessageConstraint;
-(void)applyInitialContentOffset;
-(void)setShouldIgnoreClearSelection:(BOOL)arg1 ;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)selectPlayersAtIndexPaths:(id)arg1 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(id)initWithChallenge:(id)arg1 initiallySelectedPlayers:(id)arg2 ;
-(NSArray *)initiallySelectedPlayers;
-(BOOL)shouldIgnoreClearSelection;
-(UIButton *)customizeMessageButton;
-(void)setCustomizeMessageButton:(UIButton *)arg1 ;
-(void)setMessageField:(UITextField *)arg1 ;
-(UIView *)scrollingHeader;
-(void)setScrollingHeader:(UIView *)arg1 ;
-(NSLayoutConstraint *)scrollingHeaderTopConstraint;
-(void)setScrollingHeaderTopConstraint:(NSLayoutConstraint *)arg1 ;
-(double)scrollingHeaderTopConstraintConstant;
-(UIEdgeInsets)initialInsets;
-(BOOL)shouldApplyInitialOffset;
-(UIViewController *)composeController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)customizeMessageBottomConstraint;
-(void)setCustomizeMessageBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(double)initialCustomizeMessageBottomConstraintConstant;
-(void)setInitialCustomizeMessageBottomConstraintConstant:(double)arg1 ;
-(void)setComposeController:(UIViewController *)arg1 ;
-(void)setTitleView:(UIView *)arg1 ;
-(GKChallenge *)challenge;
-(void)setCompletionHandler:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)addVisualEffectViewForView:(id)arg1 ;
-(void)configureCollectionView;
-(void)updateButtonEnableState;
-(void)setActionView:(UIView *)arg1 ;
-(UISearchBar *)searchBar;
-(UILabel *)descriptionLabel;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)send:(id)arg1 ;
-(UITextField *)messageField;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)clearSelection;
-(void)setSearchText:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
@end

