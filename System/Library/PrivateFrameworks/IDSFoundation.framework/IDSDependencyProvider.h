/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSServiceLoader.h>
#import <IDSFoundation/IDSKeychainAdapter.h>
#import <IDSFoundation/IDSPushAdapter.h>
#import <IDSFoundation/IDSXPCAdapter.h>

@class NSMutableDictionary, NSString;

@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter> {

	NSMutableDictionary* _registeredAdapters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userDefaults;
+(id)serviceLoader;
+(void)registerObject:(id)arg1 forProtocol:(id)arg2 ;
+(id)registeredObjectForProtocol:(id)arg1 ;
+(id)sharedProvider;
+(id)keychainAdapter;
+(id)systemMonitorAdapter;
+(id)XPCAdapter;
+(id)pushAdapter;
-(void)registerObject:(id)arg1 forProtocol:(id)arg2 ;
-(id)loadServiceDictionaries;
-(id)registeredObjectForProtocol:(id)arg1 ;
-(id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(id)arg4 ;
-(BOOL)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(BOOL)arg5 error:(int*)arg6 ;
-(id)createServiceConnectionWithServiceName:(const char*)arg1 invalidationHandler:(/*^block*/id)arg2 terminationHandler:(/*^block*/id)arg3 peerEventHandler:(/*^block*/id)arg4 peerQueue:(id)arg5 ;
-(id)placeholderMachPort;
-(BOOL)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int*)arg3 ;
-(BOOL)getKeychainData:(id*)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int*)arg5 ;
@end

