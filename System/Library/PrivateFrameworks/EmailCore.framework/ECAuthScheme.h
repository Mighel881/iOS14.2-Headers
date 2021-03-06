/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmailCore/EmailCore-Structs.h>
@class NSSet, NSString;

@interface ECAuthScheme : NSObject

@property (nonatomic,copy,readonly) NSSet * supportedSASLMechanisms; 
@property (nonatomic,readonly) BOOL requiresUsername; 
@property (nonatomic,readonly) BOOL requiresPassword; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * humanReadableName; 
@property (nonatomic,readonly) unsigned applescriptScheme; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(id)schemeWithApplescriptScheme:(unsigned)arg1 ;
-(NSString *)humanReadableName;
-(BOOL)requiresUsername;
-(NSString *)name;
-(BOOL)requiresPassword;
-(unsigned)applescriptScheme;
-(NSSet *)supportedSASLMechanisms;
@end

