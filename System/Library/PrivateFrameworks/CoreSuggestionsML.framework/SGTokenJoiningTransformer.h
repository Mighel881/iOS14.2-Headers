/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString;

@interface SGTokenJoiningTransformer : NSObject <PMLTransformerProtocol> {

	NSString* _separator;

}

@property (retain) NSString * separator;                            //@synthesize separator=_separator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withSeparator:(id)arg1 ;
-(NSString *)separator;
-(void)setSeparator:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithSeparator:(id)arg1 ;
-(BOOL)isEqualToSGTokenJoiningTransformer:(id)arg1 ;
@end

