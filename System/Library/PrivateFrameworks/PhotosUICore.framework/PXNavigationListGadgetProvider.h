/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXNavigationListDataSectionManagerObserver.h>
#import <libobjc.A.dylib/PXPreferencesObserver.h>

@class PXExtendedTraitCollection, PXNavigationListDataSectionManager, NSPredicate, NSNumber, NSString;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver> {

	BOOL _shouldShowNavigationListOnIpad;
	BOOL _isPresentedInPicker;
	BOOL _backgroundFetchingIsActive;
	unsigned long long _type;
	PXExtendedTraitCollection* _traitCollection;
	PXNavigationListDataSectionManager* _dataSourceManager;
	NSPredicate* _assetsFilterPredicate;
	NSNumber* _hiddenAlbumVisibleCache;

}

@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                       //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) PXNavigationListDataSectionManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInPicker;                                          //@synthesize isPresentedInPicker=_isPresentedInPicker - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNavigationListForDeviceAndLayoutClass; 
@property (nonatomic,readonly) NSPredicate * assetsFilterPredicate;                               //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
@property (nonatomic,retain) NSNumber * hiddenAlbumVisibleCache;                                  //@synthesize hiddenAlbumVisibleCache=_hiddenAlbumVisibleCache - In the implementation block
@property (assign,nonatomic) BOOL backgroundFetchingIsActive;                                     //@synthesize backgroundFetchingIsActive=_backgroundFetchingIsActive - In the implementation block
@property (assign,nonatomic) BOOL shouldShowNavigationListOnIpad;                                 //@synthesize shouldShowNavigationListOnIpad=_shouldShowNavigationListOnIpad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXNavigationListDataSectionManager *)dataSourceManager;
-(PXExtendedTraitCollection *)traitCollection;
-(void)loadDataForGadgets;
-(void)_initializeDataSourceManagerIfNeeded;
-(void)setHiddenAlbumVisibleCache:(NSNumber *)arg1 ;
-(id)init;
-(void)startLoadingRemainingData;
-(void)setShouldShowNavigationListOnIpad:(BOOL)arg1 ;
-(void)preferencesDidChange;
-(BOOL)shouldShowNavigationListOnIpad;
-(BOOL)isPresentedInPicker;
-(void)generateGadgets;
-(BOOL)backgroundFetchingIsActive;
-(BOOL)shouldShowNavigationListForDeviceAndLayoutClass;
-(id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(BOOL)arg3 assetsFilterPredicate:(id)arg4 ;
-(void)setBackgroundFetchingIsActive:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)type;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(NSNumber *)hiddenAlbumVisibleCache;
-(void)pauseLoadingRemainingData;
-(unsigned long long)estimatedNumberOfGadgets;
-(BOOL)_shouldHiddenAlbumBeVisible;
-(void)_updateGadgets;
-(void)setDataSourceManager:(PXNavigationListDataSectionManager *)arg1 ;
-(NSPredicate *)assetsFilterPredicate;
-(void)dealloc;
@end

