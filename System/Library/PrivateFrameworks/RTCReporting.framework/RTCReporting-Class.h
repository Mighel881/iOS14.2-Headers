/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RTCReporting/RTCReportingDeallocNotifierDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSArray, RTCReportingDeallocNotifier;

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate> {

	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSObject*<OS_dispatch_queue> _reportingPeriodicTasksQueue;
	/*^block*/id _loggingBlock;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _timer;
	int _counter;
	NSMutableDictionary* _periodicServiceDict;
	NSArray* _enabledBackendNames;
	NSArray* _whitelistedEvents;
	NSArray* _blacklistedEvents;
	RTCReportingDeallocNotifier* _strongDeallocNotifier;
	id _weakDeallocNotifier;
	id _weakMessageSentDelegate;

}

@property (assign,nonatomic) id<RTCReportingMessageSentNotifier> messageSentDelegate; 
@property (nonatomic,copy) id messageLoggingBlock;                                                 //@synthesize loggingBlock=_loggingBlock - In the implementation block
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
+(id)newSecureHierarchyTokenFromParentToken:(id)arg1 ;
+(BOOL)closeEphemeralSessiontWithSessionId:(id)arg1 ;
+(void)regeneratePersistentIdentifierForDNU:(BOOL)arg1 ;
+(BOOL)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id*)arg6 ;
+(id)getPersistentIdentifierForDNU:(BOOL)arg1 ;
+(id)createEphemeralSessionWithSessionInfo:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(void)stopLogTimer;
-(oneway void)release;
-(void)flushMessagesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)uploadDataArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishSession;
-(id)retain;
-(void)updateSharedDataWithDictionary:(id)arg1 ;
-(void)notifyMessageWasSent:(id)arg1 ;
-(id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 ;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)uploadFileWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)aboutToDealloc;
-(void)updateSharedDataForKey:(id)arg1 value:(id)arg2 ;
-(void)setMessageLoggingBlock:(id)arg1 ;
-(id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(/*^block*/id)arg4 ;
-(BOOL)isBlacklistedEvent:(unsigned short)arg1 ;
-(BOOL)unregisterPeriodTaskForModule:(unsigned)arg1 ;
-(void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(/*^block*/id)arg2 ;
-(id<RTCReportingMessageSentNotifier>)messageSentDelegate;
-(BOOL)flushMessages;
-(BOOL)isWhitelistedEvent:(unsigned short)arg1 ;
-(BOOL)serverSupportsFileUpload;
-(void)setMessageSentDelegate:(id<RTCReportingMessageSentNotifier>)arg1 ;
-(BOOL)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 intervalMultiplier:(int)arg3 updateTimeout:(unsigned long long)arg4 ;
-(void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 ;
-(BOOL)setDigestKey:(id)arg1 algorithm:(int)arg2 ;
-(id)messageLoggingBlock;
-(BOOL)registerPeriodicTaskForModule:(unsigned)arg1 needToUpdate:(BOOL)arg2 needToReport:(BOOL)arg3 serviceBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(BOOL)sendMessageWithDictionary:(id)arg1 error:(id*)arg2 ;
@end
