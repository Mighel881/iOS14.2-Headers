/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NPSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(BOOL)supportsWatch;
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSXPCConnection *)xpcConnection;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 cloudEnabled:(BOOL)arg5 ;
-(id)init;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 ;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(BOOL)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(BOOL)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 ;
-(void)unsafe_invalidate;
-(id)connection;
-(void)invalidate;
-(void)dealloc;
@end
