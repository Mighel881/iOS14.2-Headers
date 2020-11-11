/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAsset, NSDate, UIImage;

@interface PXLinkPresentationConfiguration : NSObject {

	PHAsset* _keyAsset;
	unsigned long long _photoCount;
	unsigned long long _videoCount;
	unsigned long long _otherItemCount;
	NSDate* _earliestAssetDate;
	NSDate* _latestAssetDate;
	NSDate* _expirationDate;
	UIImage* _placeholderImage;

}

@property (nonatomic,retain) PHAsset * keyAsset;                             //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) unsigned long long photoCount;                  //@synthesize photoCount=_photoCount - In the implementation block
@property (assign,nonatomic) unsigned long long videoCount;                  //@synthesize videoCount=_videoCount - In the implementation block
@property (assign,nonatomic) unsigned long long otherItemCount;              //@synthesize otherItemCount=_otherItemCount - In the implementation block
@property (nonatomic,copy) NSDate * earliestAssetDate;                       //@synthesize earliestAssetDate=_earliestAssetDate - In the implementation block
@property (nonatomic,copy) NSDate * latestAssetDate;                         //@synthesize latestAssetDate=_latestAssetDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                     //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(unsigned long long)photoCount;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(unsigned long long)videoCount;
-(void)setVideoCount:(unsigned long long)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(UIImage *)placeholderImage;
-(id)initWithKeyAsset:(id)arg1 ;
-(void)setPhotoCount:(unsigned long long)arg1 ;
-(unsigned long long)otherItemCount;
-(void)setOtherItemCount:(unsigned long long)arg1 ;
-(NSDate *)earliestAssetDate;
-(void)setEarliestAssetDate:(NSDate *)arg1 ;
-(NSDate *)latestAssetDate;
-(void)setLatestAssetDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
@end
