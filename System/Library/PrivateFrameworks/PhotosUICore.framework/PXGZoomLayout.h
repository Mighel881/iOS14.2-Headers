/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _settingSublayouts;
	BOOL _isUpdatingSublayouts;
	PXGLayout* _primaryLayer;
	NSArray* _layers;
	id _anchorObjectReference;
	CGPoint _anchorViewportCenter;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXGLayout * primaryLayer;                //@synthesize primaryLayer=_primaryLayer - In the implementation block
@property (nonatomic,readonly) NSArray * layers;                        //@synthesize layers=_layers - In the implementation block
@property (nonatomic,retain) id anchorObjectReference;                  //@synthesize anchorObjectReference=_anchorObjectReference - In the implementation block
@property (assign,nonatomic) CGPoint anchorViewportCenter;              //@synthesize anchorViewportCenter=_anchorViewportCenter - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                      //@synthesize padding=_padding - In the implementation block
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(NSArray *)layers;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)userInterfaceDirectionDidChange;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(id)init;
-(CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2 ;
-(void)setAnchorViewportCenter:(CGPoint)arg1 ;
-(void)viewEnvironmentDidChange;
-(void)safeAreaInsetsDidChange;
-(CGPoint)anchorViewportCenter;
-(void)setAnchorObjectReference:(id)arg1 ;
-(void)didChangeSublayoutOrigins;
-(void)visibleRectDidChange;
-(void)_configureSublayouts;
-(id)anchorObjectReference;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(void)update;
-(UIEdgeInsets)padding;
-(id)axSpriteIndexes;
-(void)referenceSizeDidChange;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setLayers:(id)arg1 primaryLayer:(id)arg2 ;
-(PXGLayout *)primaryLayer;
-(void)_updateSublayoutGeometries;
-(void)screenScaleDidChange;
@end
