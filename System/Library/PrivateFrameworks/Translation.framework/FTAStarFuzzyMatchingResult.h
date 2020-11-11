/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTAStarFuzzyMatchingResult : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AStarFuzzyMatchingResult* _root;

}

@property (nonatomic,readonly) NSString * matched_result; 
@property (nonatomic,readonly) long long total_score; 
@property (nonatomic,readonly) int tm_score; 
@property (nonatomic,readonly) NSArray * match_ids; 
@property (nonatomic,readonly) NSString * debug_information; 
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingResult*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingResult*)arg2 ;
-(int)tm_score;
-(NSString *)matched_result;
-(long long)total_score;
-(NSArray *)match_ids;
-(NSString *)debug_information;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
