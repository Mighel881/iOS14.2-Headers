/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXPTranslationObject, NSDictionary;

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding> {

	AXPTranslationObject* _translation;
	unsigned long long _requestType;
	unsigned long long _attributeType;
	unsigned long long _actionType;
	NSDictionary* _parameters;
	unsigned long long _clientType;

}

@property (nonatomic,retain) AXPTranslationObject * translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                  //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                //@synthesize attributeType=_attributeType - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                       //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned long long clientType;                   //@synthesize clientType=_clientType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithTranslation:(id)arg1 ;
+(id)allowedDecodableClasses;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(NSDictionary *)parameters;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)attributeType;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)encodeWithCoder:(id)arg1 ;
-(AXPTranslationObject *)translation;
-(unsigned long long)requestType;
-(id)description;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned long long)clientType;
-(id)initWithCoder:(id)arg1 ;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
-(void)setClientType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
