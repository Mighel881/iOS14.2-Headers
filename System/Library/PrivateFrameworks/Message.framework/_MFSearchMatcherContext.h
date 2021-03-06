/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPSearchMatcher, NSMutableDictionary;

@interface _MFSearchMatcherContext : NSObject {

	CPSearchMatcher* _lastMatcher;
	char* _lastSearchString;
	unsigned long long _lastSearchStringLength;
	NSMutableDictionary* _matchers;

}

@property (nonatomic,retain) CPSearchMatcher * lastMatcher;                          //@synthesize lastMatcher=_lastMatcher - In the implementation block
@property (assign,nonatomic) char* lastSearchString;                                 //@synthesize lastSearchString=_lastSearchString - In the implementation block
@property (assign,nonatomic) unsigned long long lastSearchStringLength;              //@synthesize lastSearchStringLength=_lastSearchStringLength - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchers;                         //@synthesize matchers=_matchers - In the implementation block
-(void)flush;
-(CPSearchMatcher *)lastMatcher;
-(void)setLastMatcher:(CPSearchMatcher *)arg1 ;
-(unsigned long long)lastSearchStringLength;
-(void)setLastSearchStringLength:(unsigned long long)arg1 ;
-(char*)lastSearchString;
-(void)setLastSearchString:(char*)arg1 ;
-(NSMutableDictionary *)matchers;
-(void)setMatchers:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

