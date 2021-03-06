/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REWorkoutRelevanceProvider : RERelevanceProvider {

	unsigned long long _state;

}

@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithState:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)state;
-(id)description;
-(unsigned long long)_hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryEncoding;
@end

