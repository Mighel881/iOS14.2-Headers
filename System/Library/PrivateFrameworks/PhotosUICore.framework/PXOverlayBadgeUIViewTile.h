/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXOverlayBadgeTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class PXAssetBadgeManager, PXImageRequester, PXUIAssetBadgeView, NSString, UIView;

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile> {

	SCD_Struct_PX38 _needsUpdateFlags;
	PXAssetBadgeManager* _badgeManager;
	PXImageRequester* _imageRequester;
	unsigned long long __badgeOptions;
	PXUIAssetBadgeView* __badgeView;

}

@property (assign,setter=_setBadgeOptions:,nonatomic) unsigned long long _badgeOptions;              //@synthesize _badgeOptions=__badgeOptions - In the implementation block
@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                      //@synthesize _badgeView=__badgeView - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                      //@synthesize imageRequester=_imageRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXAssetBadgeManager * badgeManager;                                     //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,readonly) UIView * view; 
+(void)preloadResources;
-(void)becomeReusable;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)view;
-(PXImageRequester *)imageRequester;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)setBadgeManager:(PXAssetBadgeManager *)arg1 ;
-(void)layoutSubviews;
-(void)_updateBadgeViewIfNeeded;
-(void)_invalidateBadgeView;
-(PXUIAssetBadgeView *)_badgeView;
-(void)_setBadgeOptions:(unsigned long long)arg1 ;
-(unsigned long long)_badgeOptions;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)prepareForReuse;
-(PXAssetBadgeManager *)badgeManager;
@end

