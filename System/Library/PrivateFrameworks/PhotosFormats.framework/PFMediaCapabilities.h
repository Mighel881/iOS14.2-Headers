/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSDictionary;

@interface PFMediaCapabilities : NSObject {

	NSDictionary* _capabilitiesInformation;

}

@property (retain) NSDictionary * capabilitiesInformation;              //@synthesize capabilitiesInformation=_capabilitiesInformation - In the implementation block
+(BOOL)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2 ;
+(unsigned)currentDeviceHEVCCapabilities;
+(id)legacyCapabilities;
+(id)capabilitiesForCurrentDevice;
+(BOOL)currentDeviceIsEligibleForHDRPlayback;
+(id)stringForSupport:(long long)arg1 ;
+(id)capabilitiesForCurrentDeviceWithOptions:(id)arg1 ;
+(id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1 ;
+(id)testCapabilitiesNotSupportingHEVC;
+(id)testCapabilitiesNotSupportingHEIF;
+(void)setRecordSlomoConfiguration:(id)arg1 ;
+(void)setRecordVideoConfiguration:(id)arg1 ;
+(long long)newFormatsConfiguration;
+(id)recordVideoConfigurationWithValidValues:(id)arg1 ;
+(id)recordSlomoConfigurationWithValidValues:(id)arg1 ;
-(long long)supportForAdjustmentBaseResources;
-(BOOL)supportsTranscodeChoice;
-(id)description;
-(NSDictionary *)capabilitiesInformation;
-(void)setCapabilitiesInformation:(NSDictionary *)arg1 ;
-(id)initWithOpaqueRepresentation:(id)arg1 ;
-(long long)supportForCodec:(unsigned)arg1 ;
-(long long)supportForContainerTypeIdentifier:(id)arg1 ;
-(long long)supportForLivePhotoVersion:(id)arg1 ;
-(long long)supportForAssetBundleVersion:(id)arg1 ;
-(long long)hevcDecodingSupportForFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(long long)hevcDecodingSupportForAVAsset:(id)arg1 ;
-(id)opaqueRepresentation;
-(long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2 ;
-(long long)userDefaultsPeerOverrideValue;
-(long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)arg1 selector:(SEL)arg2 ;
-(long long)userDefaultsPeerAssetBundleSupportOverrideValue;
@end

