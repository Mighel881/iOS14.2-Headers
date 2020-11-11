/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLArgumentInternal.h>

@interface MTLBufferArgument : MTLArgumentInternal {

	unsigned _dataType : 15;
	unsigned _vertexDescriptorBuffer : 1;
	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(id)bufferPointerType;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataSize;
-(unsigned long long)bufferPixelFormat;
-(unsigned long long)bufferDataType;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(unsigned long long)bufferALUType;
-(void)setStructType:(id)arg1 ;
-(id)structType;
-(id)bufferIndirectArgumentType;
-(id)bufferStructType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setVertexDescriptorBuffer:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(BOOL)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12 ;
-(BOOL)isVertexDescriptorBuffer;
-(void)dealloc;
@end
