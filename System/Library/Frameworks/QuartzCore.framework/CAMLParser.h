/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parser;
+(id)parseContentsOfURL:(id)arg1 ;
-(NSURL *)baseURL;
-(BOOL)parseData:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)init;
-(void)parserWarning:(id)arg1 ;
-(id<CAMLParserDelegate>)delegate;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(NSError *)error;
-(void)parserError:(id)arg1 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(BOOL)parseString:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(id)result;
-(void)setElementValue:(id)arg1 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(id)elementValue;
-(id)objectById:(id)arg1 ;
-(void)dealloc;
@end

