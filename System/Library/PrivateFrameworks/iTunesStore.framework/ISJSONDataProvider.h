/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISDataProvider.h>

@interface ISJSONDataProvider : ISDataProvider {

	unsigned long long _options;

}

@property (assign) unsigned long long parserOptions;              //@synthesize options=_options - In the implementation block
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(unsigned long long)parserOptions;
-(void)setParserOptions:(unsigned long long)arg1 ;
@end

