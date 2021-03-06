/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GEOXPCUtil : NSObject
+(id)createServerConnectionWithPort:(const char*)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(id)defaultXPCServerConnectionQueue;
+(id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
+(/*^block*/id)daemonXPCConnectionCreationBlock;
+(void)setDaemonXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
+(id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
+(void)setDefaultXPCServerConnectionQueue:(id)arg1 ;
@end

