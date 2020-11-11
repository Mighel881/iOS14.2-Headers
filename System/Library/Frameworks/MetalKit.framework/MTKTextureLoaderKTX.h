/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

@interface MTKTextureLoaderKTX : MTKTextureLoaderData {

	NSData* _imageData;
	MTLPixelFormatInfo _pixelFormatInfo;
	BOOL _packedRowStride;

}
+(BOOL)isKTXFile:(id)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(unsigned long long)determineFormatFromType:(unsigned)arg1 format:(unsigned)arg2 internalFormat:(unsigned)arg3 baseInternalFormat:(unsigned)arg4 ;
-(BOOL)parseKeyValueBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)parseKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)determineFormatFromSizedFormat:(unsigned long long)arg1 ;
@end
