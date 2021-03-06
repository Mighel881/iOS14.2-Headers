/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCCommandDelegate.h>

@protocol FCCommandQueueDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class FCCloudContext, NSString, FCKeyValueStore, NSObject, NSMutableArray;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate> {

	BOOL _suspended;
	BOOL _executingCommand;
	FCCloudContext* _context;
	NSString* _persistentStorePath;
	NSString* _name;
	FCKeyValueStore* _persistentStore;
	long long _urgency;
	id<FCCommandQueueDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingCommands;
	NSObject*<OS_dispatch_source> _cooldownTimer;
	NSObject*<OS_dispatch_group> _pendingCommandsGroup;
	NSObject*<OS_dispatch_group> _executingCommandsGroup;

}

@property (nonatomic,retain) FCCloudContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * persistentStorePath;                                     //@synthesize persistentStorePath=_persistentStorePath - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * persistentStore;                                //@synthesize persistentStore=_persistentStore - In the implementation block
@property (assign,nonatomic) long long urgency;                                                //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic,__weak) id<FCCommandQueueDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingCommands;                                 //@synthesize pendingCommands=_pendingCommands - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> cooldownTimer;                      //@synthesize cooldownTimer=_cooldownTimer - In the implementation block
@property (assign,getter=isExecutingCommand,nonatomic) BOOL executingCommand;                  //@synthesize executingCommand=_executingCommand - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> pendingCommandsGroup;                //@synthesize pendingCommandsGroup=_pendingCommandsGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> executingCommandsGroup;              //@synthesize executingCommandsGroup=_executingCommandsGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkQueue;
-(void)clear;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_loadFromDisk;
-(id)_encodeCommand:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPersistentStore:(FCKeyValueStore *)arg1 ;
-(void)_addCommand:(id)arg1 saveCompletion:(/*^block*/id)arg2 ;
-(FCKeyValueStore *)persistentStore;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)addCommand:(id)arg1 ;
-(id)_deserializeCommandsFromStore:(id)arg1 ;
-(id<FCCommandQueueDelegate>)delegate;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)_savePendingCommands;
-(NSObject*<OS_dispatch_source>)cooldownTimer;
-(void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 ;
-(void)setUrgency:(long long)arg1 ;
-(BOOL)isExecutingCommand;
-(NSMutableArray *)pendingCommands;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setExecutingCommandsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_serializeCommands:(id)arg1 toStore:(id)arg2 ;
-(void)setExecutingCommand:(BOOL)arg1 ;
-(NSString *)name;
-(id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(BOOL)arg5 delegate:(id)arg6 ;
-(void)setDelegate:(id<FCCommandQueueDelegate>)arg1 ;
-(FCCloudContext *)context;
-(void)_executeNextCommand;
-(id)initWithContext:(id)arg1 persistentStorePath:(id)arg2 urgency:(long long)arg3 suspended:(BOOL)arg4 delegate:(id)arg5 ;
-(void)_scheduleCommandExecution;
-(void)setPendingCommandsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)executingCommandsGroup;
-(void)setCooldownTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isSuspended;
-(void)resume;
-(void)setPersistentStorePath:(NSString *)arg1 ;
-(BOOL)_isEmpty;
-(NSObject*<OS_dispatch_group>)pendingCommandsGroup;
-(id)_decodeCommand:(id)arg1 ;
-(NSString *)persistentStorePath;
-(void)setContext:(FCCloudContext *)arg1 ;
-(long long)_qualityOfServiceForNextCommand;
-(void)activityObservingApplicationDidEnterBackground;
-(void)setPendingCommands:(NSMutableArray *)arg1 ;
-(void)addCommand:(id)arg1 saveCompletion:(/*^block*/id)arg2 ;
-(long long)urgency;
-(void)dealloc;
-(id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(BOOL)arg3 delegate:(id)arg4 ;
-(void)setName:(NSString *)arg1 ;
@end

