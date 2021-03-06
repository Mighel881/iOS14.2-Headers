/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, NSString;

@interface WFWebResource : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSURL* _URL;
	NSString* _MIMEType;
	NSString* _textEncodingName;
	NSString* _frameName;

}

@property (nonatomic,readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * textEncodingName;              //@synthesize textEncodingName=_textEncodingName - In the implementation block
@property (nonatomic,readonly) NSString * frameName;                     //@synthesize frameName=_frameName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)webResourceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
+(id)webResourceWithURL:(id)arg1 ;
+(id)webResourceWithHTMLString:(id)arg1 baseURL:(id)arg2 ;
+(id)webResourceWithFile:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)MIMEType;
-(id)serializedRepresentation;
-(NSString *)textEncodingName;
-(id)description;
-(NSData *)data;
-(NSString *)frameName;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(id)loadInWKWebView:(id)arg1 ;
@end

