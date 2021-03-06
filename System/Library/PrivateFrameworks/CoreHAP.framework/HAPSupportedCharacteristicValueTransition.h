/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVSignedNumberValue, HAPCharacteristicValueTransitionTypesWrapper, NSString;

@interface HAPSupportedCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVSignedNumberValue* _HAPInstanceID;
	HAPCharacteristicValueTransitionTypesWrapper* _transitionTypes;

}

@property (nonatomic,retain) HAPTLVSignedNumberValue * HAPInstanceID;                                     //@synthesize HAPInstanceID=_HAPInstanceID - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionTypesWrapper * transitionTypes;              //@synthesize transitionTypes=_transitionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVSignedNumberValue *)HAPInstanceID;
-(HAPCharacteristicValueTransitionTypesWrapper *)transitionTypes;
-(void)setHAPInstanceID:(HAPTLVSignedNumberValue *)arg1 ;
-(void)setTransitionTypes:(HAPCharacteristicValueTransitionTypesWrapper *)arg1 ;
-(id)initWithHAPInstanceID:(id)arg1 transitionTypes:(id)arg2 ;
@end

