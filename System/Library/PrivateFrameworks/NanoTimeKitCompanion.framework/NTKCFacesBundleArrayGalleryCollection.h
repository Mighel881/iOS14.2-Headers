/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKCFacesArrayGalleryCollection.h>

@class CLKDevice, NTKFaceBundle;

@interface NTKCFacesBundleArrayGalleryCollection : NTKCFacesArrayGalleryCollection {

	CLKDevice* _device;
	NTKFaceBundle* _faceBundle;

}

@property (nonatomic,readonly) CLKDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NTKFaceBundle * faceBundle;              //@synthesize faceBundle=_faceBundle - In the implementation block
-(CLKDevice *)device;
-(void)loadFaces;
-(id)initWithDevice:(id)arg1 faceBundle:(id)arg2 ;
-(NTKFaceBundle *)faceBundle;
@end

