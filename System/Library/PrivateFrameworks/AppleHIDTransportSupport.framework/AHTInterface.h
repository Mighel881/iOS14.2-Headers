/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AHTInterface : NSObject {

	unsigned char _interfaceID;
	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                         //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) unsigned char interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
+(id)withService:(unsigned)arg1 ;
-(unsigned long long)registryID;
-(BOOL)open;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(void)close;
-(id)initWithService:(unsigned)arg1 ;
-(NSString *)name;
-(BOOL)reset;
-(id)description;
-(unsigned char)interfaceID;
-(unsigned)service;
-(BOOL)setPower:(long long)arg1 ;
-(BOOL)setEnable:(BOOL)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)setReport:(unsigned char)arg1 withData:(id)arg2 ;
-(BOOL)getReport:(unsigned char)arg1 withData:(id)arg2 ;
@end
