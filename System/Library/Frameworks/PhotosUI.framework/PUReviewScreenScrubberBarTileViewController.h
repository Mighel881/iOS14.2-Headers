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

@class PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenScrubberBar, NSString;

@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver> {

	PUBrowsingViewModel* _browsingViewModel;
	PUReviewScreenBarsModel* _barsModel;
	PUReviewScreenScrubberBar* __scrubberBar;

}

@property (setter=_setScrubberBar:,nonatomic,retain) PUReviewScreenScrubberBar * _scrubberBar;              //@synthesize _scrubberBar=__scrubberBar - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                       //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * barsModel;                                           //@synthesize barsModel=_barsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)becomeReusable;
-(PUReviewScreenBarsModel *)barsModel;
-(void)setBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)_updateVisibilityAnimated:(BOOL)arg1 ;
-(PUReviewScreenScrubberBar *)_scrubberBar;
-(void)_setScrubberBar:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)loadView;
-(void)_updateViews;
@end

