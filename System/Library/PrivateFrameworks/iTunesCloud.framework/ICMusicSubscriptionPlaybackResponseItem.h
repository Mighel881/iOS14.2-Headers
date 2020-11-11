/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, ICURLBag, NSDate, NSArray, ICStoreHLSAssetInfo;

@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	ICURLBag* _urlBag;
	NSDate* _assetExpirationDate;

}

@property (nonatomic,copy) NSDate * assetExpirationDate;                         //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSArray * fileAssets; 
@property (nonatomic,copy,readonly) ICStoreHLSAssetInfo * hlsAsset; 
-(id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2 ;
-(NSDate *)assetExpirationDate;
-(void)setAssetExpirationDate:(NSDate *)arg1 ;
-(NSArray *)fileAssets;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(id)fileAssetWithFlavorType:(long long)arg1 ;
-(long long)storeAdamID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
