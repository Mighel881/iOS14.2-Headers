/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PUTileTransitionCoordinator : NSObject
+(id)defaultTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5 ;
+(id)defaultTileTransitionCoordinatorForUpdates;
+(id)defaultTileTransitionCoordinatorForFrameChangeWithTileCrossFade:(BOOL)arg1 tilingView:(id)arg2 ;
+(id)defaultTileTransitionCoordinatorForReattachedTileControllers:(id)arg1 context:(id)arg2 ;
+(id)defaultTileTransitionCoordinatorForLayoutInvalidationContext:(id)arg1 layout:(id)arg2 viewModel:(id)arg3 ;
+(id)browsingTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5 ;
-(id)newTileAnimationOptions;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
@end
