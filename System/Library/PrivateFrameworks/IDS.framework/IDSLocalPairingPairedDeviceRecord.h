/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSLocalPairingRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding> {

	NSUUID* _cbuuid;

}

@property (nonatomic,readonly) NSUUID * cbuuid;              //@synthesize cbuuid=_cbuuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)cbuuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)publicIdentityClassA:(id*)arg1 ;
-(id)publicIdentityClassC:(id*)arg1 ;
-(id)publicIdentityClassD:(id*)arg1 ;
-(id)_publicIdenityForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithCBUUID:(id)arg1 publicIdentityDataClassA:(id)arg2 classC:(id)arg3 classD:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
@end
