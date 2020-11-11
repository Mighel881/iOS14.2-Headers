/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface NFResponseAPDU : NSObject {

	unsigned short _status;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned short status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSData * response; 
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
+(id)responseWithData:(id)arg1 ;
-(unsigned short)status;
-(NSData *)data;
-(unsigned short)decodeUnderlyingAppletError:(id*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)response;
@end
