/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListController.h>
#import <libobjc.A.dylib/PXGadget.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSString;

@interface PXNavigationListGadget : PXNavigationListController <PXGadget, PXNavigableCollectionContainer> {

	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	CGRect _visibleContentRect;

}

@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                             //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)localizedTitle;
-(id<PXGadgetDelegate>)delegate;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(id)_listItemForCollection:(id)arg1 ;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGRect)visibleContentRect;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)headerStyle;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(void)_updateTableViewLayoutMargins;
-(void)contentHeightDidChange;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)contentViewController;
@end

