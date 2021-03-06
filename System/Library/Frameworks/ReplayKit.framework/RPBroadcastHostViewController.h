/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>

@class RPBroadcastExtensionHostContext, NSXPCListenerEndpoint;

@interface RPBroadcastHostViewController : _UIRemoteViewController {

	RPBroadcastExtensionHostContext* _hostContext;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (nonatomic,retain) RPBroadcastExtensionHostContext * hostContext;              //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                   //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setHostContext:(RPBroadcastExtensionHostContext *)arg1 ;
-(RPBroadcastExtensionHostContext *)hostContext;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
-(void)updateBroadcastHandlerListenerEndpoint;
@end

