/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMDHome;

@interface HMDAccessoryCount : NSObject {

	HMDHome* _home;

}

@property (__weak) HMDHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long numHAPAccessories; 
@property (readonly) unsigned long long numCameraAccessories; 
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled; 
@property (readonly) unsigned long long numSecurityClassAccessories; 
@property (readonly) unsigned long long numCriticalSensorAccessories; 
-(id)initWithHome:(id)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(unsigned long long)numHAPAccessoriesWithAnyServiceWithTypes:(id)arg1 ;
-(unsigned long long)numHAPAccessories;
-(unsigned long long)numCameraAccessories;
-(unsigned long long)numCameraAccessoriesRecordingEnabled;
-(unsigned long long)numSecurityClassAccessories;
-(unsigned long long)numCriticalSensorAccessories;
@end

