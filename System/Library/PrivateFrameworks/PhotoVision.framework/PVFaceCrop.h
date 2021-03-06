/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject {

	NSData* _faceCropData;
	PVFace* _originatingFace;
	CGSize _cachedImageDimensions;
	short _state;

}

@property (assign,nonatomic) short state;              //@synthesize state=_state - In the implementation block
-(id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2 ;
-(void)setState:(short)arg1 ;
-(id)originatingFace;
-(short)state;
-(id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2 ;
-(CGSize)imageDimensions;
-(id)description;
-(id)faceCropData;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

