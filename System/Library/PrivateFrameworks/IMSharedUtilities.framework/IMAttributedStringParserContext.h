/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSAttributedString, NSString, NSArray;

@interface IMAttributedStringParserContext : NSObject {

	NSAttributedString* _inString;

}

@property (retain,readonly) NSAttributedString * inString;              //@synthesize inString=_inString - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
@property (readonly) BOOL shouldPreprocess; 
-(NSAttributedString *)inString;
-(NSArray *)resultsForLogging;
-(id)initWithAttributedString:(id)arg1 ;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(void)parserDidEnd:(id)arg1 ;
-(NSString *)name;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)dealloc;
@end
