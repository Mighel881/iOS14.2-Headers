/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSString * variant; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getNumberFormattedString;
+(id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)number;
-(void)setVariant:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)locale;
-(void)setNumber:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSString *)variant;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

