/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSDictionary;

@interface WBSPasswordPatternMatch : NSObject {

	unsigned long long _type;
	NSString* _matchedSubstring;
	double _guessesRequired;
	NSDictionary* _userInfo;
	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchedSubstring;              //@synthesize matchedSubstring=_matchedSubstring - In the implementation block
@property (nonatomic,readonly) NSRange range;                                 //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) unsigned long long endIndex; 
@property (nonatomic,readonly) double guessesRequired;                        //@synthesize guessesRequired=_guessesRequired - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
-(NSRange)range;
-(NSDictionary *)userInfo;
-(unsigned long long)hash;
-(id)initWithType:(unsigned long long)arg1 matchedSubstring:(id)arg2 range:(NSRange)arg3 guessesRequired:(double)arg4 userInfo:(id)arg5 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)matchedSubstring;
-(id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)arg1 ;
-(unsigned long long)endIndex;
-(double)guessesRequired;
-(id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(NSRange)arg2 ;
@end

