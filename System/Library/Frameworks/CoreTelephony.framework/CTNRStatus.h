/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSADisabled;
	BOOL _isNSADisabled;
	unsigned long long _saDisabledReasonMask;
	unsigned long long _nsaDisabledReasonMask;

}

@property (assign,nonatomic) BOOL isSADisabled;                                     //@synthesize isSADisabled=_isSADisabled - In the implementation block
@property (assign,nonatomic) unsigned long long saDisabledReasonMask;               //@synthesize saDisabledReasonMask=_saDisabledReasonMask - In the implementation block
@property (assign,nonatomic) BOOL isNSADisabled;                                    //@synthesize isNSADisabled=_isNSADisabled - In the implementation block
@property (assign,nonatomic) unsigned long long nsaDisabledReasonMask;              //@synthesize nsaDisabledReasonMask=_nsaDisabledReasonMask - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)default;
-(id)initWithSADisabled:(BOOL)arg1 saReasonMask:(unsigned long long)arg2 nsaDisabled:(BOOL)arg3 nsaReasonMask:(unsigned long long)arg4 ;
-(BOOL)isSADisabled;
-(BOOL)isNSADisabled;
-(void)setIsSADisabled:(BOOL)arg1 ;
-(void)setIsNSADisabled:(BOOL)arg1 ;
-(unsigned long long)nsaDisabledReasonMask;
-(void)setNsaDisabledReasonMask:(unsigned long long)arg1 ;
-(unsigned long long)saDisabledReasonMask;
-(void)setSaDisabledReasonMask:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

