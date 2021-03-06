/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EDConversationRemoteStorageDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDUbiquitousConversationManagerDelegate, EDConversationRemoteStorage, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NSString;

@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable> {

	BOOL _initialized;
	id<EDUbiquitousConversationManagerDelegate> _delegate;
	id<EDConversationRemoteStorage> _cloudStorage;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _conversationIDsBySyncKey;
	NSMutableSet* _unmatchedKeys;

}

@property (assign,nonatomic,__weak) id<EDUbiquitousConversationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EDConversationRemoteStorage> cloudStorage;                             //@synthesize cloudStorage=_cloudStorage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conversationIDsBySyncKey;                           //@synthesize conversationIDsBySyncKey=_conversationIDsBySyncKey - In the implementation block
@property (nonatomic,retain) NSMutableSet * unmatchedKeys;                                             //@synthesize unmatchedKeys=_unmatchedKeys - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                         //@synthesize initialized=_initialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)_syncKeyForConversationID:(long long)arg1 ;
-(id<EDUbiquitousConversationManagerDelegate>)delegate;
-(BOOL)_synchronize;
-(id)syncKeyForUpdatedConversation:(long long)arg1 flags:(unsigned long long)arg2 ;
-(id<EDConversationRemoteStorage>)cloudStorage;
-(void)setDelegate:(id<EDUbiquitousConversationManagerDelegate>)arg1 ;
-(BOOL)initialized;
-(void)performDailyExportForChangedConversations:(id)arg1 ;
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3 ;
-(BOOL)hasSubscribedConversations;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setCloudStorage:(id<EDConversationRemoteStorage>)arg1 ;
-(void)setUnmatchedKeys:(NSMutableSet *)arg1 ;
-(void)_setCloudStorageValue:(id)arg1 forKey:(id)arg2 ;
-(void)pruneDatabasePurgingOldestEntries:(BOOL)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forConversations:(id)arg2 ;
-(NSMutableDictionary *)conversationIDsBySyncKey;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConversationIDsBySyncKey:(NSMutableDictionary *)arg1 ;
-(void)_mergeServerChanges:(id)arg1 ;
-(void)performInitialSync;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableSet *)unmatchedKeys;
@end

