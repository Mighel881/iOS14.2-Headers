/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NWConnection;

@interface NWRemoteConnectionWrapper : NSObject {

	NSUUID* _clientID;
	NWConnection* _connection;

}

@property (retain) NSUUID * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(void)setConnection:(NWConnection *)arg1 ;
-(NWConnection *)connection;
@end

