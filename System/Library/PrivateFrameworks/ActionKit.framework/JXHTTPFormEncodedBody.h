/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSMutableDictionary, NSString;

@interface JXHTTPFormEncodedBody : NSObject <JXHTTPRequestBody> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withDictionary:(id)arg1 ;
-(id)init;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(id)requestData;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
@end

