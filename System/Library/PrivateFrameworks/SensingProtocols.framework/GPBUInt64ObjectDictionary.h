/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)objectForKey:(unsigned long long)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(BOOL)isInitialized;
-(id)init;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithObjects:(const id*)arg1 forKeys:(const unsigned long long*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeAll;
-(void)setObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

