/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _password;
	NSNumber* _channel;

}

@property (copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * password;               //@synthesize password=_password - In the implementation block
@property (retain) NSNumber * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)password;
-(NSNumber *)channel;
-(void)setChannel:(NSNumber *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3 ;
-(void)setName:(NSString *)arg1 ;
@end
