/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenTopBar, NSString;

@interface PUReviewScreenTopBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver> {

	PUBrowsingViewModel* _browsingViewModel;
	PUReviewScreenBarsModel* _barsModel;
	PUReviewScreenTopBar* __topBar;

}

@property (setter=_setTopBar:,nonatomic,retain) PUReviewScreenTopBar * _topBar;              //@synthesize _topBar=__topBar - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                        //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * barsModel;                            //@synthesize barsModel=_barsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PUReviewScreenTopBar *)_topBar;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)becomeReusable;
-(PUReviewScreenBarsModel *)barsModel;
-(void)setBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)_updateControls;
-(void)_updateBarLayout;
-(void)_updateVisibilityAnimated:(BOOL)arg1 ;
-(void)_handleDoneButtonTapped:(id)arg1 ;
-(void)_handleRetakeButtonTapped:(id)arg1 ;
-(void)_setTopBar:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)loadView;
@end
