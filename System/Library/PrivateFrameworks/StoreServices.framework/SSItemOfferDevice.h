/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSItemOfferDeviceError, NSString;

@interface SSItemOfferDevice : NSObject {

	long long _deviceIdentifier;
	SSItemOfferDeviceError* _incompatibleDeviceError;
	SSItemOfferDeviceError* _incompatibleSystemError;
	NSString* _minimumProductVersion;

}

@property (nonatomic,readonly) long long deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * minimumProductVersion;                              //@synthesize minimumProductVersion=_minimumProductVersion - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleDeviceError;              //@synthesize incompatibleDeviceError=_incompatibleDeviceError - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleSystemError;              //@synthesize incompatibleSystemError=_incompatibleSystemError - In the implementation block
-(id)init;
-(id)initWithOfferDeviceDicitionary:(id)arg1 ;
-(id)initWithDeviceIdentifier:(long long)arg1 ;
-(SSItemOfferDeviceError *)incompatibleDeviceError;
-(SSItemOfferDeviceError *)incompatibleSystemError;
-(NSString *)minimumProductVersion;
-(long long)deviceIdentifier;
-(void)dealloc;
@end

