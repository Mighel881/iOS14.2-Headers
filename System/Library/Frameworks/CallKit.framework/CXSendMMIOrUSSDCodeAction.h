/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSString, NSUUID;

@interface CXSendMMIOrUSSDCodeAction : CXAction {

	NSString* _code;
	long long _ttyType;
	NSUUID* _senderIdentityUUID;

}

@property (nonatomic,copy) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) long long ttyType;                        //@synthesize ttyType=_ttyType - In the implementation block
@property (nonatomic,retain) NSUUID * senderIdentityUUID;              //@synthesize senderIdentityUUID=_senderIdentityUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)ttyType;
-(id)customDescription;
-(NSUUID *)senderIdentityUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(NSString *)code;
-(id)initWithCoder:(id)arg1 ;
-(void)setTtyType:(long long)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)setSenderIdentityUUID:(NSUUID *)arg1 ;
@end

