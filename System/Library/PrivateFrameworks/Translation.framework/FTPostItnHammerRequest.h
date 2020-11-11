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

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTPostItnHammerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const PostItnHammerRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * post_itn_string; 
@property (nonatomic,readonly) NSArray * tokens; 
-(NSArray *)tokens;
-(id)initWithFlatbuffData:(id)arg1 root:(const PostItnHammerRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::PostItnHammerRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const PostItnHammerRequest*)arg2 ;
-(NSString *)language;
-(NSString *)post_itn_string;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
