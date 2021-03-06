/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TipsCore/TipsCore-Structs.h>
@interface TPSKVOManager : NSObject {

	id _observer;
	CFDictionaryRef _KVODictionary;

}

@property (assign,nonatomic,__weak) id observer;                         //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CFDictionaryRef KVODictionary;              //@synthesize KVODictionary=_KVODictionary - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithObserver:(id)arg1 ;
-(void)setObserver:(id)arg1 ;
-(void)removeAllKVOObjects;
-(CFDictionaryRef)KVODictionary;
-(void)addKVOObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeKVOObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeKVOForObject:(id)arg1 ;
-(void)setKVODictionary:(CFDictionaryRef)arg1 ;
-(id)observer;
-(void)dealloc;
@end

