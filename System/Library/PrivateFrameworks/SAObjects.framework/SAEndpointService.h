/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointService : SAEndpoint

@property (nonatomic,copy) NSString * serverUrl; 
+(id)endpointService;
+(id)endpointServiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)serverUrl;
-(id)encodedClassName;
-(void)setServerUrl:(NSString *)arg1 ;
@end

