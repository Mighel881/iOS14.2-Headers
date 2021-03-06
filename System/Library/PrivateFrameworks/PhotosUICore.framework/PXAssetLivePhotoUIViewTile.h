/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class ISLivePhotoUIView, ISLivePhotoPlayer, PXImageRequester, ISPlayerItem, NSString, UIView;

@interface PXAssetLivePhotoUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile> {

	unsigned long long _requestCount;
	long long _livePhotoRequestID;
	ISLivePhotoUIView* _livePhotoView;
	ISLivePhotoPlayer* _livePhotoPlayer;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	ISPlayerItem* __playerItem;

}

@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;              //@synthesize _playerItem=__playerItem - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                              //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(void)becomeReusable;
-(CGSize)_targetSize;
-(UIView *)view;
-(void)_updateLivePhotoView;
-(PXImageRequester *)imageRequester;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)_setPlayerItem:(id)arg1 ;
-(double)cornerRadius;
-(ISPlayerItem *)_playerItem;
-(void)_requestLivePhotoIfNeeded;
-(void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 expectedRequestID:(long long)arg4 ;
-(void)prepareForReuse;
-(void)setCornerRadius:(double)arg1 ;
@end

