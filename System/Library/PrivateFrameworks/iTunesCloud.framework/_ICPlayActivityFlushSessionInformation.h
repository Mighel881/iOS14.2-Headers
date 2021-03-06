/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSIndexSet;

@interface _ICPlayActivityFlushSessionInformation : NSObject {

	NSString* _endpointIdentifier;
	NSIndexSet* _revisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _sessionToken;

}

@property (nonatomic,copy) NSString * endpointIdentifier;                  //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,retain) NSIndexSet * revisionsIndexSet;               //@synthesize revisionsIndexSet=_revisionsIndexSet - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
@property (assign,nonatomic) unsigned long long sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(NSString *)endpointIdentifier;
-(NSIndexSet *)revisionsIndexSet;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(NSString *)revisionVersionToken;
-(void)setRevisionsIndexSet:(NSIndexSet *)arg1 ;
-(void)setSessionToken:(unsigned long long)arg1 ;
-(unsigned long long)sessionToken;
@end

