/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/PUStackedAlbumTransitionDelegate.h>
#import <libobjc.A.dylib/PUCloudSharedAlbumViewControllerDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>

@class PUAlbumsGadgetProvider, PUSessionInfo, PUPhotoPinchGestureRecognizer, NSUserActivity, PUAlbumListViewControllerSpec, NSString;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer> {

	PUAlbumsGadgetProvider* _provider;
	PUSessionInfo* _sessionInfo;
	PUPhotoPinchGestureRecognizer* _pinchGestureRecognizer;
	NSUserActivity* _siriActionActivity;

}

@property (nonatomic,readonly) PUPhotoPinchGestureRecognizer * pinchGestureRecognizer;                   //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PUAlbumListViewControllerSpec * albumListViewControllerSpec; 
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                        //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,readonly) PUAlbumsGadgetProvider * provider;                                        //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_showsHorizontalScrollIndicator;
-(void)setGadgetSpec:(id)arg1 ;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(PUPhotoPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)_handlePinch:(id)arg1 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forPHCollection:(id)arg3 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3 ;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(PUAlbumListViewControllerSpec *)albumListViewControllerSpec;
-(id)px_gridPresentation;
-(void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(id)initWithAlbumsGadgetProvider:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)accessoryButtonType;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)siriActionActivity;
-(id)accessoryButtonTitle;
-(PUAlbumsGadgetProvider *)provider;
-(BOOL)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)_updateCollectionViewLayout;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)_navigateToCollection:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

