/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject {

	NSMutableDictionary* _underlyingDictionary;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(FMReadWriteLock *)lock;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)underlyingDictionary;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)nativeDictionary;
-(id)objectForKey:(id)arg1 withConstructor:(/*^block*/id)arg2 ;
-(id)popObjectforKey:(id)arg1 ;
-(void)setUnderlyingDictionary:(NSMutableDictionary *)arg1 ;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
@end

