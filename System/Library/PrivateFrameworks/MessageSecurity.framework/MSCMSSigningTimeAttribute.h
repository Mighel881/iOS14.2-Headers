/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder> {

	NSDate* _signingTime;

}

@property (retain,readonly) NSDate * signingTime;              //@synthesize signingTime=_signingTime - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithSigningTime:(id)arg1 ;
-(NSDate *)signingTime;
@end

