/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NUGLVertexAttribute : NSObject {

	BOOL _normalized;
	unsigned _type;
	int _size;
	NSString* _name;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) int size;                               //@synthesize size=_size - In the implementation block
@property (readonly) long long sizeInBytes; 
@property (nonatomic,readonly) BOOL normalized;              //@synthesize normalized=_normalized - In the implementation block
+(id)vec2Attribute:(id)arg1 ;
+(id)vec4Attribute:(id)arg1 ;
-(id)init;
-(int)size;
-(NSString *)name;
-(long long)sizeInBytes;
-(long long)_typeSize;
-(unsigned)type;
-(BOOL)normalized;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 size:(int)arg3 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 size:(int)arg3 normalized:(BOOL)arg4 ;
@end
