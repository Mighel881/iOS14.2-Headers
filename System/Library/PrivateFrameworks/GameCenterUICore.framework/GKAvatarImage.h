/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, UIImage;

@interface GKAvatarImage : NSObject {

	NSData* _imageData;
	UIImage* _image;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) UIImage * image;                 //@synthesize image=_image - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 useUIImage:(BOOL)arg2 ;
-(void)prepareForUsingUIImage:(BOOL)arg1 ;
@end

