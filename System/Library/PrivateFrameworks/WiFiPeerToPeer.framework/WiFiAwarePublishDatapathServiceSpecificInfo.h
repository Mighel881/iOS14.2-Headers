/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying> {

	unsigned short _servicePort;
	long long _protocolType;
	NSString* _hostname;

}

@property (nonatomic,readonly) long long protocolType;                  //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,readonly) unsigned short servicePort;              //@synthesize servicePort=_servicePort - In the implementation block
@property (nonatomic,copy) NSString * hostname;                         //@synthesize hostname=_hostname - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)servicePort;
-(id)initWithProtocolType:(long long)arg1 servicePort:(unsigned short)arg2 ;
-(id)description;
-(NSString *)hostname;
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)protocolType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hostnameEquals:(id)arg1 ;
@end
