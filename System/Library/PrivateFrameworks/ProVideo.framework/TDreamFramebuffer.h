/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface TDreamFramebuffer : NSObject {

	BOOL _ownsTexture;
	BOOL _ownsFBO;
	CVOpenGLESTextureCacheRef _textureCache;
	BOOL _validLUT;
	unsigned _texture;
	unsigned _framebuffer;
	CGSize _size;

}

@property (readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned texture;                  //@synthesize texture=_texture - In the implementation block
@property (readonly) unsigned framebuffer;              //@synthesize framebuffer=_framebuffer - In the implementation block
@property (readonly) BOOL validLUT;                     //@synthesize validLUT=_validLUT - In the implementation block
-(unsigned)texture;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(unsigned)framebuffer;
-(void)dealloc;
-(id)initWithTexName:(id)arg1 ;
-(BOOL)validLUT;
-(id)initWithExistingImageTexture:(IPImage)arg1 ;
-(void)generateFramebuffer;
-(void)generateFramebufferTex:(id)arg1 ;
@end
