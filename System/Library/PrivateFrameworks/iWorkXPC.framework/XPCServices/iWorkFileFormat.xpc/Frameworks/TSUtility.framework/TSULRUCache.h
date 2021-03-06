/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {

	TSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(void)p_removeOldestObject;
-(id)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
@end

