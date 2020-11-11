/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/XMLWrapperDoc.h>

@class SAMLAuthZDecisionQueryElement, NSString;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc {

	SAMLAuthZDecisionQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthZDecisionQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(void)addAction:(id)arg1 ;
-(void)setResource:(id)arg1 ;
-(NSString *)channelId;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthZDecisionQueryElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAuthZDecisionQueryElement *)arg1 ;
@end
