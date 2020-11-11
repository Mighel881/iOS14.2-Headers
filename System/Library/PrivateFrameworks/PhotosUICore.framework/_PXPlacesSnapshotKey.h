/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PXPlacesSnapshotKey : NSObject <NSCopying> {

	long long __userInterfaceStyle;
	CGSize __imageSize;

}

@property (nonatomic,readonly) CGSize _imageSize;                          //@synthesize _imageSize=__imageSize - In the implementation block
@property (nonatomic,readonly) long long _userInterfaceStyle;              //@synthesize _userInterfaceStyle=__userInterfaceStyle - In the implementation block
-(CGSize)_imageSize;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithImageSize:(CGSize)arg1 userInterfaceStyle:(long long)arg2 ;
-(long long)_userInterfaceStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
