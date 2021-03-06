/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MSOID, NSData;


@protocol MSCMSMessage <MSMessage>
@property (readonly) MSOID * type; 
@property (nonatomic,retain) NSData * dataContent; 
@property (retain) id<MSCMSMessage> embeddedContent; 
@property (retain) MSOID * contentType; 
@required
-(void)setContentType:(id)arg1;
-(MSOID *)contentType;
-(MSOID *)type;
-(void)setDataContent:(id)arg1;
-(NSData *)dataContent;
-(void)setEmbeddedContent:(id)arg1;
-(id<MSCMSMessage>)embeddedContent;

@end

