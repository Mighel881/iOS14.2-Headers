/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAssetActionManager.h>

@class NSMapTable, PUAssetActionManager;

@interface PUJoiningAssetActionManager : PUAssetActionManager {

	NSMapTable* __actionManagerByClass;
	PUAssetActionManager* __actionManagerForNoAsset;

}

@property (nonatomic,readonly) NSMapTable * _actionManagerByClass;                                                             //@synthesize _actionManagerByClass=__actionManagerByClass - In the implementation block
@property (setter=_setActionManagerForNoAsset:,nonatomic,retain) PUAssetActionManager * _actionManagerForNoAsset;              //@synthesize _actionManagerForNoAsset=__actionManagerForNoAsset - In the implementation block
-(id)init;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(SCD_Struct_PH4)arg2 ;
-(BOOL)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
-(void)registerActionManager:(id)arg1 forAssetClass:(Class)arg2 ;
-(id)_actionManagerForAsset:(id)arg1 ;
-(id)_actionManagerForAssets:(id)arg1 ;
-(id)_actionManagerForAssetsByAssetCollection:(id)arg1 ;
-(NSMapTable *)_actionManagerByClass;
-(PUAssetActionManager *)_actionManagerForNoAsset;
-(void)_setActionManagerForNoAsset:(id)arg1 ;
@end
