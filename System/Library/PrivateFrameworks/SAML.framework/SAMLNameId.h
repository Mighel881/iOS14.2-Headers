/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString;

@interface SAMLNameId : SAMLBaseElement

@property (nonatomic,readonly) NSString * nameQualifier; 
@property (nonatomic,readonly) NSString * spNameQualifier; 
@property (nonatomic,readonly) NSString * format; 
@property (nonatomic,readonly) NSString * spProvidedId; 
+(id)createElement:(id*)arg1 ;
-(NSString *)format;
-(NSString *)nameQualifier;
-(NSString *)spNameQualifier;
-(NSString *)spProvidedId;
@end

