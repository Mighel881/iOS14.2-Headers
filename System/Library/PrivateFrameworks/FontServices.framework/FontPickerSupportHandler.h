/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FontServices/FontServicesFontPickerSupportProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCConnection, NSString;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListener* _listenerForFontServicesDaemon;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCListener * listenerForFontServicesDaemon;              //@synthesize listenerForFontServicesDaemon=_listenerForFontServicesDaemon - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)checkin:(/*^block*/id)arg1 ;
-(void)ping:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registeredFontsChanged:(id)arg1 ;
-(void)activateFontsForFontPickerClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)pathsContainsFontAsset:(id)arg1 ;
-(NSXPCListener *)listenerForFontServicesDaemon;
-(void)setListenerForFontServicesDaemon:(NSXPCListener *)arg1 ;
@end

