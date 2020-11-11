/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICNetworkConstraints, ICClientInfo, ICDeviceInfo, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned _allowsMutation : 1;
	ICNetworkConstraints* _networkConstraints;
	ICClientInfo* _clientInfo;
	ICDeviceInfo* _deviceInfo;
	ICURLResponseAuthenticationProvider* _authenticationProvider;

}

@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                                            //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) ICDeviceInfo * deviceInfo;                                                 //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent; 
@property (nonatomic,readonly) ICURLResponseAuthenticationProvider * authenticationProvider;              //@synthesize authenticationProvider=_authenticationProvider - In the implementation block
@property (nonatomic,copy,readonly) ICNetworkConstraints * networkConstraints;                            //@synthesize networkConstraints=_networkConstraints - In the implementation block
+(BOOL)supportsSecureCoding;
-(ICDeviceInfo *)deviceInfo;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(void)setClientInfo:(ICClientInfo *)arg1 ;
-(ICClientInfo *)clientInfo;
-(ICURLResponseAuthenticationProvider *)authenticationProvider;
-(unsigned long long)hash;
-(void)setDeviceInfo:(ICDeviceInfo *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithClientInfo:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2 ;
-(id)_webkitUserAgentVersion;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userAgent;
-(BOOL)_allowsMutation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICNetworkConstraints *)networkConstraints;
-(void)setNetworkConstraints:(ICNetworkConstraints *)arg1 ;
-(void)setAuthenticationProvider:(ICURLResponseAuthenticationProvider *)arg1 ;
@end
