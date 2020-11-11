/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXAssetsSharingHelper.h>

@protocol PXAssetsSharingHelperDelegate;
@class NSString;

@interface PUAssetSharingHelper : NSObject <PXAssetsSharingHelper> {

	id<PXAssetsSharingHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXAssetsSharingHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_ensureLocalAssets:(id)arg1 forReason:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)copyAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<PXAssetsSharingHelperDelegate>)delegate;
-(void)ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyAssets:(id)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(void)setDelegate:(id<PXAssetsSharingHelperDelegate>)arg1 ;
@end
