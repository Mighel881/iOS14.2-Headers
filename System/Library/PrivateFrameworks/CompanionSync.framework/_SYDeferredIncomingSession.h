/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, NSDictionary, IDSMessageContext;

@interface _SYDeferredIncomingSession : NSObject {

	NSURL* _resourceURL;
	NSString* _identifier;
	NSDictionary* _metadata;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,copy) NSURL * resourceURL;                           //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) IDSMessageContext * idsContext;              //@synthesize idsContext=_idsContext - In the implementation block
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(NSURL *)resourceURL;
-(NSDictionary *)metadata;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end

