/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableSet, NSSet;

@interface IKDataBinding : NSObject {

	NSDictionary* _entriesByKey;
	NSMutableSet* _unresolvedKeys;
	NSDictionary* _keyValues;
	NSSet* _dataBoundKeys;

}

@property (nonatomic,copy) NSDictionary * keyValues;                //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,readonly) NSSet * dataBoundKeys;               //@synthesize dataBoundKeys=_dataBoundKeys - In the implementation block
@property (nonatomic,readonly) NSSet * unresolvedKeys; 
-(void)setKeyValues:(NSDictionary *)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(NSDictionary *)keyValues;
-(id)keysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(NSSet *)dataBoundKeys;
-(void)setNeedsResolutionForKey:(id)arg1 ;
-(NSSet *)unresolvedKeys;
-(void)markResolvedForKey:(id)arg1 ;
-(id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(void)setNeedsResolutionForAllKeys;
@end
