/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSDictionary, NSString, NSObject;

@interface RPRequestEntry : NSObject {

	unsigned _xpcID;
	NSDictionary* _options;
	NSString* _requestID;
	/*^block*/id _responseHandler;
	unsigned long long _sendTicks;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _length;

}

@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) unsigned long long sendTicks;                     //@synthesize sendTicks=_sendTicks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                   //@synthesize xpcID=_xpcID - In the implementation block
@property (assign,nonatomic) unsigned long long length;                        //@synthesize length=_length - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(id)responseHandler;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(unsigned)xpcID;
-(NSDictionary *)options;
-(unsigned long long)length;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)sendTicks;
-(void)setSendTicks:(unsigned long long)arg1 ;
-(void)setXpcID:(unsigned)arg1 ;
@end
