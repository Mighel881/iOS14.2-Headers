/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSArray, NSOrderedSet, NSLayoutConstraint, NSString;

@interface PUSearchRecentSearchesGadget : UITableViewController <PXGadget> {

	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	unsigned long long _accessoryButtonType;
	NSArray* _recentSearchesNew;
	NSOrderedSet* _recentSearches;
	NSLayoutConstraint* _separatorRegularTrailingConstraint;
	NSLayoutConstraint* _separatorCompactWidthConstraint;

}

@property (nonatomic,copy) NSArray * recentSearchesNew;                                            //@synthesize recentSearchesNew=_recentSearchesNew - In the implementation block
@property (nonatomic,copy) NSOrderedSet * recentSearches;                                          //@synthesize recentSearches=_recentSearches - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorRegularTrailingConstraint;              //@synthesize separatorRegularTrailingConstraint=_separatorRegularTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorCompactWidthConstraint;                 //@synthesize separatorCompactWidthConstraint=_separatorCompactWidthConstraint - In the implementation block
@property (nonatomic,readonly) unsigned long long accessoryButtonType;                             //@synthesize accessoryButtonType=_accessoryButtonType - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                            //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)localizedTitle;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_reloadData;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)headerStyle;
-(CGSize)contentSize;
-(unsigned long long)accessoryButtonType;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(void)_updateTableViewLayoutMargins;
-(void)viewLayoutMarginsDidChange;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setRecentSearches:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)recentSearches;
-(void)resetLineSeparatorInsets;
-(NSArray *)recentSearchesNew;
-(void)setRecentSearchesNew:(NSArray *)arg1 ;
-(NSLayoutConstraint *)separatorRegularTrailingConstraint;
-(void)setSeparatorRegularTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)separatorCompactWidthConstraint;
-(void)setSeparatorCompactWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)contentViewController;
-(void)dealloc;
@end
