/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDHealthServiceCharacteristic, HKDevice, NSError;

@interface _HDHealthServiceDataUpdate : NSObject {

	unsigned long long _sessionIdentifier;
	HDHealthServiceCharacteristic* _characteristic;
	HKDevice* _device;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSError * error;                                             //@synthesize error=_error - In the implementation block
-(HKDevice *)device;
-(NSError *)error;
-(unsigned long long)sessionIdentifier;
-(HDHealthServiceCharacteristic *)characteristic;
-(id)initWithSessionIdentifier:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 error:(id)arg4 ;
@end

