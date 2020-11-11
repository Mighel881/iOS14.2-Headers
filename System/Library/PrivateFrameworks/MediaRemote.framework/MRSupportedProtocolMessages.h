/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding> {

	unsigned long long _lastSupportedMessageType;

}

@property (nonatomic,readonly) unsigned long long lastSupportedMessageType;              //@synthesize lastSupportedMessageType=_lastSupportedMessageType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isSupported:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLastSupportedMessageType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)lastSupportedMessageType;
@end
