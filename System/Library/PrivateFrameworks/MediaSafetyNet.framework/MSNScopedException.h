/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSString;

@interface MSNScopedException : NSObject {

	NSXPCConnection* _connection;
	NSString* _exception;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * exception;                        //@synthesize exception=_exception - In the implementation block
-(void)setException:(NSString *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(NSString *)exception;
-(id)initWithConnection:(id)arg1 exception:(id)arg2 ;
@end

