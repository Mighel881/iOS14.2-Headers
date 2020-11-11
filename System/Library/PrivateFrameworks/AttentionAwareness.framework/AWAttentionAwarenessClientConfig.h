/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AWAttentionAwarenessClientConfig : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	NSMutableDictionary* _notifyQueues;
	NSMutableDictionary* _notifyBlocks;
	unsigned long long _supportedEvents;
	BOOL _supportedEventsValid;
	unsigned long long _nextTagIndex;
	NSMutableDictionary* _tagMap;
	NSMutableDictionary* _tagRefCount;

}
+(id)sharedClientConfig;
-(unsigned long long)addTag:(id)arg1 ;
-(void)incrementTagIndexRefCount:(unsigned long long)arg1 ;
-(void)updateState:(BOOL)arg1 ;
-(id)init;
-(void)decrementTagIndexRefCount:(unsigned long long)arg1 ;
-(void)cancelNotification:(AWNotification_sRef)arg1 ;
-(AWNotification_sRef)notifySupportedEventsChangedWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)supportedEvents;
-(void)dealloc;
-(id)tagForIndex:(unsigned long long)arg1 ;
@end
