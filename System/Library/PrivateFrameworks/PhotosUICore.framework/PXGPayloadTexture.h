/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGBaseTexture.h>

@protocol NSCopying;
@interface PXGPayloadTexture : PXGBaseTexture {

	int _presentationType;
	id<NSCopying> _payload;

}

@property (nonatomic,copy,readonly) id<NSCopying> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) int presentationType; 
-(id<NSCopying>)payload;
-(long long)estimatedByteSize;
-(id)init;
-(CGImageRef)imageRepresentation;
-(CGSize)pixelSize;
-(id)initWithPayload:(id)arg1 presentationType:(int)arg2 ;
-(BOOL)isOpaque;
-(int)presentationType;
@end
