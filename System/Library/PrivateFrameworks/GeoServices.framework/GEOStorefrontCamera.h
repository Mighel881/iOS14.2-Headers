/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOStorefrontCamera : NSObject {

	int _cameraNumber;
	CGSize _imageSize;
	GEOOrientedPosition _position;
	unsigned char _lensType;
	GEOLensModel _projection;
	NSArray* _textureIds;

}

@property (nonatomic,readonly) int cameraNumber;                          //@synthesize cameraNumber=_cameraNumber - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) GEOOrientedPosition position;              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned char lensType;                    //@synthesize lensType=_lensType - In the implementation block
@property (nonatomic,readonly) GEOLensModel projection;                   //@synthesize projection=_projection - In the implementation block
@property (nonatomic,readonly) NSArray * textureIds;                      //@synthesize textureIds=_textureIds - In the implementation block
-(CGSize)imageSize;
-(id)init;
-(int)cameraNumber;
-(unsigned char)lensType;
-(GEOOrientedPosition)position;
-(id)initWithCameraMetadata:(id)arg1 ;
-(GEOLensModel)projection;
-(NSArray *)textureIds;
@end

