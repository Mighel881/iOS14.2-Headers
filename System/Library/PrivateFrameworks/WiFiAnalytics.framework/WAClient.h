/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray, NSString, NSMutableSet;

@interface WAClient : NSObject {

	NSMutableDictionary* _interestedMessageIdentifiers;
	NSMutableDictionary* _configuredMessageIdentifiers;
	unsigned char _daemonConnectionValid;
	unsigned char _blockDaemonConnection;
	NSXPCConnection* _conn;
	NSMutableDictionary* _configChangeDelegatesPerGroupType;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _queryableQueue;
	NSMutableArray* _queuedInvocations;
	NSMutableDictionary* _registeredQueryableHandlerBlocks;
	double _connectionRecoveryStartTime;
	/*^block*/id _recoveryTickBlock;
	NSString* _tokenForThisClient;
	NSString* _identifierForThisClient;
	NSMutableSet* _registeredGroupTypes;

}

@property (nonatomic,retain) NSXPCConnection * conn;                                               //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configChangeDelegatesPerGroupType;              //@synthesize configChangeDelegatesPerGroupType=_configChangeDelegatesPerGroupType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> replyQueue;                              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                           //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryableQueue;                          //@synthesize queryableQueue=_queryableQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedInvocations;                                   //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredQueryableHandlerBlocks;               //@synthesize registeredQueryableHandlerBlocks=_registeredQueryableHandlerBlocks - In the implementation block
@property (assign,nonatomic) double connectionRecoveryStartTime;                                   //@synthesize connectionRecoveryStartTime=_connectionRecoveryStartTime - In the implementation block
@property (assign,nonatomic) unsigned char daemonConnectionValid;                                  //@synthesize daemonConnectionValid=_daemonConnectionValid - In the implementation block
@property (assign,nonatomic) unsigned char blockDaemonConnection;                                  //@synthesize blockDaemonConnection=_blockDaemonConnection - In the implementation block
@property (nonatomic,copy) id recoveryTickBlock;                                                   //@synthesize recoveryTickBlock=_recoveryTickBlock - In the implementation block
@property (nonatomic,retain) NSString * tokenForThisClient;                                        //@synthesize tokenForThisClient=_tokenForThisClient - In the implementation block
@property (nonatomic,retain) NSString * identifierForThisClient;                                   //@synthesize identifierForThisClient=_identifierForThisClient - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredGroupTypes;                                  //@synthesize registeredGroupTypes=_registeredGroupTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configuredMessageIdentifiers; 
@property (nonatomic,retain) NSMutableDictionary * interestedMessageIdentifiers; 
+(id)sharedClientWithIdentifier:(id)arg1 ;
+(id)sharedClient;
-(void)killDaemonAndReply:(/*^block*/id)arg1 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 ;
-(void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)trigger11axPerfStudyAndReply:(/*^block*/id)arg1 ;
-(void)clearMessageStoreAndReply:(/*^block*/id)arg1 ;
-(void)registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)getDeviceAnalyticsConfigurationAndReply:(/*^block*/id)arg1 ;
-(void)fakeDaemonConnectionDead:(unsigned char)arg1 ;
-(double)connectionRecoveryStartTime;
-(void)setConn:(NSXPCConnection *)arg1 ;
-(void)setRecoveryTickBlock:(id)arg1 ;
-(id)_initPrivate;
-(NSXPCConnection *)conn;
-(void)setRegisteredGroupTypes:(NSMutableSet *)arg1 ;
-(void)getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)_registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(NSMutableDictionary *)registeredQueryableHandlerBlocks;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)_startConnectionRecovery;
-(id)init;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setInterestedMessageIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setConfiguredMessageIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)_killDaemonAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(NSMutableDictionary *)interestedMessageIdentifiers;
-(void)_getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_connectionTimedOut;
-(void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)_connectionRecoveryTick;
-(void)_setDeviceAnalyticsConfiguration:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(NSMutableSet *)registeredGroupTypes;
-(void)ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)_wakeUpNotificationForThisClientReceived:(id)arg1 ;
-(void)_submitWiFiAnalyticsMessage:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)setConnectionRecoveryStartTime:(double)arg1 ;
-(void)_registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(/*^block*/id)arg3 andReply:(/*^block*/id)arg4 queuedInvocation:(id)arg5 ;
-(void)_replyAllWithTimeoutErrorAndRemove;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(/*^block*/id)arg3 andReply:(/*^block*/id)arg4 ;
-(void)_removeAllQueuedInvocations;
-(void)configuredMessagesDidChange:(id)arg1 andInterestedMessageIDs:(id)arg2 forGroupType:(long long)arg3 ;
-(void)setQueryableQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_getDeviceAnalyticsConfigurationAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)setDeviceAnalyticsConfiguration:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)_connectionRecovered;
-(void)_dequeueInvocation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queryableQueue;
-(/*^block*/id)_getConnectionIssueHandlerBlock;
-(void)_setConfigChangeDelegateForGroupType:(long long)arg1 queuedInvocation:(id)arg2 ;
-(void)setIdentifierForThisClient:(NSString *)arg1 ;
-(void)_trigger11axPerfStudyAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)setConfigChangeDelegatesPerGroupType:(NSMutableDictionary *)arg1 ;
-(unsigned char)daemonConnectionValid;
-(NSString *)tokenForThisClient;
-(void)_establishDaemonConnection;
-(NSMutableArray *)queuedInvocations;
-(void)setBlockDaemonConnection:(unsigned char)arg1 ;
-(void)_getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_clearMessageStoreAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)setTokenForThisClient:(NSString *)arg1 ;
-(void)setConfigChangedDelegate:(id)arg1 forGroupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(id)recoveryTickBlock;
-(void)_ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(void)setRegisteredQueryableHandlerBlocks:(NSMutableDictionary *)arg1 ;
-(void)setDaemonConnectionValid:(unsigned char)arg1 ;
-(void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(NSString *)identifierForThisClient;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)configuredMessageIdentifiers;
-(void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(unsigned char)blockDaemonConnection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)submitQueriedMetricWithIdentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)submitWiFiAnalyticsMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)_reregister;
-(void)_triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)dealloc;
-(NSMutableDictionary *)configChangeDelegatesPerGroupType;
@end
