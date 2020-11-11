/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableURLRequest, NSMutableSet, NSURL, NSDictionary;

@interface CMSExtensionEndpointConfiguration : NSObject {

	NSMutableURLRequest* _request;
	NSMutableSet* _optionalMethods;
	NSURL* _endpointURL;
	NSDictionary* _groupHeaders;
	NSDictionary* _headers;

}

@property (nonatomic,retain) NSURL * endpointURL;                         //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupHeaders;               //@synthesize groupHeaders=_groupHeaders - In the implementation block
@property (nonatomic,readonly) NSDictionary * headers;                    //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableSet * optionalMethods;              //@synthesize optionalMethods=_optionalMethods - In the implementation block
-(NSMutableURLRequest *)request;
-(NSURL *)endpointURL;
-(id)init;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(NSDictionary *)headers;
-(id)description;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4 ;
-(NSDictionary *)groupHeaders;
-(NSMutableSet *)optionalMethods;
-(void)setOptionalMethods:(NSMutableSet *)arg1 ;
@end
