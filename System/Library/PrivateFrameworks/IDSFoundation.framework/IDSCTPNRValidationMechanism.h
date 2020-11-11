/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying> {

	long long _type;
	NSString* _context;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
+(id)SMSMechanismWithContext:(id)arg1 ;
+(id)SMSLessMechanism;
-(unsigned long long)hash;
-(id)initWithType:(long long)arg1 context:(id)arg2 ;
-(NSString *)context;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
