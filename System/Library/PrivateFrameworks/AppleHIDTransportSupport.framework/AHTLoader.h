/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AHTLoader : NSObject {

	unsigned _imageTag;
	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;                 //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                 //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned imageTag;              //@synthesize imageTag=_imageTag - In the implementation block
+(id)allDevices;
+(id)withService:(unsigned)arg1 ;
+(BOOL)errorFromKernel:(int)arg1 error:(id*)arg2 ;
+(id)withName:(id)arg1 ;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(void)close;
-(id)initWithService:(unsigned)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)open:(id*)arg1 ;
-(unsigned)service;
-(void)setConnect:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)imageTag;
-(BOOL)loadImage:(id)arg1 payloadOnly:(BOOL)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
@end

