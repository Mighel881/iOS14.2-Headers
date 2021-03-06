/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray;

@interface FTChoiceAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ChoiceAlignment* _root;

}

@property (nonatomic,readonly) NSArray * post_itn_choice_indices; 
@property (nonatomic,readonly) NSArray * pre_itn_token_to_post_itn_char_alignments; 
-(id)initWithFlatbuffData:(id)arg1 root:(const ChoiceAlignment*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ChoiceAlignment>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ChoiceAlignment*)arg2 ;
-(NSArray *)post_itn_choice_indices;
-(NSArray *)pre_itn_token_to_post_itn_char_alignments;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

