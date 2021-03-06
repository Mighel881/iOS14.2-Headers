/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject <NSSecureCoding> {

	NSNumber* _channel;
	NSString* _networkName;
	NSString* _psk;

}

@property (nonatomic,retain) NSNumber * channel;                  //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * networkName;              //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * psk;                      //@synthesize psk=_psk - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)networkName;
-(NSString *)psk;
-(NSNumber *)channel;
-(void)setChannel:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPsk:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
@end

