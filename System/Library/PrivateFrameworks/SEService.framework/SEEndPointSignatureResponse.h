/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SESEndPointSignature.h>

@class NSData;

@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature> {

	NSData* _signedData;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * signedData;              //@synthesize signedData=_signedData - In the implementation block
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithSignedData:(id)arg1 signature:(id)arg2 ;
-(NSData *)signature;
-(NSData *)signedData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSignedData:(NSData *)arg1 ;
-(id)description;
-(void)setSignature:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
