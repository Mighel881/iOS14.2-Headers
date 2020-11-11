/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STTelephonyStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	STTelephonyStatusDomainSIMInfo* _SIMOneInfo;
	STTelephonyStatusDomainSIMInfo* _SIMTwoInfo;
	BOOL _cellularRadioCapabilityEnabled;
	BOOL _dualSIMEnabled;
	BOOL _radioModuleDead;

}

@property (setter=IMOneInfo,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * SIMOneInfo;                        //@synthesize SIMOneInfo=_SIMOneInfo - In the implementation block
@property (setter=IMTwoInfo,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * SIMTwoInfo;                        //@synthesize SIMTwoInfo=_SIMTwoInfo - In the implementation block
@property (getter=isCellularRadioCapabilityEnabled,nonatomic,readonly) BOOL cellularRadioCapabilityEnabled;              //@synthesize cellularRadioCapabilityEnabled=_cellularRadioCapabilityEnabled - In the implementation block
@property (getter=isDualSIMEnabled,nonatomic,readonly) BOOL dualSIMEnabled;                                              //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (getter=isRadioModuleDead,nonatomic,readonly) BOOL radioModuleDead;                                            //@synthesize radioModuleDead=_radioModuleDead - In the implementation block
@property (nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * primarySIMInfo; 
@property (nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * secondarySIMInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(STTelephonyStatusDomainSIMInfo *)SIMTwoInfo;
-(id)succinctDescription;
-(BOOL)isDualSIMEnabled;
-(STTelephonyStatusDomainSIMInfo *)SIMOneInfo;
-(BOOL)isRadioModuleDead;
-(STTelephonyStatusDomainSIMInfo *)secondarySIMInfo;
-(BOOL)isCellularRadioCapabilityEnabled;
-(id)_anySIMInfoWithSIMPresent;
-(id)init;
-(id)initWithSIMOneInfo:(id)arg1 SIMTwoInfo:(id)arg2 cellularRadioCapabilityEnabled:(BOOL)arg3 dualSIMEnabled:(BOOL)arg4 radioModuleDead:(BOOL)arg5 ;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_otherSIMInfoIfSIMPresent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)dataByApplyingDiff:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)diffFromData:(id)arg1 ;
-(STTelephonyStatusDomainSIMInfo *)primarySIMInfo;
-(id)_dataPreferredSIMInfoIfSIMPresent;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
