/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier {

	NSString* _identifierString;

}

@property (copy,readonly) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)namespace;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAuthenticated;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)senderCorrelationIdentifier;
-(NSString *)identifierString;
-(id)initWithIdentifierString:(id)arg1 ;
@end
