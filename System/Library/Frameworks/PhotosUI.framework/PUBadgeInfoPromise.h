/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PUBadgeInfoPromise : NSObject <NSCopying> {

	/*^block*/id _countProvider;
	PXAssetBadgeInfo _badgeInfo;

}

@property (nonatomic,readonly) PXAssetBadgeInfo badgeInfo;              //@synthesize badgeInfo=_badgeInfo - In the implementation block
-(PXAssetBadgeInfo)badgeInfo;
-(id)initWithBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(unsigned long long)hash;
-(id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBadgeInfo:(PXAssetBadgeInfo)arg1 countProvider:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
