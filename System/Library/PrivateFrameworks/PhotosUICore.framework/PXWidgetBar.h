/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>

@protocol PXWidgetBarDelegate, PXAnonymousView;
@class PXScrollViewController, PXTilingController, PXWidgetBarSpec, NSString, PXBasicTileAnimator, NSMutableSet, PXWidgetBarLayout, NSObject;

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX24 _needsUpdateFlags;
	SCD_Struct_PX59 _delegateRespondsTo;
	BOOL _allowUserInteractionWithSubtitle;
	PXScrollViewController* _scrollViewController;
	id<PXWidgetBarDelegate> _delegate;
	PXTilingController* _tilingController;
	PXWidgetBarSpec* _spec;
	NSString* _title;
	NSString* _subtitle;
	NSString* _caption;
	NSString* _disclosureTitle;
	PXBasicTileAnimator* __tileAnimator;
	NSMutableSet* __tilesInUse;
	double __viewHeight;
	PXWidgetBarLayout* __layout;
	NSObject*<PXAnonymousView> _view;

}

@property (nonatomic,readonly) PXBasicTileAnimator * _tileAnimator;                               //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                        //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (assign,setter=_setViewHeight:,nonatomic) double _viewHeight;                           //@synthesize _viewHeight=__viewHeight - In the implementation block
@property (nonatomic,readonly) PXWidgetBarLayout * _layout;                                       //@synthesize _layout=__layout - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousView> view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) double viewHeight; 
@property (nonatomic,__weak,readonly) PXScrollViewController * scrollViewController;              //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetBarDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                             //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,retain) PXWidgetBarSpec * spec;                                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * caption;                                                    //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * disclosureTitle;                                            //@synthesize disclosureTitle=_disclosureTitle - In the implementation block
@property (assign,nonatomic) BOOL allowUserInteractionWithSubtitle;                               //@synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXScrollViewController *)scrollViewController;
-(void)updateView;
-(PXWidgetBarLayout *)_layout;
-(id)init;
-(id<PXWidgetBarDelegate>)delegate;
-(NSObject*<PXAnonymousView>)view;
-(NSString *)subtitle;
-(id)createView;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)viewHeight;
-(PXWidgetBarSpec *)spec;
-(PXTilingController *)tilingController;
-(NSMutableSet *)_tilesInUse;
-(id)createTileAnimator;
-(void)_updateIfNeeded;
-(void)setDelegate:(id<PXWidgetBarDelegate>)arg1 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void)setSpec:(PXWidgetBarSpec *)arg1 ;
-(NSString *)title;
-(void)_updateLayoutIfNeeded;
-(NSString *)disclosureTitle;
-(void)setDisclosureTitle:(NSString *)arg1 ;
-(void)_invalidateLayout;
-(id)initWithScrollViewController:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)setCaption:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)checkInTile:(id)arg1 ;
-(id)checkOutTileWithKind:(long long)arg1 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(PXBasicTileAnimator *)_tileAnimator;
-(NSString *)caption;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
-(void)didSelectSubtitle;
-(void)didSelectDisclosureAffordance;
-(void)_setViewHeight:(double)arg1 ;
-(void)setAllowUserInteractionWithSubtitle:(BOOL)arg1 ;
-(void)invalidateView;
-(void)_updateViewIfNeeded;
-(void)invalidateViewHeight;
-(void)_updateViewHeightIfNeeded;
-(double)_viewHeight;
-(BOOL)allowUserInteractionWithSubtitle;
@end
