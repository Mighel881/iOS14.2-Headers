/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSHashTable;

@interface NFHardwareManagerXPC : NSObject {

	NSXPCConnection* _xpcConnection;
	NSHashTable* _delegates;
	long long _clientCount;

}

@property (readonly) NSXPCConnection * connection; 
+(id)sharedXPC;
-(void)addDelegate:(id)arg1 ;
-(id)init;
-(NSXPCConnection *)connection;
-(void)invalidate;
@end
