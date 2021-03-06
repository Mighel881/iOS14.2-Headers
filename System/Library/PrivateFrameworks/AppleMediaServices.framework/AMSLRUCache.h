/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _backingDictionary;
	AMSDoubleLinkedList* _backingList;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingDictionary;               //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedList * backingList;                     //@synthesize backingList=_backingList - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setBackingList:(AMSDoubleLinkedList *)arg1 ;
-(unsigned long long)count;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)allObjectsAndKeys;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)description;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(AMSDoubleLinkedList *)backingList;
-(id)objectForKey:(id)arg1 withCreationBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_count;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)backingDictionary;
@end

