/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKContextServiceUpdateNotifications.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSMutableArray, NSObject, CKContextSemaphore;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {

	NSSet* _capabilities;
	NSString* _indexVersionId;
	NSMutableArray* _updateHandlers;
	NSObject*<OS_dispatch_semaphore> _sema_capabilities;
	CKContextSemaphore* _serviceSemaphore;
	unsigned long long _defaultRequestType;

}

@property (nonatomic,readonly) unsigned long long defaultRequestType;              //@synthesize defaultRequestType=_defaultRequestType - In the implementation block
@property (nonatomic,readonly) NSSet * capabilities; 
+(void)initialize;
+(double)timeIntervalBetweenMachTime:(unsigned long long)arg1 andMachTime:(unsigned long long)arg2 ;
+(id)clientWithDefaultRequestType:(unsigned long long)arg1 ;
+(BOOL)isLikelyUnsolicitedUserInteraction;
+(void)_observeApplicationStateNotifications;
+(id)new;
-(NSSet *)capabilities;
-(id)init;
-(id)retrieveCapabilites;
-(id)initWithDefaultRequestType:(unsigned long long)arg1 ;
-(id)newRequest;
-(id)indexVersionId;
-(long long)tryAcquireServiceSemaphore;
-(void)didReceiveCKContextServiceUpdateNotification;
-(void)ensureFullyInitialized;
-(void)_updateCachedCapabilites;
-(void)registerConfigurationUpdateHandler:(/*^block*/id)arg1 ;
-(void)ancestorsForTopics:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)workWithServiceSemaphore:(/*^block*/id)arg1 ;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(unsigned long long)defaultRequestType;
@end
