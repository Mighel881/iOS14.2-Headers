/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@class UIView, UIActivityIndicatorView, PUAssetViewModel, NSString;

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	UIView* _successView;
	UIView* _errorView;
	UIActivityIndicatorView* _progressIndicatorView;
	BOOL __isPerformingChanges;
	PUAssetViewModel* _assetViewModel;

}

@property (assign,nonatomic) BOOL _isPerformingChanges;                      //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_isPerformingChanges;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)becomeReusable;
-(void)applyLayoutInfo:(id)arg1 ;
-(PUAssetViewModel *)assetViewModel;
-(void)_updateIfNeeded;
-(void)_updateStatusView;
-(void)set_isPerformingChanges:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

