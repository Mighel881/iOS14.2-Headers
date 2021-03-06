/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEDNSSettings.h>

@class NSString;

@interface NEDNSOverTLSSettings : NEDNSSettings {

	NSString* _serverName;

}

@property (copy) NSString * serverName;              //@synthesize serverName=_serverName - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)dnsProtocol;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

