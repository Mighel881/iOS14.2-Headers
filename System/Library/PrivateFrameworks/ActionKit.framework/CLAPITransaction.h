/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLRequest, NSURLConnection, NSMutableData, NSHTTPURLResponse, NSString;

@interface CLAPITransaction : NSObject {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _receivedData;
	NSHTTPURLResponse* _response;
	long long _requestType;
	NSString* _identifier;
	id _userInfo;
	id _internalContext;

}

@property (nonatomic,retain) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
@property (assign,nonatomic) long long requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id internalContext;                        //@synthesize internalContext=_internalContext - In the implementation block
+(id)transaction;
-(NSMutableData *)receivedData;
-(void)setRequestType:(long long)arg1 ;
-(NSURLRequest *)request;
-(id)userInfo;
-(id)init;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSString *)identifier;
-(id)internalContext;
-(void)setInternalContext:(id)arg1 ;
-(long long)requestType;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(NSURLConnection *)connection;
-(NSHTTPURLResponse *)response;
-(void)dealloc;
@end
