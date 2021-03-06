/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNImageSignature : NSObject <NSSecureCoding> {

	FastRegistration_Signatures* _signature;

}

@property (readonly) const FastRegistration_Signatures* signature; 
+(BOOL)supportsSecureCoding;
-(const FastRegistration_Signatures*)signature;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

